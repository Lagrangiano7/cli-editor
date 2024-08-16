#ifndef _GET_FILE_TYPE_H
#define _GET_FILE_TYPE_H 1

#include "endswithstr.h"

typedef enum{
    PYTHON,
    C,
    CPP,
    TXT,
    UNKNOWN
} filetype_t;

filetype_t get_file_type(const char* filename){
    filetype_t type;
    if(endswithstr(filename, ".py")) type=PYTHON;
    else if(endswithstr(filename, ".c")) type=C;
    else if(endswithstr(filename, ".cpp") || endswithstr(filename, ".cc")) type=CPP;
    else if(endswithstr(filename, ".txt")) type=C;
    else type=UNKNOWN; // Treated as text file by default, no colors

    return type;
}

#endif