//
// Created by tangny on 2021/12/9.
//

// 此文件仅包含一个类
// 它没有任何实际作用，作为Decl和Stmt的共同基类

#ifndef FRONTEND_ABSTRACTASTNODE_H
#define FRONTEND_ABSTRACTASTNODE_H

/*#include "include/llvm/ADT/APFloat.h"
#include "include/llvm/ADT/STLExtras.h"
#include "include/llvm/IR/BasicBlock.h"
#include "include/llvm/IR/Constants.h"
#include "include/llvm/IR/DerivedTypes.h"
#include "include/llvm/IR/Function.h"
#include "include/llvm/IR/IRBuilder.h"
#include "include/llvm/IR/LLVMContext.h"
#include "include/llvm/IR/Module.h"
#include "include/llvm/IR/Type.h"
#include "include/llvm/IR/Verifier.h"
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <map>
#include <memory>
#include <string>
#include <vector>*/

class AbstractASTNode {
protected:
    enum BasicKind : short {
        bk_Decl,
        bk_Stmt,
        bk_QualType
    };

    short basicKind;

public:
    AbstractASTNode() {}

    virtual ~AbstractASTNode() {}

    bool isDecl() const { return basicKind == BasicKind::bk_Decl; }

    bool isStmt() const { return basicKind == BasicKind::bk_Stmt; }

    bool isQualType() const { return basicKind == BasicKind::bk_QualType; }

//    virtual Value* codeGen() {}
};

#endif //FRONTEND_ABSTRACTASTNODE_H
