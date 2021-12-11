//
// Created by tangny on 2021/10/17.
//

#include <iostream>
#include <algorithm>
#include <queue>
#include <fstream>
#include <iomanip>
#include "include/Yacc/Constructor.h"
#include "include/Yacc/Items.h"
#include "include/Yacc/utils.h"

//Edge::Edge(int _to, Token _token)
//: to(_to), token(_token)
//{}

Constructor::Constructor(GrammarSet *_grammarSet) {
    grammarSet = _grammarSet;

    initPrime();
}

// 初始化素数表
void Constructor::initPrime() {
    std::vector<int> mark;
    int len = MAX_PRODUCER_LEN * MAX_PRODUCER_NUM * 30;
    int cnt = 0;
    mark.resize(len, 0);
    for(int i = 2;i < len;++i) {
        if(mark[i] == 0) {
            prime.emplace_back(i);
            cnt ++;
        }

        for(int j = 0;j < cnt && i * prime[j] < len;++j) {
            mark[i * prime[j]] = 1;
            if(i % prime[j] == 0) break;
        }
    }
}

ull Constructor::hash(Item item) {
    ull ret = 1;
    ull p;

    for(auto entry : item) {
        p = prime[entry.id * MAX_PRODUCER_LEN + entry.cur];
        ret *= p;
    }

    return ret;
}

Item Constructor::sClosure(Item item) {
    Item newItem = item;
    int itemCount = newItem.size();
    std::set< int > exists;

    for(int i = 0;i < itemCount;++i) {
        Entry entry = newItem[i];
        exists.insert(entry.id);
    }

    for(int i = 0;i < itemCount;++i) {
        Entry entry = newItem[i];
        if(grammarSet->isNonTerminal(entry.currentToken())) {
            auto productions = grammarSet->getProductionSet(entry.currentToken());

            for(auto production : productions) {
                if(exists.find(production.second) == exists.end()) {
                    newItem.emplace_back(
                            Entry(entry.currentToken(), production.first, production.second)
                    );
                    exists.insert(production.second);
                    itemCount ++;
                }
            }
        }
    }

    return newItem;
}

Item Constructor::sGoto(Item item, Token token) {
    Item newItem;

    for(Entry entry : item) {
        if(token == entry.currentToken())
            newItem.emplace_back(
                    Entry(entry.producer.first, entry.producer.second, entry.id, entry.cur + 1)
                    );
    }

    return newItem;
}

Item Constructor::laClosure(Item item) {
    Item newItem = item;
    int entryCount = newItem.size();
    std::map< int, int > exists;
    std::queue< int > update;

    for(int i = 0;i < entryCount;++i) {
        Entry entry = newItem[i];
        exists.insert(std::make_pair(entry.id, i));
    }

    for(int i = 0;i < entryCount;++i) {
        Entry entry = newItem[i];
        if(grammarSet->isNonTerminal(entry.currentToken())) {

            // 计算向前看符号
            int hasE = 1,  len = entry.producer.second.size();
            std::vector<Token> laVec;
            for(int i = entry.cur + 1;i < len;++i) {
                hasE = 0;
                std::vector< Token > appendList = grammarSet->FIRST(entry.producer.second[i]);
                for(Token token : appendList) {
                    if(token == EPSILON)
                        hasE = 1;
                    else
                        laVec.emplace_back(token);
                }
                if(hasE == 0)
                    break;
            }
            if(hasE == 1)
                laVec.insert(laVec.end(), entry.lookahead.begin(), entry.lookahead.end());

            auto productions = grammarSet->getProductionSet(entry.currentToken());

            for(auto production : productions) {
                if(exists.find(production.second) == exists.end()) {
                    newItem.emplace_back(
                            Entry(entry.currentToken(), production.first, production.second)
                    );
                    exists.insert(std::make_pair(production.second, entryCount));
                    entryCount ++;
                }

                int prev, subs;
                auto &toVec = newItem[exists[production.second]].lookahead;
                prev = toVec.size();
                toVec.insert(toVec.end(), laVec.begin(), laVec.end());
                dedup(toVec);
                subs = toVec.size();
                if(prev != subs)
                    update.push(exists[production.second]);
            }
        }
    }

    while(!update.empty()) {
        int cur = update.front();
        update.pop();
        Entry entry = newItem[cur];

        auto productions = grammarSet->getProductionSet(entry.currentToken());

        for(auto production : productions) {
            int prev, subs;
            auto &toVec = newItem[exists[production.second]].lookahead;
            prev = toVec.size();
            toVec.insert(toVec.end(), entry.lookahead.begin(), entry.lookahead.end());
            dedup(toVec);
            subs = toVec.size();
            if(prev != subs)
                update.push(exists[production.second]);
        }
    }

    for(int i = 0;i < entryCount;++i)
        dedup(newItem[i].lookahead);

    return newItem;
}

