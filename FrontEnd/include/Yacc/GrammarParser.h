//
// Created by tangny on 2021/10/16.
//

#ifndef FRONTEND_GRAMMARPARSER_H
#define FRONTEND_GRAMMARPARSER_H

#include <string>
#include "include/Yacc/Grammar.h"

#define END_SUCCESS 0
#define END_OF_SEGMENT 1
#define END_OF_PRODUCER 2
#define END_OF_LINE 3
#define TOKEN_LINE 4
#define START_UNIT 5
#define NEXT_PRODUCTION 6
#define ADD_LISTENER 7

int readToken( std::string &, int &, Token & );

void writeListenerToFile( std::ofstream& , std::string );

void parseProducer( GrammarSet & , const char * );


#endif //FRONTEND_GRAMMARPARSER_H
