//
// Created by tangny on 2021/10/16.
//

#include <iostream>
#include <vector>
#include <cassert>
#include <set>
#include "include/Yacc/Grammar.h"

bool GrammarSet::isTerminal(Token token) const {
    return m_grammarSet.find(token) == m_grammarSet.end();
}

bool GrammarSet::isNonTerminal(Token token) const {
    return m_grammarSet.find(token) != m_grammarSet.end();
}

void GrammarSet::addProducer(Token token, TokenArray tokenArray) {
    // 在vector中加入产生式
    m_grammarList.emplace_back(token, tokenArray);
    producerCount ++;

    // 在map中加入产生式
    if(isTerminal(token)) {
        std::vector<Production> productionSet;
        productionSet.emplace_back(
                std::make_pair(tokenArray, producerCount - 1)
                );
        m_grammarSet.insert(
                std::make_pair(token, productionSet)
                );
    }
    else
        m_grammarSet[token].emplace_back(
                std::make_pair(tokenArray, producerCount - 1)
                );

    // 输出产生式
    if(verbose == 1)
         printProducer(
                 m_grammarList[producerCount - 1]
         );

    while(m_listeners.size() < producerCount)
        m_listeners.resize(2 * m_listeners.size(), "Pass");
}

void GrammarSet::addToken(Token token) {
    m_tokenList.emplace_back(token);
    tokenCount ++;
}

void GrammarSet::addListenerToCurrentProducer(std::string listener) {
    while(m_listeners.size() < producerCount)
        m_listeners.resize(2 * m_listeners.size(), "Pass");
    m_listeners[producerCount - 1] = listener;

}

std::vector<Production> GrammarSet::getProductionSet(Token token) {
    std::vector<Production> producerSet;
    if(isNonTerminal(token))
        producerSet = m_grammarSet[token];
    return producerSet;
}

// 递归求解FIRST集合
std::vector< Token > GrammarSet::FIRST(Token token) {
    // 是终结符
    if(isTerminal(token))
        return std::vector< Token >(1, token);

    // 已搜索过
    if(m_firstSet.find(token) != m_firstSet.end())
        return m_firstSet[token];

    std::vector< Token > &firstSet = m_firstSet[token];
    std::set< Token > exists;
    auto productions = getProductionSet(token);
    int hasE;

    for(Production production : productions) {
        for(Token sToken : production.first) {
            hasE = 0;
            std::vector< Token > subSet = FIRST(sToken);
            for(Token fToken : subSet) {
                exists.insert(fToken);
                if(fToken == EPSILON)
                    hasE = 1;
            }

            if(hasE == 0)
                break;
        }
    }

    for(std::set< Token >::iterator iter = exists.begin(); iter != exists.end();iter++) {
        firstSet.emplace_back(*iter);
    }

    return firstSet;
}

void printProducer(Producer producer) {
    std::cout << producer.first << " ->";
    for(Token token : producer.second)
        std::cout << ' ' << token;
    std::cout << std::endl;
}