void Constructor::generateTable() {
    // 构造非终结符和终结符表
    for(Token token : grammarSet->m_tokenList) {
        if(grammarSet->isNonTerminal(token)) {
            nonTerminalList.emplace_back(token);
            numNonTerminal ++;
            nonTerminalIndex.insert(std::make_pair(token, numNonTerminal - 1));
        }
        else {
            terminalList.emplace_back(token);
            numTerminal ++;
            terminalIndex.insert(std::make_pair(token, numTerminal - 1));
        }
    }

    terminalList.emplace_back("$");
    numTerminal ++;
    terminalIndex.insert(std::make_pair("$", numTerminal - 1));

    // 设置表大小
    actionTable.resize(itemSet.size(),  std::vector<int>(numTerminal, -1));
    gotoTable.resize(itemSet.size(),  std::vector<int>(numNonTerminal, -1));

    int tempNumItems = itemSet.size();
    for(int i = 0;i < tempNumItems;++i) {
        Item item = itemSet[i];

        // 处理移入和Goto
        int tempNumTokens = transT[i].size();
        for(int j = 0;j < tempNumTokens;++j) {
            Token token = transT[i][j];
            if(grammarSet->isNonTerminal(token)) {
                gotoTable[i][nonTerminalIndex[token]] = trans[i][j];
            }
            else {
                if(actionTable[i][terminalIndex[token]] != -1)
                    std::cout << "report shift/shift conflict.\n";
                actionTable[i][terminalIndex[token]] = trans[i][j];
            }
        }

        // 处理规约
        for(Entry entry : item) {
            if(entry.currentToken() == OUT_OF_BOUND) {
                if (entry.producer.first == HYPER_STATEMENT) {
                    if (*std::lower_bound(entry.lookahead.begin(), entry.lookahead.end(), "$") == "$") {

                        // 处理冲突
                        // 移入 / 规约冲突 : 优先移入
                        if (actionTable[i][terminalIndex["$"]] != -1 &&
                            actionTable[i][terminalIndex["$"]] < reduceSign) {
                            std::cout << "report shift/reduce conflict.\n";
                            std::cout << "conflict token is " << "$" << ".\n";
                            for(Entry entryt : item) {
                                if(entryt.currentToken() == "$")
                                    printEntry(entryt);
                            }
                            printEntry(entry);
                            std::cout << std::endl;
                            continue;
                        }
                        // 规约 / 规约冲突 : 目前没有
                        if (actionTable[i][terminalIndex["$"]] != -1 &&
                            actionTable[i][terminalIndex["$"]] >= reduceSign) {
                            std::cout << "report reduce/reduce conflict.\n";
                        }

                        actionTable[i][terminalIndex["$"]] = reduceSign | entry.id;
                    }
                }
                else {
                    for (Token token: entry.lookahead) {

                        // 处理冲突
                        // 移入 / 规约冲突 : 优先移入
                        if (actionTable[i][terminalIndex[token]] != -1 &&
                            actionTable[i][terminalIndex[token]] < reduceSign) {
                            std::cout << "report shift/reduce conflict:\n";
                            std::cout << "conflict token is " << token << ".\n";
                            for(Entry entryt : item) {
                                if(entryt.currentToken() == token)
                                    printEntry(entryt);
                            }
                            printEntry(entry);
                            std::cout << std::endl;
                            continue;
                        }
                        // 规约 / 规约冲突 : 目前没有
                        if (actionTable[i][terminalIndex[token]] != -1 &&
                            actionTable[i][terminalIndex[token]] >= reduceSign) {
                            std::cout << "report reduce/reduce conflict.\n";
                        }

                        actionTable[i][terminalIndex[token]] = reduceSign | entry.id;
                    }
                }
            }
        }
    }
}

