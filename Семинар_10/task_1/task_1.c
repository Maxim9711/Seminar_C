#include <stdio.h>
#include <string.h>
#include "test_lib.h"


#define width 1024

int main(void){
    
    char * input = "input.txt";
    char * output = "output.txt";
    char line[width];
    
    FILE *file_test = fopen(input, "r");
    
    fscanf(file_test, "%[^\n]", line);
    fclose(file_test);
    ch_smbls(strlen(line), line);
    file_test = fopen(output, "w");
    fprintf(file_test, "%s", line);
    fclose(file_test);
    
    return 0;
}