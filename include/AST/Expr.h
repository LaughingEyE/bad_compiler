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
        //Fixme:
        // 或许不应该先默认为右值
        valueKind = ExprValueKind::RValue;
    }

    bool isLValue() const { return valueKind == static_cast<ExprValueKind>(0); }

    bool isRValue() const { return valueKind == static_cast<ExprValueKind>(1); }

    void setValueKind( ExprValueKind _valueKind ) { valueKind = _valueKind; }

    QualType getType() const { return exprType; }

    void setType( QualType _exprType ) { exprType =  _exprType; }
};

class UnaryOperator : public Expr {
public:
    Expr *subExpr;

    enum Op {
        _pre_inc,
        _post_inc,
        _pre_dec,
        _post_dec
    };

    short opCode;

public:
    UnaryOperator()
    : Expr() {
        stmtKind = k_BinaryOperator;
        subExpr = NULL;
    }

    Expr* getSubExpr() { return subExpr; }

    bool hasSubExpr() const { return subExpr != NULL; }

    void setSubExpr( Expr * _subExpr ) { subExpr = _subExpr; }

    Op getOp() const { return static_cast<Op>(opCode); }

    void setOp( Op _opcode ) { opCode = _opcode; }
};

class BinaryOperator : public Expr {
public:
    Expr *LHS;
    Expr *RHS;

    enum Op {
        // 算数运算符
        _add,
        _sub,
        _mul,
        _div,
        _mod,
        _and,
        _or,
        _xor,
        _lsh,           // left shift
        _rsh,           // right shift
        // 逻辑运算符
        _eq,
        _ne,
        _lt,            // less than
        _gt,            // greater than
        _le,
        _ge,
        _log_and,
        _log_or,
        // 赋值运算符
        _assign,
        _add_assign,
        _sub_assign,
        _mul_assign,
        _div_assign,
        _mod_assign,
        _and_assign,
        _or_assign,
        _xor_assign,
        _lsh_assign,
        _rsh_assign,
        // 区域
        first_arithmetic = _add,
        last_arithmetic = _rsh,
        first_logic = _eq,
        last_logic = _log_or,
        first_assign = _assign,
        last_assign = _rsh_assign
    };

    short opCode;

public:

    BinaryOperator()
    : Expr() {
        stmtKind = k_BinaryOperator;
        LHS = NULL;
        RHS = NULL;
    }

    Expr* getLHS() { return LHS; }

    bool hasLHS() const { return LHS != NULL; }

    void setLHS( Expr * _LHS ) { LHS = _LHS; }

    Expr* getRHS() { return RHS; }

    bool hasRHS() const { return RHS != NULL; }

    void setRHS( Expr * _RHS ) { RHS = _RHS; }

    Op getOp() const { return static_cast<Op>(opCode); }

    void setOp( Op _opcode ) { opCode = _opcode; }

    bool isArithmeticOp() const { return (first_arithmetic <= opCode && opCode <= last_arithmetic); }

    bool isLogicOp() const { return (first_logic <= opCode && opCode <= last_logic); }

    bool isAssignOp() const { return (first_assign <= opCode && opCode <= last_assign); }
};

class CastExpr : public Expr {
protected:
    Expr *castedExpr;

public:
    CastExpr()
    : Expr() {
        stmtKind = k_CastExpr;
        castedExpr = NULL;
    }

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

    void setCastedExpr( Expr *_castedExpr ) { castedExpr = _castedExpr; }
};

class CallExpr : public Expr {
protected:
    // 零号参数是函数指针
    std::vector< Expr* > args;

public:
    CallExpr()
    : Expr() {
        stmtKind = k_CallExpr;
        args.resize(0);
    }

    int getNumArgs() const { return args.size(); }

    Expr* getArg( int pos ) {
        assert(pos < args.size() && "Asking for arg out of bound.");
        return args[pos];
    }

    void addArg( Expr *arg ) { args.emplace_back(arg); }
};

class DeclRefExpr : public Expr {
protected:
    std::string refName;
    ValueDecl *valueDecl;

public:
    DeclRefExpr( std::string _refName )
    : Expr() {
        stmtKind = k_DeclRefExpr;
        refName = _refName;
        valueDecl = NULL;
    }

    std::string getRefname() { return refName; }

    void setRefName( std::string _refName ) { refName = _refName; }

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
    ExplicitCastExpr()
    : CastExpr() {
        stmtKind = k_ExplicitCastExpr;
    }

    ExplicitCastExpr( QualType _newType, Expr *_castedExpr )
    : CastExpr(_newType, _castedExpr) {
        stmtKind = k_ExplicitCastExpr;
    }
};

class ImplicitCastExpr : public CastExpr {
public:
    ImplicitCastExpr()
    : CastExpr() {
        stmtKind = k_ImplicitCastExpr;
    }

    ImplicitCastExpr( QualType _newType, Expr *_castedExpr )
    : CastExpr(_newType, _castedExpr) {
        stmtKind = k_ImplicitCastExpr;
    }
};

#endif //FRONTEND_EXPR_H