void Constructor::printTable(const char* actionFile, const char* gotoFile) {
    std::ofstream actionStream(actionFile);
    std::ofstream gotoStream(gotoFile);

    actionStream << std::setw(7) << "#Item";
    for (auto token: terminalList)
        actionStream << std::setw(7) << token;
    actionStream << std::endl;
    for (int i = 0; i < itemSet.size(); ++i) {
        actionStream << std::setw(7) << "I" << i;
        for (int j = 0; j < terminalList.size(); ++j) {
            if (actionTable[i][j] >= reduceSign)
                actionStream << std::setw(7) << "r" << (actionTable[i][j] ^ reduceSign);
            else if (actionTable[i][j] >= 0)
                actionStream << std::setw(7) << "s" << actionTable[i][j];
            else
                actionStream << std::setw(7) << actionTable[i][j];
        }
        actionStream << std::endl;
    }

    gotoStream << std::setw(10) << "#Item";
    gotoStream << std::endl;
    for (auto token: nonTerminalList)
        gotoStream << std::setw(10) << token;
    for (int i = 0; i < itemSet.size(); ++i) {
        gotoStream << std::setw(10) << "I" << i;
        for (int j = 0; j < nonTerminalList.size(); ++j) {
            gotoStream << std::setw(10) << gotoTable[i][j];
        }
        gotoStream << std::endl;
    }
}

void Constructor::printItemSet(const char* filename) {
    std::ofstream outputFile(filename);

    outputFile << "There are " << itemSet.size() << " items in the itemSet.\n" << "They are:\n";
    int siz = itemSet.size();

    for (int i = 0;i < siz;++i) {
        outputFile << "I" << i << ":" << std::endl;
        Item item = itemSet[i];
        printItemToStream(item, outputFile);
    }
    outputFile << std::endl;
}

LALRconstructor::LALRconstructor(GrammarSet *_grammarSet)
: Constructor(_grammarSet)
{}

void LALRconstructor::constructLR0Core() {
    while(!itemSet.empty())
        itemSet.pop_back();

    // 在项集中加入初始项
    Item initItem;
    Producer producer = grammarSet->getProducer(0);
    initItem.emplace_back(
            Entry(producer.first, producer.second, 0)
    );
    itemSet.emplace_back(initItem);
    int itemCount = itemSet.size();
    id.emplace_back(std::vector< int >(1, numEntry));
    index.emplace_back(std::make_pair(0, 0));

    for(int i = 0;i < itemCount;++i) {
        std::vector< int > to;
        std::vector< Token > toT;
        Item itemClosure =  sClosure(itemSet[i]);

        for(Token &token : grammarSet->m_tokenList) {
            Item  newItem = sGoto(itemClosure, token);
            if(!newItem.empty()) {
                ull hashCode = hash(newItem);
                int pos;

                if(hashTable.find(hashCode) == hashTable.end()) {
                    itemSet.emplace_back(newItem);
                    itemCount ++;

                    pos = itemSet.size() - 1;
                    hashTable.insert(std::make_pair(hashCode, pos));

                    std::vector< int > sid;
                    for(int j = 0;j < newItem.size();++j) {
                        sid.emplace_back(++numEntry);
                        index.emplace_back(std::make_pair(pos, j));
                    }
                    id.emplace_back(sid);
                }
                else
                    pos = hashTable[hashCode];

                to.emplace_back(pos);
                toT.emplace_back(token);
            }
        }
        trans.emplace_back(to);
        transT.emplace_back(toT);
    }
}

