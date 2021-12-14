//
// Created by tangny on 2021/12/6.
//

#ifndef FRONTEND_CST_H
#define FRONTEND_CST_H

#include <string>
#include <vector>
#include "include/include_json.h"

class LexUnit {
public:
    std::string type;
    std::string id;

    LexUnit();
    LexUnit( std::string, std::string );
};

class CSTNode {
private:
    std::string type;
    std::string id;
    std::string listener;
    int termType;
    // 极少数产生式右部中会出现两个相同项
    // 这时需要靠相对位置来判断其语义
    int familyPos;

public:
    std::vector< CSTNode* > children;

    CSTNode();

    CSTNode(int, std::string, std::string );

    bool isTerminal() const { return termType == 0; }

    bool isNonTerminal() const { return termType == 1; }

    std::string getType() const { return type; }

    void setType(std::string _type) { type = _type; }

    std::string getId() const { return id; }

    void setId(std::string _id) { id = _id; }

    std::string getListener() const { return listener; }

    void setListener(std::string _listener) { listener = _listener; }

    void addChild(CSTNode* child ) { children.emplace_back(child); }

    const std::vector< CSTNode* >& getChildren() const { return children; }

    int getFamilyPos() const { return familyPos; }

    void setFamilyPos( int _pos ) { familyPos = _pos; }
};

void printCST( CSTNode*, int );

void deleteCST( CSTNode* );

json dumpCST(CSTNode* );

#endif //FRONTEND_CST_H
