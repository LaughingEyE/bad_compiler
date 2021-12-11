//
// Created by tangny on 2021/12/6.
//

// Stmt 基类及其派生类

// 在组织类顺序时，尽量使属于同一层的类排在一起
// 派生自同一类型的派生类排在一起
// 具体参考Decl头文件说明

//Fixme：
// 析构函数还均未声明

#ifndef FRONTEND_STMT_H
#define FRONTEND_STMT_H

#include <vector>
#include <string>
#include "include/AST/Type.h"
#include "include/AST/AbstractASTNode.h"

class Decl;
class Expr;

// Stmt基类
// 所有Stmt均应直接或间接继承该类
class Stmt : public AbstractASTNode {
public:
    //作用同Decl中Kind相同
    enum Kind : short {
        k_Stmt,
        k_CompoundStmt,
        k_DeclStmt,
        k_ValueStmt,
        k_ReturnStmt,
        k_Expr,
        k_CastExpr,
        k_CallExpr,
        k_DeclRefExpr,
        k_IntegerLiteral,
        k_ExplicitCastExpr,
        k_ImplicitCastExpr
    };

    short stmtKind;

    Stmt() {
        basicKind = bk_Stmt;
        stmtKind = k_Stmt;
    }

    // 返回派生类类型
    Kind getKind() const { return static_cast<Kind>(stmtKind); };
};

class CompoundStmt : public Stmt {
public:
    std::vector< Stmt* > stmts;

    CompoundStmt()
    : Stmt() {
        stmtKind = k_CompoundStmt;
        stmts.resize(0);
    }

    int getNumStmts() const { return stmts.size(); }

    Stmt* getStmt(int pos) {
        assert(pos < stmts.size() && "Asking for stmt out of bound.");
        return stmts[pos];
    }

    void addStmt( Stmt *stmt ) { stmts.emplace_back(stmt); }
};

class DeclStmt : public Stmt {
public:
    //Fixme:
    // 这里Decl或许可以改成更低级别的派生类
    std::vector< Decl* > decls;

    DeclStmt()
    : Stmt() {
        stmtKind = k_DeclStmt;
        decls.resize(0);
    }

    int getNumDecls() const { return decls.size(); }

    Decl* getDecl(int pos) {
        assert(pos < decls.size() && "Asking for decl out of bound.");
        return decls[pos];
    }

    void addDecl( Decl *decl ) { decls.emplace_back(decl); }
};

class ValueStmt : public Stmt {
public:
    ValueStmt()
    : Stmt() {
        stmtKind = k_ValueStmt;
    }
};

class ReturnStmt : public Stmt {
protected:
    Expr *retValue;

public:
    ReturnStmt( Expr *_retValue )
    : Stmt() {
        stmtKind = k_ReturnStmt;
        retValue = _retValue;
    }

    bool hasRetValue() const { return (retValue != NULL); }

    Expr* getRetValue() { return retValue; }

    void setRetValue( Expr *_retValue ) { retValue = _retValue; }
};



#endif //FRONTEND_STMT_H
