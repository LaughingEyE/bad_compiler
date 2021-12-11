//
// Created by tangny on 2021/12/8.
//

#include <cassert>
#include <iostream>
#include "include/AST/ASTBuilder.h"

TranslationUnitDecl* ASTBuilder::constructAST(CSTNode *head, int verbose) {
    assert(head != NULL && "ASTBuilder receives invalid concrete syntax tree.\n");

    while(!nodeStack.empty()) nodeStack.pop();
    TranslationUnitDecl *translationUnitDecl = new TranslationUnitDecl();
    nodeStack.push(translationUnitDecl);
    recursiveVisitCST(head);

    assert(nodeStack.size() == 1 && "ASTBuilder receives invalid concrete syntax tree.\n");
    return translationUnitDecl;
}

void ASTBuilder::recursiveVisitCST(CSTNode *node) {
#define LISTEN(TYPE)                            \
    if(node->getListener() == #TYPE)            \
        enter##TYPE(node);
#include "include/AST/ListenerTypes.inc"
#ifdef LISTEN
#undef LISTEN
#endif

    for(auto child : node->children)
        recursiveVisitCST(child);

#define LISTEN(TYPE)                            \
    if(node->getListener() == #TYPE)            \
        quit##TYPE(node);
#include "include/AST/ListenerTypes.inc"
}

#define SEC_GET_DECL(DECL)                                  \
    assert(nodeStack.top()->isDecl());                      \
    Decl *p##DECL = dynamic_cast<Decl*>(nodeStack.top());   \
    nodeStack.pop();                                        \
    assert(p##DECL->getKind() == Decl::k_##DECL);           \
    p##DECL = dynamic_cast<DECL*>(p##DECL);

#define SEC_GET_STMT(STMT)                                  \
    assert(nodeStack.top()->isStmt());                      \
    Decl *p##STMT = dynamic_cast<Stmt*>(nodeStack.top());   \
    nodeStack.pop();                                        \
    assert(p##STMT->getKind() == Decl::k_##STMT);           \
    p##STMT = dynamic_cast<STMT*>(p##STMT);

void ASTBuilder::enterFuncDef( CSTNode* node ) {
    FunctionDecl *functionDecl = new FunctionDecl("ss", QualType(BuiltInType(BuiltInType::_int)));
    nodeStack.push(functionDecl);
}

void ASTBuilder::quitFuncDef( CSTNode* node ) {
    SEC_GET_DECL(FunctionDecl);

    AbstractASTNode *parent = nodeStack.top();
    if(parent->isDecl() && dynamic_cast<Decl*>(parent)->getKind() == Decl::k_TranslationUnitDecl) {
        dynamic_cast<TranslationUnitDecl*>(parent)->addDecl(pFunctionDecl);
    }
    else {
        std::cout << "error";
    }
}