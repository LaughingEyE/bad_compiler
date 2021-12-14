//
// Created by tangny on 2021/10/16.
//

#ifndef FRONTEND_GRAMMAR_H
#define FRONTEND_GRAMMAR_H

#include <string>
#include <vector>
#include <map>

typedef std::string Token;
typedef std::vector<Token> TokenArray;
typedef std::pair<Token, TokenArray> Producer;
typedef std::pair<TokenArray, int> Production;

const Token EPSILON = "epsilon_expression";
const Token OUT_OF_BOUND = "token_out_of_bound";
const Token HYPER_STATEMENT = "hyper_statement";

class GrammarSet
{
private:
    std::map< Token, std::vector< Production > > m_grammarSet;
    std::map< Token, std::vector< Token > > m_firstSet;
    std::vector< std::string > m_listeners;
    std::vector< Producer > m_grammarList;

public:
    int verbose;
    int tokenCount;
    int producerCount;

    GrammarSet() {
        m_listeners.resize(128);
        verbose = 0;
        tokenCount = 0;
        producerCount = 0;
    }

    std::vector< Token > m_tokenList;

    bool isTerminal( Token ) const ;

    bool isNonTerminal( Token ) const ;

    void addProducer( Token, TokenArray );

    void addToken( Token );

    void addListenerToCurrentProducer(std::string listener);

    std::vector< Production > getProductionSet( Token );

    Producer getProducer( int id ) const { return m_grammarList[id]; }

    int getProducerCount() const { return producerCount; }

    std::string getListener( int id ) const { return m_listeners[id]; }

    std::vector< Token > FIRST( Token );

    std::vector< Token > FIRST( TokenArray );
};

void printProducer( Producer );

#endif //FRONTEND_GRAMMAR_H