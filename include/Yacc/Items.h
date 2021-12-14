//
// Created by tangny on 2021/10/17.
//

#ifndef FRONTEND_ITEMS_H
#define FRONTEND_ITEMS_H

#include <set>
#include <fstream>
#include "include/Yacc/Grammar.h"

class Entry
{
public:
    Producer producer;
    // 当前标点位置
    int cur;
    // 条目对应产生式id
    int id;
    // 向前看符号
    // 在LR0项中的条目忽略此项
    std::vector<Token> lookahead;

    Entry();

    Entry( Token _token, TokenArray _tokenArray, int _id, int _cur = 0 );

    bool operator < ( Entry ) const;

    bool operator == ( Entry ) const;

    Token currentToken();
};

typedef std::vector< Entry > Item;

void printEntry( Entry );

void printEntryToStream( Entry , std::ofstream& );

void printItem( Item );

void printItemToStream( Item , std::ofstream& );

#endif //FRONTEND_ITEMS_H