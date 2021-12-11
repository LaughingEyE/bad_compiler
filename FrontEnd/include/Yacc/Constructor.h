//
// Created by tangny on 2021/10/17.
//

#ifndef FRONTEND_CONSTRUCTOR_H
#define FRONTEND_CONSTRUCTOR_H

#define MAX_PRODUCER_LEN 10
#define MAX_PRODUCER_NUM 1000

#include <vector>
#include <map>
#include "include/Yacc/Grammar.h"
#include "include/Yacc/Items.h"

using ull = unsigned long long;
const int reduceSign = 1 << 30;

//class Edge
//{
//public:
//    int to;
//    Token token;
//
//    Edge( int, Token );
//};

class Constructor {
protected:
    GrammarSet *grammarSet;

    std::vector<Item> itemSet;

    std::vector< std::vector< int > > trans;
    std::vector< std::vector< Token > > transT;
    std::vector< std::vector< int > > id;
    std::vector< std::pair< int, int > > index;
    int numEntry = 0;

    std::map<ull, int> hashTable;
    std::vector<int> prime;



    void initPrime();

    ull hash( Item );

    Item sClosure( Item );

    Item sGoto( Item, Token );

    Item laClosure( Item );

public:
    std::vector< Token > terminalList;
    std::map< Token, int > terminalIndex;
    int numTerminal = 0;
    std::vector< Token > nonTerminalList;
    std::map< Token, int > nonTerminalIndex;
    int numNonTerminal = 0;

    std::vector< std::vector< int > > actionTable;
    std::vector< std::vector< int > > gotoTable;

    Constructor( GrammarSet* );

    void generateTable();

    void printTable(const char* actionFile = "action.txt", const char* gotoFile = "goto.txt");

    void printItemSet( const char* filename = "item_set.txt" );
};

class LALRconstructor : public Constructor
{
public:
    LALRconstructor( GrammarSet* );

    void constructLR0Core();

    void labelPropagate();

    void extend();
};

#endif //FRONTEND_CONSTRUCTOR_H
