//
// Created by tangny on 2021/12/11.
//

#include <iostream>
#include "include/AST/RecursiveASTVisitor.h"

void raiseNoSupport( bool isDecl, short kind, std::string ctx ) {
    std::cout << "Do not support " << (isDecl ? "Decl" : "Stmt") << " type#" << kind << " in " << ctx << " context.\n";
}