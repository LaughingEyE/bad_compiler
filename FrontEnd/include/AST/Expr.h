//
// Created by tangny on 2021/12/8.
//

// Expr是Stmt的派生类
// 由于其中继承关系复杂，独立性高
// 故单独写一个文件

//Fixme：
// 析构函数还均未声明

//Fixme：
// 左值右值还未声明
// 是否可以在构造函数中声明？

#ifndef FRONTEND_EXPR_H
#define FRONTEND_EXPR_H

#include <vector>
#include <string>
#include <cassert>
#include "include/AST/Type.h"
#include "include/AST/Stmt.h"
#include "include/AST/Specifiers.h"

class ValueDecl;

class Expr : public ValueStmt {
protected:
    ExprValueKind valueKind;

    QualType exprType;

public:
    Expr()
    : ValueStmt() {
        stmtKind = k_Expr;
    }

    bool isLValue() const { return valueKind == static_cast<ExprValueKind>(0); }

    bool isRValue() const { return valueKind == static_cast<ExprValueKind>(1); }

    void setValueKind( ExprValueKind _valueKind ) { valueKind = _valueKind; }

    QualType getType() const { return exprType; }

    void setType( QualType _exprType ) { exprType =  _exprType; }
};

class CastExpr : public Expr {
protected:
    Expr *castedExpr;

public:
    CastExpr( QualType _newType, Expr *_castedExpr )
    : Expr() {
        stmtKind = k_CastExpr;
        exprType = _newType;
        valueKind = _castedExpr->isLValue() ? ExprValueKind::LValue : ExprValueKind::RValue;
        castedExpr = _castedExpr;
    }

    QualType getCastType() const { return exprType; }

    void setCastType( QualType _castType ) { exprType = _castType; }

    QualType getPrevType() const { return castedExpr->getType(); }

    Expr* getCastedExpr() { return castedExpr; }

};

class CallExpr : public Expr {
protected:
    // 零号参数是函数指针
    std::vector< CastExpr* > args;

public:
    CallExpr()
    : Expr() {
        stmtKind = k_CallExpr;
        args.resize(0);
    }

    int getNumArgs() const { return args.size(); }

    CastExpr* getArg( int pos ) {
        assert(pos < args.size() && "Asking for arg out of bound.");
        return args[pos];
    }

    void addArg( CastExpr *arg ) { args.emplace_back(arg); }
};

class DeclRefExpr : public Expr {
protected:
    ValueDecl *valueDecl;

public:
    DeclRefExpr( ValueDecl *_valueDecl )
    : Expr() {
        stmtKind = k_DeclRefExpr;
        valueDecl = _valueDecl;
    }

    ValueDecl* getValueDecl() { return valueDecl; }

    void setValueDecl( ValueDecl *_valueDecl ) { valueDecl = _valueDecl; }
};

class IntegerLiteral : public Expr {
protected:
    int valueLiteral;

public:
    IntegerLiteral(int _valueLiteral)
    : Expr() {
        stmtKind = k_IntegerLiteral;
        valueLiteral = _valueLiteral;
    }

    int getValue() const { return valueLiteral; }

    void setValue( int _valueLiteral ) { valueLiteral = _valueLiteral; }
};

class ExplicitCastExpr : public CastExpr {
public:
    ExplicitCastExpr( QualType _newType, Expr *_castedExpr )
    : CastExpr(_newType, _castedExpr)
    {}
};

class ImplicitCastExpr : public CastExpr {
    ImplicitCastExpr( QualType _newType, Expr *_castedExpr )
    : CastExpr(_newType, _castedExpr)
    {}
};

#endif //FRONTEND_EXPR_H
