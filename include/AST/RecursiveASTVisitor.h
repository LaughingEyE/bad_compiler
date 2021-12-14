//
// Created by tangny on 2021/12/10.
//

#ifndef FRONTEND_RECURSIVEASTVISITOR_H
#define FRONTEND_RECURSIVEASTVISITOR_H

#include <cassert>
#include "include/AST/Decl.h"
#include "include/AST/Stmt.h"
#include "include/AST/Expr.h"

template <typename Derived>
class RecursiveASTVisitor {
public:
    Derived& getDerived() { return *static_cast<Derived *>(this); }

    bool traverseInPreOrder() const { return true; }


// 定义所有Decl类的Traverse,cleanup,Visit和WalkUpFrom函数
public:
#define DECL(CLASS, BASE) bool traverse##CLASS(CLASS *D);
#include "include/AST/DeclNodes.h"

#ifdef DECL
#undef DECL
#endif

#define DECL(CLASS, BASE) bool cleanup##CLASS() { return true; }
#include "include/AST/DeclNodes.h"

#ifdef DECL
#undef DECL
#endif

    bool walkUpFromDecl(Decl *D) { return getDerived().visitDecl(D); }
    bool visitDecl(Decl *D) { return true; }

#define DECL(CLASS, BASE)                                                       \
   bool walkUpFrom##CLASS(CLASS *D) {                                           \
     walkUpFrom##BASE(D);                                                       \
     getDerived().visit##CLASS(D);                                              \
     return true;                                                               \
   }                                                                            \
   bool visit##CLASS(CLASS *D) { return true; }
#include "include/AST/DeclNodes.h"

// 声明所有Stmt类的Traverse,cleanup,Visit和WalkUpFrom函数
public:
#define STMT(CLASS, BASE) bool traverse##CLASS(CLASS *D);
#include "include/AST/StmtNodes.h"

#ifdef STMT
#undef STMT
#endif

#define STMT(CLASS, BASE) bool cleanup##CLASS() { return true; }
#include "include/AST/StmtNodes.h"

#ifdef STMT
#undef STMT
#endif

    bool walkUpFromStmt(Stmt *S) { return getDerived().visitStmt(S); }
    bool visitStmt(Stmt *S) { return true; }

#define STMT(CLASS, BASE)                                                       \
   bool walkUpFrom##CLASS(CLASS *S) {                                           \
     walkUpFrom##BASE(S);                                                       \
     getDerived().visit##CLASS(S);                                              \
     return true;                                                               \
   }                                                                            \
   bool visit##CLASS(CLASS *S) { return true; }
#include "include/AST/StmtNodes.h"

    void traverseExprHelper( Expr*, std::string );

    void traverseStmtHelper( Stmt*, std::string );
};

void raiseNoSupport( bool, short, std::string );

// 定义所有Decl类的Traverse，Visit和WalkUpFrom函数

#define DEF_TRAVERSE_DECL(DECL, CODE)                                           \
   template <typename Derived>                                                  \
   bool RecursiveASTVisitor<Derived>::traverse##DECL(DECL *D) {                 \
     bool shouldVisitChildren = true;                                           \
     if (getDerived().traverseInPreOrder())                                     \
       walkUpFrom##DECL(D);                                                     \
     { CODE; }                                                                  \
     if (getDerived().traverseInPreOrder())                                     \
       cleanup##DECL();                                                         \
     if (shouldVisitChildren && !getDerived().traverseInPreOrder())             \
       walkUpFrom##DECL(D);                                                     \
     return true;                                                               \
   }

DEF_TRAVERSE_DECL(TranslationUnitDecl, {
    int tempNumStmts = D->getNumStmts();
    Stmt *stmt;
    for(int i = 0;i < tempNumStmts;++i) {
        stmt = D->getStmt(i);
        //Fixme:
        // 未处理枚举类or结构体定义
        switch(stmt->getKind()) {
            case(Stmt::k_DeclStmt):
                traverseDeclStmt(D);
                break;
            default:
                raiseNoSupport(false, stmt->getKind(), "TranslationUnitDecl");
        }
    }

    int tempNumDecls = D->getNumDecls();
    Decl *decl;
    for(int i = 0;i < tempNumDecls;++i) {
        decl = D->getDecl(i);
        switch(decl->getKind()) {
            case(Decl::k_FunctionDecl):
                traverseFunctionDecl(dynamic_cast<FunctionDecl*>(decl));
                break;
            default:
                raiseNoSupport(true, decl->getKind(), "TranslationUnitDecl");
        }
    }
})

