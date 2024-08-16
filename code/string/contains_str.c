#include "../../include/string/contains_str.h"
#include "../../include/string/strlen.h"

int contains_str(const char* target, const char* str){

    unsigned int len_str = Strlen(str);
    unsigned int len_target = Strlen(target);
    
    // Leaps of size len_target / len_str
    // For instance, if target has 9 chard and str has 3, we search every 3 chars in target

    for(int i = 0; i < len_target/len_str; i+=len_str){
        // We might be leaving out some chars at the end but they aren't relevant because their length is smaller than len_str
        
    }
}