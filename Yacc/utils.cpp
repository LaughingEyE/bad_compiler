//
// Created by tangny on 2021/10/21.
//

#include <vector>
#include <algorithm>
#include "include/Yacc/utils.h"

void dedup(std::vector< Token>& tokenList) {
    std::sort(tokenList.begin(), tokenList.end());
    tokenList.erase(std::unique(tokenList.begin(), tokenList.end()), tokenList.end());
}