DEF_TRAVERSE_DECL(NamedDecl, {})

DEF_TRAVERSE_DECL(ValueDecl, {})

DEF_TRAVERSE_DECL(DeclaratorDecl, {})

DEF_TRAVERSE_DECL(FunctionDecl, {
    int tempNumParams = D->getNumParams();
    for(int i = 0;i < tempNumParams;++i) {
        traverseParamVarDecl(D->getParam(i));
    }

    if(D->getBody() != NULL)
        traverseCompoundStmt(D->getBody());
})

DEF_TRAVERSE_DECL(VarDecl, {
    if(D->hasInitializer())
        traverseExprHelper(D->getInitializer(), "VarDecl");
})

DEF_TRAVERSE_DECL(ParamVarDecl, {
    if(D->hasInitializer())
        traverseExprHelper(D->getInitializer(), "ParamVarDecl");
})

// 定义所有Stmt类的Traverse，Visit和WalkUpFrom函数

#define DEF_TRAVERSE_STMT(STMT, CODE)                                           \
   template <typename Derived>                                                  \
   bool RecursiveASTVisitor<Derived>::traverse##STMT(STMT *S) {                 \
     bool shouldVisitChildren = true;                                           \
     if (getDerived().traverseInPreOrder())                                     \
       walkUpFrom##STMT(S);                                                     \
     { CODE; }                                                                  \
     if (getDerived().traverseInPreOrder())                                     \
       cleanup##STMT();                                                         \
     if (shouldVisitChildren && !getDerived().traverseInPreOrder())             \
       walkUpFrom##STMT(S);                                                     \
     return true;                                                               \
   }

DEF_TRAVERSE_STMT(CompoundStmt, {
    int tempNumStmts = S->getNumStmts();
    Stmt *stmt;
    for(int i = 0;i < tempNumStmts;++i) {
        stmt = S->getStmt(i);
        assert(stmt->getKind() != Stmt::k_CompoundStmt);
        traverseStmtHelper(stmt, "CompoundStmt");
    }
})

DEF_TRAVERSE_STMT(DeclStmt, {
    int tempNumDecls = S->getNumDecls();
    Decl *decl;
    for(int i = 0;i < tempNumDecls;++i) {
        decl = S->getDecl(i);
        switch(decl->getKind()) {
            case(Decl::k_VarDecl):
                traverseVarDecl(dynamic_cast<VarDecl*>(decl));
                break;
            default:
                raiseNoSupport(true, decl->getKind(), "DeclStmt");
        }
    }
})

DEF_TRAVERSE_STMT(WhileStmt, {
    assert(S->hasCond());
    traverseExprHelper(S->getCond(), "WhileStmt");

    assert(S->hasBody());
    traverseStmtHelper(S->getBody(), "WhileStmt");
})

DEF_TRAVERSE_STMT(DoWhileStmt, {
    assert(S->hasCond());
    traverseExprHelper(S->getCond(), "DoWhileStmt");

    assert(S->hasBody());
    traverseStmtHelper(S->getBody(), "DoWhileStmt");
})

DEF_TRAVERSE_STMT(ForStmt, {
    if(S->hasInit())
        traverseDeclStmt(S->getInit());

    assert(S->hasCond());
    traverseExprHelper(S->getCond(), "ForStmt");

    if(S->hasInc())
        traverseExprHelper(S->getInc());

    assert(S->hasBody());
    traverseStmtHelper(S->getBody(), "ForStmt");
})

DEF_TRAVERSE_STMT(IfStmt, {
    assert(S->hasCond());
    traverseExprHelper(S->getCond(), "IfStmt");

    assert(S->hasThen());
    traverseStmtHelper(S->getThen(), "IfStmt");

    assert(S->hasElse());
    traverseStmtHelper(S->getElse(), "IfStmt");
})

