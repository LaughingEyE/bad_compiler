//
// Created by tangny on 2021/12/6.
//

// Decl基类及其派生类

// 在组织类顺序时，使属于同一层的类排在一起
// e.g. Decl类在第0层，
// NamedDecl派生自Decl，所以在第1层
// ValueDecl派生自NamedDecl，所以在第2层
// 依此类推
// 派生自同一类型的派生类排在一起

// 因为Type在AST中特指类型
// 所以在涉及AST节点相关操作时，使用Kind代替Type

//Fixme：
// 析构函数还均未声明

#ifndef FRONTEND_DECL_H
#define FRONTEND_DECL_H

#include <vector>
#include <string>
#include <cassert>
#include "include/AST/Type.h"
#include "include/AST/AbstractASTNode.h"

// 提前声明
// 避免循环引用
class Stmt;
class CompoundStmt;
class Expr;

// 解决顺序问题
class ParamVarDecl;

// Decl基类
// 所有Decl均应直接或间接继承该类
class Decl : public AbstractASTNode {
public:
    // 在其中枚举所有Decl的子类
    // 参考DeclBase.h第92行左右定义
    // 和DeclNodes.inc中定义
    // 问题：clang中对于部分高层派生类未定义本身Kind
    // 只定义了first##Class和last##Class
    // 有何作用？
    enum Kind : short {
        k_Decl,
        k_TranslationUnitDecl,
        k_NamedDecl,
        k_ValueDecl,
        k_DeclaratorDecl,
        k_FunctionDecl,
        k_VarDecl,
        k_ParamVarDecl
    };

    short declKind;

    Decl() {
        basicKind = bk_Decl;
        declKind = k_Decl;
    }

    // 返回派生类类型
    Kind getKind() const { return static_cast<Kind>(declKind); }
};

// 所有会包含代码作用域的Decl类都会从它派生
// 如FunctionDecl，BlockDecl等
// 该类可以实现如查找声明的作用域中所有声明的功能
// 如果一个类ClassA及其所有派生类都要继承该类
// 只在ClassA上声明继承
// 所有应该直接继承该类的类如下：
///   TranslationUnitDecl
///   ExternCContext
///   NamespaceDecl
///   TagDecl
///   OMPDeclareReductionDecl
///   OMPDeclareMapperDecl
///   FunctionDecl
///   ObjCMethodDecl (本项目确认不需要)
///   ObjCContainerDecl (本项目确认不需要)
///   LinkageSpecDecl
///   ExportDecl
///   BlockDecl
class DeclContext {
private:
    std::vector< Decl* > decls;

public:
    DeclContext() {
        decls.resize(0);
    }

    int getNumDecls() const { return decls.size(); }

    Decl* getDecl(int pos) const {
        assert(pos < decls.size() && "Asking for decl out of bound.");
        return decls[pos];
    }

    void addDecl( Decl *decl ) { decls.emplace_back(decl); }
};

// 全局的上下文
// 主要用于保存全局变量，类/结构体定义和函数定义（目前）
class GlobalContext {
protected:
    std::vector< Decl* > decls;
    std::vector< Stmt* > stmts;

public:
    GlobalContext() {
        decls.resize(0);
        stmts.resize(0);
    }

    int getNumDecls() const { return decls.size(); }

    Decl* getDecl(int pos) {
        assert(pos < decls.size() && "Asking for decl out of bound.");
        return decls[pos];
    }

    void addDecl( Decl *decl ) { decls.emplace_back(decl); }

    int getNumStmts() const { return stmts.size(); }

    Stmt* getStmt(int pos) {
        assert(pos < stmts.size() && "Asking for decl out of bound.");
        return stmts[pos];
    }

    void addStmt( Stmt *stmt ) { stmts.emplace_back(stmt); }
};

class TranslationUnitDecl : public Decl, public GlobalContext {
public:
    TranslationUnitDecl()
    : Decl() {
        declKind = k_TranslationUnitDecl;
    };
};

class NamedDecl : public Decl {
protected:
    std::string name;

public:
    NamedDecl( std::string _name )
    : Decl() {
        declKind = k_NamedDecl;
        name = _name;
    }

    std::string getName() const { return name; }

    void setName(std::string _name)  { name = _name; }
};

class ValueDecl : public NamedDecl {
protected:
    QualType valueType;

public:
    ValueDecl( std::string _name, QualType _valueType )
    : NamedDecl(_name) {
        declKind = k_ValueDecl;
        valueType = _valueType;
    }

    QualType getType() const { return valueType; }

    void setType( QualType _valueType ) { valueType =  _valueType; }
};

class DeclaratorDecl : public ValueDecl {
public:
    DeclaratorDecl( std::string _name, QualType _valueType )
    : ValueDecl(_name, _valueType) {
        declKind = k_DeclaratorDecl;
    }
};

class FunctionDecl : public DeclaratorDecl, public DeclContext {
protected:
    std::vector< ParamVarDecl* > params;

    CompoundStmt *functionBody;

public:
    FunctionDecl( std::string _name, QualType _retType )
    : DeclaratorDecl( _name, _retType ), DeclContext() {
        declKind = k_FunctionDecl;
        params.resize(0);
        functionBody = NULL;
    }

    QualType getRetType() const { return valueType; }

    void setRetType( QualType _retType ) { valueType = _retType; }

    int getNumParams() { return params.size(); }

    ParamVarDecl* getParam(int pos) {
        assert(pos < params.size() && "Asking for param out of bound.");
        return params[pos];
    }

    void addParam( ParamVarDecl* param ) { params.emplace_back(param); }

    CompoundStmt* getBody() { return functionBody; }

    void setBody(CompoundStmt *_functionBody) { functionBody = _functionBody; }
};

class VarDecl : public DeclaratorDecl {
protected:
    Expr *initializer;

public:
    VarDecl( std::string _name, QualType _valueType )
    : DeclaratorDecl( _name, _valueType) {
        declKind = k_VarDecl;
    }

    bool hasInitializer() { return (initializer != NULL); }

    Expr* getInitializer() { return initializer; }

    void setInitializer( Expr *_initializer ) { initializer = _initializer; }
};

class ParamVarDecl : public VarDecl {
public:
    ParamVarDecl( std::string _name, QualType _valueType )
    : VarDecl( _name, _valueType) {
        declKind = k_ParamVarDecl;
    }
};

#endif //FRONTEND_DECL_H
