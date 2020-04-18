#include <iostream>
#include <string>
#include <cstddef>

using std::string;
int stringObjCmp(const string& str1, const string& str2){
    if(str1 == str2) return 0;
    return str1 > str2;
}

using std::begin;
int c_stringCmp(const char *str1, const char *str2){
    auto iter1 = str1;
    auto iter2 = str2;
    while(*iter1 && *iter2){
        if(*iter1 < *iter2){
            return -1;
        }else if(*iter1 > *iter2){
            return 1;
        }else{
            ++iter1;
            ++iter2;
        }
    }
    if(*iter1 == '\0'){
        return -1;
    }else if(*iter2 == '\0'){
        return 1;
    }else{
        return 0;
    }
}