//
// Created by tangny on 2021/12/2.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include "include/Parser/CSTBuilder.h"
#include "include/Yacc/Grammar.h"

CSTBuilder::CSTBuilder(Constructor *_parseTable, GrammarSet *_grammarSet)
: parseTable(_parseTable), grammarSet(_grammarSet)
{}

CSTNode* CSTBuilder::constructCST(std::vector<LexUnit> lexInput, int verbose) {
    if(grammarSet == NULL || parseTable == NULL) {
        std::cout << "CSTBuilder needs to be constructed first." << std::endl;
        return NULL;
    }
    lexInput.emplace_back(LexUnit("$", "$"));
    if(verbose) std::cout << "Begin constructing CST:" << std::endl;

    while(!nodeStack.empty()) nodeStack.pop();
    while(!stateStack.empty()) stateStack.pop();
    stateStack.push(0);

    std::vector< std::vector< int > > &actionTable = parseTable->actionTable;
    std::vector< std::vector< int > > &gotoTable = parseTable->gotoTable;
    std::map< Token, int > &terminalIndex = parseTable->terminalIndex;
    std::map< Token, int > &nonTerminalIndex = parseTable->nonTerminalIndex;
    int i = 0;
    int curState = 0;
    int inputLen = lexInput.size();

    while(true) {
        // 发生错误
        if(i >= inputLen) {
            std::cout << "An error occurred in parser: ";
            std::cout << "program not complete.\n";
            return NULL;
        }

        LexUnit unit = lexInput[i];
        curState = stateStack.top();
        int next = actionTable[curState][terminalIndex[unit.type]];

        // 发生错误
        if(next == -1) {
            std::cout << "An error occurred in parser: ";
            std::cout << "run into illegal entry.\n";
//            std::cout <<  curState << std::endl;
//            std::cout <<  unit.id << std::endl;
            return NULL;
        }

        // 移入
        if((next & reduceSign) == 0) {
            stateStack.push(next);
            CSTNode *node = new CSTNode(0, unit.id, unit.type);
            nodeStack.push(node);
            i ++;
        }
        // 归约
        else if(next != reduceSign) {
            int id = next ^ reduceSign;
            Producer producer = grammarSet->getProducer(id);
            CSTNode* pNode = new CSTNode(1, "", producer.first);
            pNode->setListener(grammarSet->getListener(id));
            int producerSiz = producer.second.size();
            for(int j = 0;j < producerSiz;++j) {
                if(stateStack.empty()) {
                    std::cout << "An error occurred in parser: ";
                    std::cout << "require pop when stack is already empty.\n";
                    return NULL;
                }
                pNode->addChild(nodeStack.top());
                nodeStack.pop();
                stateStack.pop();
            }
            curState = stateStack.top();
            stateStack.push(gotoTable[curState][nonTerminalIndex[producer.first]]);

            std::reverse(pNode->children.begin(), pNode->children.end());
            int pNodeSiz = pNode->children.size();
            for(int j = 0;j < pNodeSiz;++j) {
                pNode->children[j]->setFamilyPos(j);
            }
            nodeStack.push(pNode);

            if(verbose) printProducer(producer);
//            std::cout <<  curState << std::endl;
//            std::cout <<  unit.id << std::endl;
        }
        // 接受
        else {
            if(verbose) std::cout << "Accepted\n";
            CSTNode *topNode = nodeStack.top();
            return topNode;
        }
    }
}