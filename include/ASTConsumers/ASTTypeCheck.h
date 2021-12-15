//
// Created by Shakira on 2021/12/15.
//

#ifndef FRONTEND_ASTTYPECHECK_H
#define FRONTEND_ASTTYPECHECK_H
#include <stack>
#include<string>
#include<map>
#include<iostream>
#include"include/AST/Expr.h"
#include "include/AST/Stmt.h"
#include"include/AST/Type.h"
#include "include/AST/RecursiveASTVisitor.h"
class ASTTypeCheck : public RecursiveASTVisitor<ASTTypeCheck> {
public:
    //符号表里面存储变量名和变量类型
    //TODO:符号表不存储变量值的话，如何检查除数为0的情况呢？
    //tables空不空还能指示当前在函数里面还是全局
    std::vector<FunctionDecl*>tables;
    FunctionDecl* curFunction;
    TranslationUnitDecl* curRoot;
    ASTTypeCheck()
            : RecursiveASTVisitor()
    {
        tables.clear();
    }
    bool visitIntegerLiteral(IntegerLiteral*E)
    {
        //这个函数就是空的，即使有value也在它的父节点被挖掘了
    }
    bool visitVarDecl(VarDecl* D)
    {

        std::string curName=D->getName();
        QualType curType=D->getInitializer()->getType();
        if (tables.empty())
        {
            curRoot->addSymbol(curName, curType);
        }
        else{
            curFunction = tables[tables.size() - 1];
            curFunction->addSymbol(curName, curType);
        }
    }
    bool visitReturnStmt(ReturnStmt* S)
    {
        if (S->hasRetValue())
        {
            curFunction = tables[tables.size() - 1];
            QualType shouldReturn = curFunction->getType();
            QualType actualReturn = S->getRetValue()->getType();
            //TODO:canBeCasted就是后面我需要实现的判断类型是否可以cast
            if (canBeCasted(actualReturn,shouldReturn))
            {
                //别用感叹号，看起来很凶
                std::cerr << "Error, please check your return type " << std::endl;
                //TODO：就只是报error，要不要整个中断？
            }
        }
        else
        {//当前不返回，那么函数必须时void的
            curFunction = tables[tables.size() - 1];
            QualType shouldReturn =curFunction->getType();
            QualType* shouldPointer=& shouldReturn;
            //这又是为啥啊
            if (dynamic_cast<BuiltInType*>(shouldPointer)->typeEnum!= BuiltInType::_void)
            {
                std::cerr << "Error, please check your return type " << std::endl;
            }
        }
    }
    bool visitCompoundStmt(CompoundStmt* S)
    {
        //这个函数就是空的
    }
    //TODO:后续确认是否这个节点只会出现在函数声明
    bool visitParaVarDecl(ParamVarDecl*D)
    {
        curFunction=tables[tables.size() - 1];
        std::map<std::string, QualType>* firsttable=curFunction->getCurSymbolTable();
        QualType curType = D->getType();
        std::string curName = D->getName();
        firsttable->insert(make_pair(curName, curType));
    }
    bool visitFunctionDecl(FunctionDecl* D)
    {
        tables.push_back(D);
        curRoot->addDecl(D);
        std::map<std::string, QualType>* firsttable;
        if(D->getNumParams()!=0)
            D->addSymbolTable(firsttable);
    }

};
#endif //FRONTEND_ASTTYPECHECK_H
