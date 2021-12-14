//
// Created by tangny on 2021/12/14.
//

#ifndef FRONTEND_IRGENERATOR_H
#define FRONTEND_IRGENERATOR_H


#include "include/AST/RecursiveASTVisitor.h"
#include "include/AST/Decl.h"
#include "include/AST/Stmt.h"
#include "include/AST/Expr.h"
#include "include/AST/Type.h"

#include "llvm/ADT/APFloat.h"
#include "llvm/ADT/STLExtras.h"
#include "llvm/IR/BasicBlock.h"
#include "llvm/IR/Constants.h"
#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Type.h"
#include "llvm/IR/Verifier.h"

class IRGenerator : public RecursiveASTVisitor<IRGenerator> {
protected:
    static std::unique_ptr<llvm::LLVMContext> context;
    static std::unique_ptr<llvm::IRBuilder<>> builder;

public:
    bool visitWhileStmt(WhileStmt *S) {
        llvm::BasicBlock *WhileCondBB = llvm::BasicBlock::Create(*context, "while.cond", )
    }
};

#endif //FRONTEND_IRGENERATOR_H
