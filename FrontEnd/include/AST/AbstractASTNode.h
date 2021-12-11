//
// Created by tangny on 2021/12/9.
//

// 此文件仅包含一个类
// 它没有任何实际作用，作为Decl和Stmt的共同基类

#ifndef FRONTEND_ABSTRACTASTNODE_H
#define FRONTEND_ABSTRACTASTNODE_H

class AbstractASTNode {
protected:
    enum BasicKind : short {
        bk_Decl,
        bk_Stmt
    };

    short basicKind;

public:
    AbstractASTNode() {}

    virtual ~AbstractASTNode() {}

    bool isDecl() const { return basicKind == BasicKind::bk_Decl; }

    bool isStmt() const { return basicKind == BasicKind::bk_Stmt; }
};

#endif //FRONTEND_ABSTRACTASTNODE_H
