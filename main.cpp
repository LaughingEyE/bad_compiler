#include <iostream>
#include <fstream>
#include <ctime>
#include <fstream>
#include "include/Yacc/Grammar.h"
#include "include/Yacc/GrammarParser.h"
#include "include/Yacc/Items.h"
#include "include/Yacc/utils.h"
#include "include/Yacc/Constructor.h"
#include "include/Parser/CST.h"
#include "include/Parser/CSTBuilder.h"
#include "include/AST/ASTBuilder.h"
#include "include/ASTConsumers/ASTDumper.h"

std::vector<LexUnit> constructTestCase( const char* );

int main() {
    clock_t start, end;
    start = clock();
    GrammarSet grammarSet;
    parseProducer(grammarSet, "../Yacc/yacc_c99.y");
    LALRconstructor lalrConstructor(&grammarSet);
    lalrConstructor.constructLR0Core();
    lalrConstructor.labelPropagate();
    lalrConstructor.extend();
    lalrConstructor.printItemSet();
    lalrConstructor.generateTable();
    lalrConstructor.printTable();
    end = clock();
    std::cout << "Total LALR takes " << double(end - start) / CLOCKS_PER_SEC << "s." << std::endl;

    CSTBuilder cstBuilder(&lalrConstructor, &grammarSet);
    std::vector<LexUnit> testVec = constructTestCase("../tokens3.txt");
    CSTNode *head = cstBuilder.constructCST(testVec, 0);
    if(head == NULL)
        std::cout << "create CST failed";
    json jsonCST = dumpCST(head);
    std::ofstream CSTOutput("CST.json");
    CSTOutput << jsonCST;

    ASTBuilder astBuilder;
    TranslationUnitDecl* translationUnitDecl = astBuilder.constructAST(head);
    if(translationUnitDecl == NULL)
        std::cout << "create AST failed";
    ASTDumper astDumper;
    astDumper.traverseTranslationUnitDecl(translationUnitDecl);
    deleteCST(head);
}

std::vector<LexUnit> constructTestCase(const char* filename) {
    std::ifstream inputFile(filename);
    std::string inputId, inputType;
    std::vector<LexUnit> vec;
    while(inputFile >> inputId) {
        inputFile >> inputType;
        vec.push_back(LexUnit(inputId, inputType));
    }
    return vec;
}