void LALRconstructor::labelPropagate() {
    int numItem = itemSet.size();
    int numEntry = index.size();

    // 标记传递路径
    std::vector< std::vector< int > > labelPath(numEntry);

    // 每个条目节点的入度
    std::vector< int > inDegree(numEntry, 0);

    // 节点的拓扑序
    std::vector< int > topOrder;

    // 拓扑排序队列
    std::queue< int > q;
    std::vector< int > visit(numEntry, 0);
    std::vector< int > inStack(numEntry, 0);

    // 确定labelPath和初始lookahead
    for(int i = 0;i < numItem;++i) {
        Item item = itemSet[i];
        int itemSize = item.size();
        for(int j = 0;j < itemSize;++j) {
            Entry entry = item[j];
            entry.lookahead.resize(0);
            entry.lookahead.emplace_back("#");
            std::vector< int > &path = labelPath[id[i][j]];
            Item itemClosure = laClosure(std::vector< Entry >(1, entry));
            //Fixme:
            // 如果这里不加任何输出语句会导致 std::bad_alloc
            // 现在好像没问题了
            // 比较玄学，有问题再调
            // std::cout << " ";

            // 与之后的goto项匹配
            for(Entry &cEntry : itemClosure)
                cEntry.cur ++;
            sort(itemClosure.begin(), itemClosure.end());

            auto toItem = trans[i];
            for(int k : toItem) {
                Item &nextItem = itemSet[k];
                for(int l = 0;l < nextItem.size();++l) {
                    auto lower = std::lower_bound(itemClosure.begin(),
                                                  itemClosure.end(), nextItem[l]);
                    if(lower != itemClosure.end() && *lower == nextItem[l]) {
                        nextItem[l].lookahead.insert(nextItem[l].lookahead.end(),
                                                     (*lower).lookahead.begin(),
                                                     (*lower).lookahead.end()
                        );

                        // 将第k个项中的第l个条目加入当前条目的传播列表中
                        // (*lower).lookahead 已经有序
                        auto flagIter =
                            std::lower_bound((*lower).lookahead.begin(), (*lower).lookahead.end(), "#");
                        if(flagIter != (*lower).lookahead.end() && *flagIter == "#")
                            path.emplace_back(id[k][l]);
                    }
                }
            }
        }
    }
    // 增加$符号
    itemSet[0][0].lookahead.emplace_back("$");

    // lookahead去重
    for(Item &item : itemSet)
        for(Entry &entry : item)
            if(!entry.lookahead.empty()) {
                dedup(entry.lookahead);
//                auto flagIter =
//                    std::lower_bound(entry.lookahead.begin(), entry.lookahead.end(), "#");
//                if((*flagIter) == "#")
//                    entry.lookahead.erase(flagIter);
                entry.lookahead.erase(std::remove(entry.lookahead.begin(), entry.lookahead.end(), "#"), entry.lookahead.end());
            }
    // 拓扑排序
//    for(auto path : labelPath)
//        for(int to : path)
//            inDegree[to] ++;
//
//    for(int i = 0;i < numEntry;++i)
//        if(inDegree[i] == 0) q.push(i);
//
//    int curId;
//    std::pair<int, int> loc, toLoc;
//    Entry curEntry;
//    while(!q.empty()) {
//        curId = q.front();
//        loc = index[curId];
//        curEntry = itemSet[loc.first][loc.second];
//        q.pop();
//        visit[curId] = 1;
//
//        for(int to : labelPath[curId]) {
//            toLoc = index[to];
//            std::vector<Token> &toLookahead = itemSet[toLoc.first][toLoc.second].lookahead;
//            toLookahead.insert(
//                    toLookahead.end(), curEntry.lookahead.begin(), curEntry.lookahead.end()
//                    );
//            inDegree[to] --;
//            if(inDegree[to] == 0)
//                q.push(to);
//        }
//    }

    for(auto path : labelPath) {
        for (int to: path)
            inDegree[to]++;
    }

    for(int i = 0;i < numEntry;++i)
        q.push(i);
//        if(inDegree[i] == 0) {
//            inStack[i] = 1;
//            q.push(i);
//        }

    int curId;
    std::pair<int, int> loc, toLoc;
    Entry curEntry;
    while(!q.empty()) {
        curId = q.front();
        loc = index[curId];
        curEntry = itemSet[loc.first][loc.second];
        q.pop();
        inStack[curId] = 0;
//        visit[curId] = 1;

        for(int to : labelPath[curId]) {
            toLoc = index[to];
            std::vector<Token> &toLookahead = itemSet[toLoc.first][toLoc.second].lookahead;
            int prevLen = toLookahead.size(), subsLen = 0;
            toLookahead.insert(
                    toLookahead.end(), curEntry.lookahead.begin(), curEntry.lookahead.end()
            );
            dedup(toLookahead);
            subsLen = toLookahead.size();

            if(prevLen != subsLen && inStack[to] == 0) {
                q.push(to);
                inStack[to] = 1;
            }
        }
    }

//    int count = 0;
//    for(int i : visit)
//        if(i == 0) count ++;
//    std::cout << count << '/' << numEntry;

    // lookahead去重
    for(Item &item : itemSet)
        for(Entry &entry : item)
            if(!entry.lookahead.empty())
                dedup(entry.lookahead);
}

void LALRconstructor::extend() {
    for(Item &item : itemSet)
        item = laClosure(item);
}