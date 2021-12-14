//
// Created by tangny on 2021/12/8.
//

#ifndef FRONTEND_ASTBUILDER_H
#define FRONTEND_ASTBUILDER_H

#include <stack>
#include <unordered_map>
#include "include/AST/Decl.h"
#include "include/AST/Stmt.h"
#include "include/AST/Expr.h"
#include "include/AST/Type.h"
#include "include/AST/AbstractASTNode.h"
#include "include/Parser/CST.h"

class ASTBuilder {
private:
    std::stack< AbstractASTNode* > nodeStack;
    std::unordered_map<std::string, BinaryOperator::Op> opMap;
    QualType declTypeCp;

    void recursiveVisitCST( CSTNode* );

public:
    ASTBuilder() {
        opMap.clear();
        opMap.insert(std::make_pair("+", BinaryOperator::_add));
        opMap.insert(std::make_pair("-", BinaryOperator::_sub));
        opMap.insert(std::make_pair("*", BinaryOperator::_mul));
        opMap.insert(std::make_pair("/", BinaryOperator::_div));
        opMap.insert(std::make_pair("%", BinaryOperator::_mod));
        opMap.insert(std::make_pair("&", BinaryOperator::_and));
        opMap.insert(std::make_pair("|", BinaryOperator::_or));
        opMap.insert(std::make_pair("^", BinaryOperator::_xor));
        opMap.insert(std::make_pair("LEFT_OP", BinaryOperator::_lsh));
        opMap.insert(std::make_pair("RIGHT_OP", BinaryOperator::_rsh));

        opMap.insert(std::make_pair("EQ_OP", BinaryOperator::_eq));
        opMap.insert(std::make_pair("NE_OP", BinaryOperator::_ne));
        opMap.insert(std::make_pair("<", BinaryOperator::_lt));
        opMap.insert(std::make_pair(">", BinaryOperator::_gt));
        opMap.insert(std::make_pair("LE_OP", BinaryOperator::_le));
        opMap.insert(std::make_pair("GE_OP", BinaryOperator::_ge));
        opMap.insert(std::make_pair("AND_OP", BinaryOperator::_log_and));
        opMap.insert(std::make_pair("OR_OP", BinaryOperator::_log_or));

        opMap.insert(std::make_pair("=", BinaryOperator::_assign));
        opMap.insert(std::make_pair("ADD_ASSIGN", BinaryOperator::_add_assign));
        opMap.insert(std::make_pair("SUB_ASSIGN", BinaryOperator::_sub_assign));
        opMap.insert(std::make_pair("MUL_ASSIGN", BinaryOperator::_mul_assign));
        opMap.insert(std::make_pair("DIV_ASSIGN", BinaryOperator::_div_assign));
        opMap.insert(std::make_pair("MOD_ASSIGN", BinaryOperator::_mod_assign));
        opMap.insert(std::make_pair("AND_ASSIGN", BinaryOperator::_and_assign));
        opMap.insert(std::make_pair("OR_ASSIGN", BinaryOperator::_or_assign));
        opMap.insert(std::make_pair("XOR_ASSIGN", BinaryOperator::_xor_assign));
        opMap.insert(std::make_pair("LEFT_ASSIGN", BinaryOperator::_lsh_assign));
        opMap.insert(std::make_pair("RIGHT_ASSIGN", BinaryOperator::_rsh_assign));
    }

    TranslationUnitDecl* constructAST( CSTNode*, int = 0 );

    void exprCommonAction( AbstractASTNode*, Expr*, std::string );

    // 监听器函数
#define LISTEN(TYPE)                \
    void enter##TYPE( CSTNode* );   \
    void quit##TYPE( CSTNode* );
#include "include/AST/ListenerTypes.inc"
};

void raiseRuleViolation( std::string, AbstractASTNode* );

#endif //FRONTEND_ASTBUILDER_H
