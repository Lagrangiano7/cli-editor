#include "../include/dump_file.h"
#include "../include/endswithstr.h"
#include "../include/get_file_type.h"

int dump_file(const char* filename){

    filetype_t type = get_file_type(filename);

    FILE* f = fopen(filename, "r");
    if(f==NULL){
        puts("Could not open file");
        return 0;
    }
    char line[FILE_LINE_SIZE];
    
    if(type==PYTHON){
        while(fgets(line, FILE_LINE_SIZE, f)){
        // Check for keywords to add them color in the very buffer and then print
        printf("%s", line);
        }
    } else if(type==C){
        while(fgets(line, FILE_LINE_SIZE, f)){
        // Check for keywords to add them color in the very buffer and then print
        printf("%s", line);
        }
    } else if(type==CPP){
        while(fgets(line, FILE_LINE_SIZE, f)){
        // Check for keywords to add them color in the very buffer and then print
        printf("%s", line);
        }
    } else if(type==TXT || type==UNKNOWN){
        while(fgets(line, FILE_LINE_SIZE, f)){
        // Check for keywords to add them color in the very buffer and then print
        printf("%s", line);
        }
    }

    fclose(f);
    return 1;
}