cmake_minimum_required(VERSION 3.20)
project(FrontEnd)

set(CMAKE_CXX_STANDARD 17)
# set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address")
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../json/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../GoodCompiler/llvm-12.0.1.src)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../llvm-project/llvm/include)

add_executable(FrontEnd main.cpp Yacc/Grammar.cpp include/Yacc/GrammarParser.h Yacc/GrammarParser.cpp Yacc/Items.cpp include/Yacc/Items.h Yacc/Constructor.cpp include/Yacc/Constructor.h Yacc/utils.cpp include/Yacc/utils.h include/Parser/CSTBuilder.h Parser/CSTBuilder.cpp include/Parser/CST.h Parser/CST.cpp include/AST/Decl.h include/AST/Stmt.h include/AST/Type.h include/AST/Expr.h include/AST/Specifiers.h include/include_json.h include/AST/ASTBuilder.h test.cpp AST/ASTBuilder.cpp include/AST/AbstractASTNode.h include/AST/RecursiveASTVisitor.h include/ASTConsumers/ASTDumper.h AST/RecursiveASTVisitor.cpp include/ASTConsumers/IRGenerator.h)
