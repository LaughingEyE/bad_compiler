//
// Created by tangny on 2021/12/10.
//

#ifndef FRONTEND_ASTDUMPER_H
#define FRONTEND_ASTDUMPER_H

#include <stack>
#include "include/include_json.h"
#include "include/AST/RecursiveASTVisitor.h"

class ASTDumper : public RecursiveASTVisitor<ASTDumper> {
private:
    std::stack< json > jStack;

public:
    bool visitTranslationUnitDecl(TranslationUnitDecl *D) {
        std::cout << "huhuhu\n";
        return true;
    }

    bool visitFunctionDecl(FunctionDecl *D) {
        std::cout << "huhuhu\n";
        return true;
    }

    bool visitDecl(Decl *D) {
        std::cout << "huhuhu\n";
        return true;
    }
};

#endif //FRONTEND_ASTDUMPER_H
