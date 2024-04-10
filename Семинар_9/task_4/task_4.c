#include <stdio.h>

#define width 1000

int main(){
    
    
    FILE *file_in = fopen("input.txt", "r");
    FILE *file_out = fopen("output.txt", "w");
   
   
    char str[width];
    int j;
    char c;
    int i = -1;
    fgets(str, width, file_in);
    while (str[++i] != '\0'){
        c = str[i];
        j = i;

        while(str[++j] != '\0')
            if (str[j] == c)
                str[j] = ' ';
    }
    
    i = -1;
    while (str[++i] != '\0')
        if (str[i] != ' ')
            fprintf(file_out, "%c",str[i]);
    
    fclose(file_in);
    fclose(file_out);
    
    return 0;

}