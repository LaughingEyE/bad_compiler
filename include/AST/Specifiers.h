//
// Created by tangny on 2021/12/8.
//

// 各种指示符
// clang中原文件见：
// https://clang.llvm.org/doxygen/Specifiers_8h_source.html#l00117

#ifndef FRONTEND_SPECIFIERS_H
#define FRONTEND_SPECIFIERS_H

enum class TypeSpecifierWidth { Unspecified, Short, Long, LongLong };

enum class TypeSpecifierSign { Unspecified, Signed, Unsigned };

// 这里对于表达式的Value类型参考C标准
// C++标准见：
// https://en.cppreference.com/w/cpp/language/value_category
enum ExprValueKind { LValue, RValue };

#endif //FRONTEND_SPECIFIERS_H
