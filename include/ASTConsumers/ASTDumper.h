//
// Created by tangny on 2021/12/10.
//

#ifndef FRONTEND_ASTDUMPER_H
#define FRONTEND_ASTDUMPER_H

#include <stack>
#include "include/include_json.h"
#include "include/AST/RecursiveASTVisitor.h"
#include<iostream>
using namespace std;
class ASTDumper : public RecursiveASTVisitor<ASTDumper> {
private:
    std::stack< AbstractASTNode* >recordLevel;

public:
#define DECL(CLASS, BASE)       \
  bool cleanup##CLASS() {       \
    recordLevel.pop();          \
  }
#include "include/AST/DeclNodes.h"

#define STMT(CLASS, BASE)       \
  bool cleanup##CLASS() {       \
    recordLevel.pop();          \
  }
#include "include/AST/StmtNodes.h"

    void outSpace()
    {
        int n = recordLevel.size();
        for (int i = 0; i != n; ++i)
            cout << " ";
        cout << "|";
    }
    void outType(QualType t)
    {
        cout << "(";
        cout << "cbtbtbtp";
        cout << ")";
    }

    bool visitTranslationUnitDecl(TranslationUnitDecl *D) {
        std::cout << "TranslationUnitDecl\n";
        return true;
    }
    bool cleanupTranslationUnitDecl(TranslationUnitDecl *D) {
        recordLevel.pop();
        return true;
    }
    bool visitValueDecl(ValueDecl* D)
    {
        outSpace();
        recordLevel.push(D);
        cout << "ValueDecl " << "[" << D->getName() << "] ";
        outType(D->getType());
        cout << "\n";
        return true;
    }
    bool cleanupValueDecl(ValueDecl* D) {
        recordLevel.pop();
        return true;
    }
    bool visitDeclaratorDecl(DeclaratorDecl* D)
    {
        outSpace();
        recordLevel.push(D);
        cout << "DeclaratorDecl " << "[" << D->getName() << "] ";
        outType(D->getType());
        cout << "\n";
        return true;
    }
    bool cleanupDeclaratorDecl(DeclaratorDecl* D){
        recordLevel.pop();
        return true;
    }
    bool visitVarDecl(VarDecl* D)
    {
        outSpace();
        recordLevel.push(D);
        cout << "VarDecl " << "[" << D->getName() << "] ";
        outType(D->getType());
        cout << "\n";
        return true;
    }
    bool cleanupVarDecl(VarDecl* D){
        recordLevel.pop();
        return true;
    }
    bool visitFunctionDecl(FunctionDecl* D) {
        outSpace();
        recordLevel.push(D);
        std::cout << "FunctionDecl " << "[" << D->getName() << "] ";
        outType(D->getType());
        cout << "\n";
        return true;
    }
    bool cleanupFunctionDecl(FunctionDecl* D){
        recordLevel.pop();
        return true;
    }
    bool visitParamVarDecl(ParamVarDecl* D)
    {
        outSpace();
        recordLevel.push(D);
        cout << "ParamVarDecl " << "[" << D->getName() << "] ";
        outType(D->getType());
        cout << "\n";
        return true;
    }
    bool cleanupParamVarDecl(ParamVarDecl* D){
        recordLevel.pop();
        return true;
    }
    bool visitCompoundStmt(CompoundStmt* S)
    {
        outSpace();
        recordLevel.push(S);
        cout << "CompoundStmt\n";
        return true;
    }
    bool cleanupCompoundStmt(CompoundStmt* S){
        recordLevel.pop();
        return true;
    }
    bool visitDeclStmt(DeclStmt* S)
    {
        outSpace();
        recordLevel.push(S);
        cout << "DeclStmt\n";
        return true;
    }
    bool cleanupDeclStmt(DeclStmt* S){
        recordLevel.pop();
        return true;
    }
    bool visitWhileStmt(WhileStmt* S)
    {
        outSpace();
        recordLevel.push(S);
        cout << "WhileStmt\n";
        return true;
    }
    bool cleanupWhileStmt(WhileStmt* S){
        recordLevel.pop();
        return true;
    }
    bool visitDoWhileStmt(DoWhileStmt* S)
    {
        outSpace();
        recordLevel.push(S);
        cout << "DoWhileStmt\n";
        return true;
    }
    bool cleanupDoWhileStmt(DoWhileStmt* S){
        recordLevel.pop();
        return true;
    }
    bool visitForStmt(ForStmt* S)
    {
        outSpace();
        recordLevel.push(S);
        cout << "ForStmt\n";
        return true;
    }
    bool cleanupForStmt(ForStmt* S){
        recordLevel.pop();
        return true;
    }
    bool visitIfStmt(IfStmt* S)
    {
        outSpace();
        recordLevel.push(S);
        cout << "IfStmt\n";
        return true;
    }
    bool cleanupIfStmt(IfStmt* S){
        recordLevel.pop();
        return true;
    }
    bool visitReturnStmt(ReturnStmt* S)
    {
        outSpace();
        recordLevel.push(S);
        cout << "ReturnStmt\n";
        return true;
    }
    bool cleanupReturnStmt(ReturnStmt* S){
        recordLevel.pop();
        return true;
    }
    bool visitUnaryOperator(UnaryOperator* E)
    {
        outSpace();
        recordLevel.push(E);
        cout << "UnaryOperator ";
        outType(E->getType());
        cout << "\n";
        return true;
    }
    bool cleanupUnaryOperator(UnaryOperator* E){
        recordLevel.pop();
        return true;
    }
    bool visitBinaryOperator(BinaryOperator* E)
    {
        outSpace();
        recordLevel.push(E);
        cout << "BinaryOperator ";
        outType(E->getType());
        cout << "\n";
        return true;
    }
    bool cleanupBinaryOperator(BinaryOperator* E){
        recordLevel.pop();
        return true;
    }
    bool visitCallExpr(CallExpr* E)
    {
        outSpace();
        recordLevel.push(E);
        cout << "CallExpr ";
        outType(E->getType());
        cout << "\n";
        return true;
    }
    bool cleanupCallExpr(CallExpr* E){
        recordLevel.pop();
        return true;
    }
    bool visitDeclRefExpr(DeclRefExpr* E)
    {
        outSpace();
        recordLevel.push(E);
        cout << "DeclRefExpr " << "[" << E->getRefname() << "] ";
        outType(E->getType());
        cout << "\n";
        return true;
    }
    bool cleanupDeclRefExpr(DeclRefExpr* E){
        recordLevel.pop();
        return true;
    }
    bool visitIntegerLiteral(IntegerLiteral* E)
    {
        outSpace();
        recordLevel.push(E);
        cout << "IntegerLiteral "<<"[" <<E->getValue() << "] ";
        outType(E->getType());
        cout << "\n";
        return true;
    }
    bool cleanupIntegerLiteral(IntegerLiteral* E){
        recordLevel.pop();
        return true;
    }
    bool visitExplicitCastExpr(ExplicitCastExpr* E)
    {
        outSpace();
        recordLevel.push(E);
        cout << "ExplicitCastExpr ";
        outType(E->getPrevType());
        //箭头左边是原类型，右边是cast之后的类型，觉得丑自己改
        cout << "-->" << endl;
        outType(E->getCastType());
        cout << "\n";
        return true;
    }
    bool cleanupExplicitCastExpr(ExplicitCastExpr* E){
        recordLevel.pop();
        return true;
    }
    bool visitImplicitCastExpr(ImplicitCastExpr* E)
    {
        outSpace();
        recordLevel.push(E);
        cout << "ImplicitCastExpr ";
        outType(E->getPrevType());
        cout << "-->" << endl;
        outType(E->getCastType());
        cout << "\n";
        return true;
    }
    bool cleanupImplicitCastExpr(ImplicitCastExpr* E){
        recordLevel.pop();
        return true;
    }
};



#endif //FRONTEND_ASTDUMPER_H
