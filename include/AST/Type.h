//
// Created by tangny on 2021/12/7.
//

// Type用于表示语言中的类型系统
// 被包含在Decl和Stmt内需要使用类型的类中

#ifndef FRONTEND_TYPE_H
#define FRONTEND_TYPE_H

#include <string>
#include "AbstractASTNode.h"

// Type基类
// 所有Type均应直接或间接继承该类
class Type {
public:
    enum Kind : short {
        k_Type,
        k_BuiltInType,
        k_PointerType
    };

    short typeKind;

    Type() {
        typeKind = k_Type;
    }

    Kind getKind() const { return static_cast<Kind>(typeKind); }
};

// C++目前共有4种Qualifier
// 分别为Const，Volatile，Restrict，Atomic
// 为可扩展性设置
// 本项目除了Const外大概率不会涉及其他
class Qualifier {
protected:
    enum QualEnum {
        Const = 0x1,
        Volatile = 0x2,
        Restrict = 0x4,
        Atomic = 0x8
    } qualEnum;

public:
    QualEnum getQual() const { return qualEnum; }

    Qualifier() : qualEnum(static_cast<QualEnum>(0)) {};

    bool isConst() const { return (qualEnum & 0x1) != 0; }

    bool isVolatile() const { return (qualEnum & 0x2) != 0; }

    bool isRestrict() const { return (qualEnum & 0x4) != 0; }

    bool isAtomic() const { return (qualEnum & 0x8) != 0; }

    void setConst() { qualEnum = static_cast<QualEnum>(qualEnum | 0x1); }

    void removeConst() { qualEnum = static_cast<QualEnum>(qualEnum & 0xE); }

    void setVolatile() { qualEnum = static_cast<QualEnum>(qualEnum | 0x2); }

    void removeVolatile() { qualEnum = static_cast<QualEnum>(qualEnum & 0xD); }

    void setRestrict() { qualEnum = static_cast<QualEnum>(qualEnum | 0x4); }

    void removeRestrict() { qualEnum = static_cast<QualEnum>(qualEnum & 0xB); }

    void setAtomic() { qualEnum = static_cast<QualEnum>(qualEnum | 0x8); }

    void removeAtomic() { qualEnum = static_cast<QualEnum>(qualEnum & 0x7); }
};

// 可以包含Qualifier的Type
class QualType : public AbstractASTNode {
protected:
    Qualifier qualifier;
    Type type;

public:
    QualType() {
        basicKind = bk_QualType;
    }

    QualType(Type _type)
    : qualifier(), type(_type) {
        basicKind = bk_QualType;
    }

    Type getType() const { return type; }

    void setType( Type _type ) { type = _type; }

    Type::Kind getTypeKind() const { return type.getKind(); }

    bool isUncertainType() const { return type.getKind() == Type::k_Type; }

    bool isConst() const { return qualifier.isConst(); }

    bool isVolatile() const { return qualifier.isVolatile(); }

    bool isRestrict() const { return qualifier.isRestrict(); }

    bool isAtomic() const { return qualifier.isAtomic(); }

    void setConst() { qualifier.setConst(); }

    void removeConst() { qualifier.removeConst(); }

    void setVolatile() { qualifier.setVolatile(); }

    void removeVolatile() { qualifier.removeVolatile(); }

    void setRestrict() { qualifier.setRestrict(); }

    void removeRestrict() { qualifier.removeRestrict(); }

    void setAtomic() { qualifier.setAtomic(); }

    void removeAtomic() { qualifier.removeAtomic(); }

    //Fixme:
    // 错误实现，请勿使用
    // 要完整实现需考虑Type的每个派生类
    bool operator != (QualType cmp) const {
        if(qualifier.getQual() != cmp.qualifier.getQual())
            return true;
        if(type.getKind() != cmp.getType().getKind())
            return true;
        return false;
    }
};

class BuiltInType : public Type {
public:
    // 枚举类中所涉及基本类型都是C++保留字
    // 所以在前面加下划线区分
    enum TypeEnum : short {
        _void,
        _int,
        _char,
        _bool,
        _short,
        _long,
        _float,
        _double
    };

    short typeEnum;

    BuiltInType( TypeEnum _typeEnum )
    : Type() {
        typeKind = k_BuiltInType;
        typeEnum = _typeEnum;
    }

    TypeEnum getTypeType() const { return static_cast<TypeEnum>(typeEnum); };

    std::string getTypeTypeAsString() const {
        switch(typeEnum) {
            case(_void):      return "void";
            case(_int):       return "int";
            case(_char):      return "char";
            case(_bool):      return "bool";
            case(_short):     return "short";
            case(_long):      return "long";
            case(_float):     return "float";
            case(_double):    return "double";
            default:          return "invalid type";
        }
    }

    void setTypeType( TypeEnum _typeEnum ) { typeEnum = _typeEnum; }
};

class PointerType : Type {
protected:
    QualType pointeeType;

public:
    PointerType( QualType _pointeeType )
    : Type() {
        typeKind = k_PointerType;
        pointeeType = _pointeeType;
    }

    const QualType getPointeeType() const { return pointeeType; }
};

#endif //FRONTEND_TYPE_H
