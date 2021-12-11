//
// Created by tangny on 2021/12/10.
//

#ifndef STMT
#define STMT(CLASS, BASE)
#endif

#ifndef COMPOUNDSTMT
#define COMPOUNDSTMT(CLASS, BASE) STMT(CLASS, BASE)
#endif
COMPOUNDSTMT(CompoundStmt, Stmt)
#undef COMPOUNDSTMT

#ifndef DECLSTMT
#define DECLSTMT(CLASS, BASE) STMT(CLASS, BASE)
#endif
DECLSTMT(DeclStmt, Stmt)
#undef DECLSTMT

#ifndef VALUESTMT
#define VALUESTMT(CLASS, BASE) STMT(CLASS, BASE)
#endif
VALUESTMT(ValueStmt, Stmt)
#undef VALUESTMT

#ifndef RETURNSTMT
#define RETURNSTMT(CLASS, BASE) STMT(CLASS, BASE)
#endif
RETURNSTMT(ReturnStmt, Stmt)
#undef RETURNSTMT

#ifndef EXPR
#define EXPR(CLASS, BASE) STMT(CLASS, BASE)
#endif
EXPR(Expr, ValueStmt)
#undef EXPR

#ifndef CASTEXPR
#define CASTEXPR(CLASS, BASE) STMT(CLASS, BASE)
#endif
CASTEXPR(CastExpr, Expr)
#undef CASTEXPR

#ifndef CALLEXPR
#define CALLEXPR(CLASS, BASE) STMT(CLASS, BASE)
#endif
CALLEXPR(CallExpr, Expr)
#undef CALLEXPR

#ifndef DECLREFEXPR
#define DECLREFEXPR(CLASS, BASE) STMT(CLASS, BASE)
#endif
DECLREFEXPR(DeclRefExpr, Expr)
#undef DECLREFEXPR

#ifndef INTERGERLITERAL
#define INTERGERLITERAL(CLASS, BASE) STMT(CLASS, BASE)
#endif
INTERGERLITERAL(IntegerLiteral, Expr)
#undef INTERGERLITERAL

#ifndef EXPLICITCASTEXPR
#define EXPLICITCASTEXPR(CLASS, BASE) STMT(CLASS, BASE)
#endif
EXPLICITCASTEXPR(ExplicitCastExpr, CastExpr)
#undef EXPLICITCASTEXPR

#ifndef IMPLICITCASTEXPR
#define IMPLICITCASTEXPR(CLASS, BASE) STMT(CLASS, BASE)
#endif
IMPLICITCASTEXPR(ImplicitCastExpr, CastExpr)
#undef IMPLICITCASTEXPR

#undef STMT