//
// Created by Muhammad Alfin Azza Pujaar on 07/01/24.
//

#ifndef DEFFREUS_H
#define DEFFREUS_H

#include <iostream>

std::string myReverseString(std::string str) {
    std::string res = str;
    long long id=0;
    for(int i=str.length()-1; i>=0; --i) {
        res[id] = str[i];
        ++id;
    }
    return res;
}

#endif //DEFFREUS_H
