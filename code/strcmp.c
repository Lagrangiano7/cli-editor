#include "../include/strcmp.h"

int Strcmp(const char* str1, const char* str2){
    while(*str1){
        if(*str1++!=*str2++) return 0;
    }
    return 1;
}