//
// Created by tangny on 2021/10/17.
//

#include <iostream>
#include "include/Yacc/Items.h"

Entry::Entry() {}

Entry::Entry(Token _token, TokenArray _tokenArray, int _id, int _cur) {
    id = _id;
    cur = _cur;
    producer = std::make_pair(_token, _tokenArray);
}

Token Entry::currentToken() {
    if(cur >= producer.second.size())
        return OUT_OF_BOUND;
    return producer.second[cur];
}

bool Entry::operator < (Entry comp) const {
    if(id == comp.id)
        return cur < comp.cur;
    return id < comp.id;
}

bool Entry::operator == (Entry comp) const {
    return id == comp.id && cur == comp.cur;
}

void printEntry(Entry entry) {
    std::cout << entry.producer.first << " ->";

    int siz = entry.producer.second.size();
    for(int i  = 0;i < siz;++i) {
        if(entry.cur == i)
            std::cout << " @" << entry.producer.second[i];
        else
            std::cout << " " << entry.producer.second[i];
    }
    if(entry.cur >= siz)
        std::cout << "@";

    if(!entry.lookahead.empty()) {
        std::cout << " , ";
        for(int i = 0;i < entry.lookahead.size();++i) {
            if(i != 0) std::cout << '/';
            std::cout << entry.lookahead[i];
        }
    }
    std::cout << std::endl;
}

void printEntryToStream(Entry entry, std::ofstream &osm) {
    osm << entry.producer.first << " ->";

    int siz = entry.producer.second.size();
    for(int i  = 0;i < siz;++i) {
        if(entry.cur == i)
            osm << " @" << entry.producer.second[i];
        else
            osm << " " << entry.producer.second[i];
    }
    if(entry.cur >= siz)
        osm << "@";

    if(!entry.lookahead.empty()) {
        osm << " , ";
        for(int i = 0;i < entry.lookahead.size();++i) {
            if(i != 0) osm << '/';
            osm << entry.lookahead[i];
        }
    }
    osm << std::endl;
}

void printItem(Item item) {
    for(Entry entry : item)
        printEntry(entry);
}

void printItemToStream(Item item, std::ofstream &osm) {
    for(Entry entry : item)
        printEntryToStream(entry, osm);
}