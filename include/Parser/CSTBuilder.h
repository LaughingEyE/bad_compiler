//
// Created by tangny on 2021/12/2.
//

#ifndef FRONTEND_CSTBUILDER_H
#define FRONTEND_CSTBUILDER_H

#include <vector>
#include <map>
#include <stack>
#include "include/Yacc/Grammar.h"
#include "include/Yacc/Constructor.h"
#include "include/Parser/CST.h"

class CSTBuilder {
private:
    Constructor *parseTable;
    GrammarSet *grammarSet;

    std::stack< CSTNode* > nodeStack;
    std::stack< int > stateStack;

public:
    CSTBuilder(Constructor *_parseTable = NULL , GrammarSet *_grammarSet = NULL );

    CSTNode* constructCST(std::vector< LexUnit > , int = 1 );
};

#endif //FRONTEND_CSTBUILDER_H
