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


// 定义所有Decl类的Traverse，Visit和WalkUpFrom函数
public:
#define DECL(CLASS, BASE) bool traverse##CLASS(CLASS *D);
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

// 声明所有Stmt类的Traverse，Visit和WalkUpFrom函数
public:
#define STMT(CLASS, BASE) bool traverse##CLASS(CLASS *D);
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

    void test();
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
        // 未处理全局变量和枚举类or结构体定义
        raiseNoSupport(false, stmt->getKind(), "TranslationUnitDecl");
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
        traverseExpr(D->getInitializer());
})

DEF_TRAVERSE_DECL(ParamVarDecl, {
    if(D->hasInitializer())
        traverseExpr(D->getInitializer());
})

// 定义所有Stmt类的Traverse，Visit和WalkUpFrom函数

#define DEF_TRAVERSE_STMT(STMT, CODE)                                           \
   template <typename Derived>                                                  \
   bool RecursiveASTVisitor<Derived>::traverse##STMT(STMT *S) {                 \
     bool shouldVisitChildren = true;                                           \
     if (getDerived().traverseInPreOrder())                                     \
       walkUpFrom##STMT(S);                                                     \
     { CODE; }                                                                  \
     if (shouldVisitChildren && !getDerived().traverseInPreOrder())             \
       walkUpFrom##STMT(S);                                                     \
     return true;                                                               \
   }

DEF_TRAVERSE_STMT(CompoundStmt, {
    int tempNumStmts = S->getNumStmts();
    Stmt *stmt;
    for(int i = 0;i < tempNumStmts;++i) {
        stmt = S->getStmt(i);
        switch(stmt->getKind()) {
            case(Stmt::k_DeclStmt):
                traverseDeclStmt(dynamic_cast<DeclStmt*>(stmt));
                break;
            case(Stmt::k_CallExpr):
                traverseCallExpr(dynamic_cast<CallExpr*>(stmt));
                break;
            case(Stmt::k_ReturnStmt):
                traverseReturnStmt(dynamic_cast<ReturnStmt*>(stmt));
                break;
            default:
                raiseNoSupport(false, stmt->getKind(), "CompoundStmt");
        }
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

DEF_TRAVERSE_STMT(ValueStmt, {})

DEF_TRAVERSE_STMT(ReturnStmt, {
    if(S->hasRetValue())
        traverseExpr(S->getRetValue());
})

DEF_TRAVERSE_STMT(Expr, {})

DEF_TRAVERSE_STMT(CastExpr, {
    assert(S->getCastedExpr() != NULL);
    traverseExpr(S->getCastedExpr());
})

DEF_TRAVERSE_STMT(CallExpr, {
    int tempNumArgs = S->getNumArgs();
    CastExpr *expr;
    for(int i = 0;i < tempNumArgs;++i) {
        expr = S->getArg(i);
        switch(expr->getKind()) {
            case(Stmt::k_ExplicitCastExpr):
                traverseExplicitCastExpr(dynamic_cast<ExplicitCastExpr*>(expr));
                break;
            case(Stmt::k_ImplicitCastExpr):
                traverseImplicitCastExpr(dynamic_cast<ImplicitCastExpr*>(expr));
                break;
            default:
                raiseNoSupport(false, expr->getKind(), "CallExpr");
        }
    }
})

DEF_TRAVERSE_STMT(DeclRefExpr, {
    assert(S->getValueDecl() != NULL);
    traverseExpr(S->getValueDecl());
})

DEF_TRAVERSE_STMT(IntegerLiteral, {})

DEF_TRAVERSE_STMT(ExplicitCastExpr, {})

DEF_TRAVERSE_STMT(ImplicitCastExpr, {})

#endif //FRONTEND_RECURSIVEASTVISITOR_H
