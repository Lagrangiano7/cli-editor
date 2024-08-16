#include "../include/endswithstr.h"
#include "../include/strlen.h"
#include "../include/strcmp.h"

int endswithstr(const char* target, const char* str){
    unsigned int len_str = Strlen(str);
    unsigned int len_target = Strlen(target);

    target+=len_target-len_str;
    return Strcmp(target, str);
}