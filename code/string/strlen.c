#include "../../include/string/strlen.h"

unsigned int Strlen(const char* str){
    unsigned int count = 0;
    while(*str++) count++;
    return count;
}