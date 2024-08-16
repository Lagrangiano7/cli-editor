#include "../../include/string/endswith.h"
#include <stdio.h>

char endswith(const char* str){
    while(*str++);
    return *(str-3);
}