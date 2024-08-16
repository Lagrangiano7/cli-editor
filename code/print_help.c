#include "../include/print_help.h"
#include <stdio.h>

void print_help(void){
    const char* helpmsg = "EDITOR HELP MENU\n\nUsage: ./editor FILENAME r/w/a";
    puts(helpmsg);
}