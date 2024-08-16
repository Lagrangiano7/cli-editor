#include "../../include/string/endswithstr.h"
#include "../../include/string/strlen.h"
#include "../../include/string/strcmp.h"

int endswithstr(const char* target, const char* str){
    unsigned int len_str = Strlen(str);
    unsigned int len_target = Strlen(target);

    target+=len_target-len_str;
    return Strcmp(target, str);
}