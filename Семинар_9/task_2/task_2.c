#include <stdio.h>
#include <string.h>

#define width 1024

int main(void)
{
    char line[width];
    FILE *file = fopen("input.txt", "r");

    fscanf(file, "%[^\n]", line);
    fclose(file);

    char c;
    for(int i=0; (c = line[i]) != '\0'; i++){
       
        if ((c == 'a') || (c == 'A'))
            line[i]++;

        else if ((c == 'b') || (c == 'B'))
            line[i]--;
    }

    file = fopen("output.txt", "w");
    fprintf(file, "%s", line);
    fclose(file);
    
    return 0;
}