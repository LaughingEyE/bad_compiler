//
// Created by tangny on 2021/12/8.
//

#ifndef FRONTEND_ASTBUILDER_H
#define FRONTEND_ASTBUILDER_H

#include <stack>
#include "include/AST/Decl.h"
#include "include/AST/Stmt.h"
#include "include/AST/Type.h"
#include "include/AST/AbstractASTNode.h"
#include "include/Parser/CST.h"

class ASTBuilder {
private:
    std::stack< AbstractASTNode* > nodeStack;

    void recursiveVisitCST( CSTNode* );

public:
    TranslationUnitDecl* constructAST(CSTNode*, int = 0 );

    // 监听器函数
    void enterFuncDef( CSTNode* );

    void quitFuncDef( CSTNode* );
};

#endif //FRONTEND_ASTBUILDER_H