DEF_TRAVERSE_STMT(ReturnStmt, {
    if(S->hasRetValue())
        traverseExprHelper(S->getRetValue(), "ReturnStmt");
})

DEF_TRAVERSE_STMT(Expr, {})

DEF_TRAVERSE_STMT(UnaryOperator, {
    assert(S->hasSubExpr());
    traverseExprHelper(S->getSubExpr(), "UnaryOperator");
})

DEF_TRAVERSE_STMT(BinaryOperator, {
    assert(S->hasLHS());
    traverseExprHelper(S->getLHS(), "BinaryOperator");

    assert(S->hasRHS());
    traverseExprHelper(S->getRHS(), "BinaryOperator");
})

DEF_TRAVERSE_STMT(CastExpr, {})

DEF_TRAVERSE_STMT(CallExpr, {
    int tempNumArgs = S->getNumArgs();
    for(int i = 0;i < tempNumArgs;++i) {
        traverseExprHelper(S->getArg(i), "CallExpr");
    }
})

//Fixme:
// 还不知道如何遍历
DEF_TRAVERSE_STMT(DeclRefExpr, {})

DEF_TRAVERSE_STMT(IntegerLiteral, {})

DEF_TRAVERSE_STMT(ExplicitCastExpr, {
    assert(S->getCastedExpr() != NULL);
    traverseExprHelper(S->getCastedExpr(), "ExplicitCastExpr");
})

DEF_TRAVERSE_STMT(ImplicitCastExpr, {
    assert(S->getCastedExpr() != NULL);
    traverseExprHelper(S->getCastedExpr(), "ImplicitCastExpr");
})

template <typename Derived>
void RecursiveASTVisitor<Derived>::traverseExprHelper( Expr *expr, std::string ctx ) {
    switch(expr->getKind()) {
        case(Stmt::k_BinaryOperator):
            traverseBinaryOperator(expr);
            break;
        case(Stmt::k_UnaryOperator):
            traverseUnaryOperator(expr);
            break;
        case(Stmt::k_DeclRefExpr):
            traverseDeclRefExpr(expr);
            break;
        case(Stmt::k_IntegerLiteral):
            traverseIntegerLiteral(expr);
            break;
        case(Stmt::k_ImplicitCastExpr):
            traverseImplicitCastExpr(expr);
            break;
        case(Stmt::k_ExplicitCastExpr):
            traverseImplicitCastExpr(expr);
            break;
        default:
            raiseNoSupport(false, expr->getKind(), ctx);
    }
}

template <typename Derived>
void RecursiveASTVisitor<Derived>::traverseStmtHelper( Stmt *stmt, std::string ctx ) {
    switch(stmt->getKind()) {
        // CompoundStmt的子节点不能是CompoundStmt
        // 需在traverseCompoundStmt中显式地检查
        case(Stmt::k_CompoundStmt):
            traverseCompoundStmt(dynamic_cast<CompoundStmt*>(stmt));
            break;
        case(Stmt::k_DeclStmt):
            traverseDeclStmt(dynamic_cast<DeclStmt*>(stmt));
            break;
        case(Stmt::k_CallExpr):
            traverseCallExpr(dynamic_cast<CallExpr*>(stmt));
            break;
        case(Stmt::k_ReturnStmt):
            traverseReturnStmt(dynamic_cast<ReturnStmt*>(stmt));
            break;
        case(Stmt::k_ForStmt):
            traverseForStmt(dynamic_cast<ForStmt*>(stmt));
            break;
        case(Stmt::k_WhileStmt):
            traverseWhileStmt(dynamic_cast<WhileStmt*>(stmt));
            break;
        case(Stmt::k_DoWhileStmt):
            traverseDoWhileStmt(dynamic_cast<DoWhileStmt*>(stmt));
            break;
        case(Stmt::k_IfStmt):
            traverseIfStmt(dynamic_cast<IfStmt*>(stmt));
            break;
        default:
            raiseNoSupport(false, stmt->getKind(), ctx);
    }
}

#endif //FRONTEND_RECURSIVEASTVISITOR_H
