#ifndef _CHECK_PARAMS_H
#define _CHECK_PARAMS_H 1
#include "print_help.h"
#include "strcmp.h"
#include "endswithstr.h"

int Check_params(int argc, char* argv2){
    if(argc!=3){
        print_help();
        return 0;
    }

    if(!(Strcmp(argv2, "w") || Strcmp(argv2, "a") || Strcmp(argv2, "r"))){
        print_help();
        return 0;
    }

    return 1;
}



#endif