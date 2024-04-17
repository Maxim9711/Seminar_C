#include "test_lib.h"

void input(char *str){
    
    FILE *input_file = fopen("input.txt", "r");
    
    while(fscanf(input_file, "%[^\n]", str) == 1);
        fclose(input_file);
}

void extension(char *str, char *buf){
    for(int i = strlen(str) - 1; i >= 0;i--){
        if(str[i] == '/'){
            strcpy(buf, str);
            strcat(buf, ".html");
            break;
        }

        else if(str[i] == '.'){
            memcpy(buf,str,i);
            strcat(buf, ".html");
            break;
        }
    }
}

void output(char *str)
{
    FILE *output_file = fopen("output.txt", "w");
    
    fprintf(output_file, "%s", str);
    fclose(output_file);
}