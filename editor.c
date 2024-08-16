#include <stdio.h>
#include <stdlib.h>
#include "include/dump_file.h"
#include "include/print_help.h"
#include "include/strcmp.h"
#include "include/endswith.h"
#include "include/check_params.h"

#define CHAR_BUFF 100

int main(int argc, char* argv[]){

    // Check user params
    if(!Check_params(argc, argv[2])) return -1;

    // Open file (safely)
    FILE* f = fopen(argv[1], argv[2]);

    if(f==NULL){
        puts("Could not open file, something went wrong");
        return -1;
    }


    // Dump file contents to terminal if mode = append or read
    if(Strcmp(argv[2], "a") || Strcmp(argv[2], "r")){
        // Dump whole file contents before input prompt (>)
        if(!dump_file(argv[1])) return -1;
    }

    // Stop program if mode = read
    if(Strcmp(argv[2], "r")) return 0;


    // EXECUTION VARIABLES
    int inside_braces = 0;

    while(1){
        // Create buffer and prompt user for line
        char cmd[CHAR_BUFF];
        if(inside_braces) printf("... ");
        else printf("> ");
        fgets(cmd, CHAR_BUFF, stdin);

        // Check for possible change in prompt (aesthetic purposes)
        if(endswith(cmd)=='{') inside_braces=1;
        else if(endswith(cmd)=='}') inside_braces = 0;
        
        // Check for exit command
        if(Strcmp(cmd, "exit\n")){
            puts("Exiting...");
            fclose(f); // Newly added
            return 0;
        }

        // Dump contents to file
        fprintf(f, cmd);
    }

    return 0;
}