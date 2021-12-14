// 此文件基于语法文件中的监听器自动生成
// 不要手动修改

#ifndef LISTEN
#define LISTEN(TYPE)
#endif

#ifndef REF
#define REF(TYPE) LISTEN(TYPE)
#endif
REF(Ref)
#undef REF

#ifndef INTLITERAL
#define INTLITERAL(TYPE) LISTEN(TYPE)
#endif
INTLITERAL(IntLiteral)
#undef INTLITERAL

#ifndef FUNCCALL
#define FUNCCALL(TYPE) LISTEN(TYPE)
#endif
FUNCCALL(FuncCall)
#undef FUNCCALL

#ifndef POSTOP
#define POSTOP(TYPE) LISTEN(TYPE)
#endif
POSTOP(PostOp)
#undef POSTOP

#ifndef PREOP
#define PREOP(TYPE) LISTEN(TYPE)
#endif
PREOP(PreOp)
#undef PREOP

#ifndef CSTEXPR
#define CSTEXPR(TYPE) LISTEN(TYPE)
#endif
CSTEXPR(CstExpr)
#undef CSTEXPR

#ifndef BINOP
#define BINOP(TYPE) LISTEN(TYPE)
#endif
BINOP(BinOp)
#undef BINOP

#ifndef DECLARATION
#define DECLARATION(TYPE) LISTEN(TYPE)
#endif
DECLARATION(Declaration)
#undef DECLARATION

#ifndef TYPESP
#define TYPESP(TYPE) LISTEN(TYPE)
#endif
TYPESP(TypeSp)
#undef TYPESP

#ifndef TYPEQF
#define TYPEQF(TYPE) LISTEN(TYPE)
#endif
TYPEQF(TypeQf)
#undef TYPEQF

#ifndef DECLARATOR
#define DECLARATOR(TYPE) LISTEN(TYPE)
#endif
DECLARATOR(Declarator)
#undef DECLARATOR

#ifndef COMMONSPNAME
#define COMMONSPNAME(TYPE) LISTEN(TYPE)
#endif
COMMONSPNAME(CommonSpName)
#undef COMMONSPNAME

#ifndef QFNAME
#define QFNAME(TYPE) LISTEN(TYPE)
#endif
QFNAME(QfName)
#undef QFNAME

#ifndef DECLARATORNAME
#define DECLARATORNAME(TYPE) LISTEN(TYPE)
#endif
DECLARATORNAME(DeclaratorName)
#undef DECLARATORNAME

#ifndef FORMALPARAMDEF
#define FORMALPARAMDEF(TYPE) LISTEN(TYPE)
#endif
FORMALPARAMDEF(FormalParamDef)
#undef FORMALPARAMDEF

#ifndef FULLTYPE
#define FULLTYPE(TYPE) LISTEN(TYPE)
#endif
FULLTYPE(FullType)
#undef FULLTYPE

#ifndef VIRTUALSTMT
#define VIRTUALSTMT(TYPE) LISTEN(TYPE)
#endif
VIRTUALSTMT(VirtualStmt)
#undef VIRTUALSTMT

#ifndef CMPDSTMT
#define CMPDSTMT(TYPE) LISTEN(TYPE)
#endif
CMPDSTMT(CmpdStmt)
#undef CMPDSTMT

#ifndef IFSTMT
#define IFSTMT(TYPE) LISTEN(TYPE)
#endif
IFSTMT(IfStmt)
#undef IFSTMT

#ifndef IFELSESTMT
#define IFELSESTMT(TYPE) LISTEN(TYPE)
#endif
IFELSESTMT(IfElseStmt)
#undef IFELSESTMT

#ifndef WHILESTMT
#define WHILESTMT(TYPE) LISTEN(TYPE)
#endif
WHILESTMT(WhileStmt)
#undef WHILESTMT

#ifndef DOWHILESTMT
#define DOWHILESTMT(TYPE) LISTEN(TYPE)
#endif
DOWHILESTMT(DoWhileStmt)
#undef DOWHILESTMT

#ifndef FORSTMT
#define FORSTMT(TYPE) LISTEN(TYPE)
#endif
FORSTMT(ForStmt)
#undef FORSTMT

#ifndef RETURN
#define RETURN(TYPE) LISTEN(TYPE)
#endif
RETURN(Return)
#undef RETURN

#ifndef FUNCDEF
#define FUNCDEF(TYPE) LISTEN(TYPE)
#endif
FUNCDEF(FuncDef)
#undef FUNCDEF

#undef LISTEN
