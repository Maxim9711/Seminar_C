#include <stdio.h>
#include <string.h>

#define width 1024

int main(void){
    
    char line[width];
    char result[width];

    FILE *file_in = fopen("input.txt", "r");
    FILE *file_out = fopen("output.txt", "w");
    
    int len, max_len = 0;
    while (fscanf(file_in, "%s", line) == 1){
        len = strlen(line);
        
        if (len > max_len){
            max_len = len;
            strcpy(result, line);
        }
    }
    
    fprintf(file_out, "%s", result);
    fclose(file_in);
    fclose(file_out);

    return 0;
}