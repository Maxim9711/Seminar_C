#include <stdio.h>

#define size_word 100
#define size_alpha 26

int main()
{

    FILE *file_in = fopen("input.txt", "r");
    FILE *file_out = fopen("output.txt", "w");

    char word1[size_word];
    char word2[size_word];

    fscanf(file_in, "%s%s", word1, word2);
    
    int alpha1[size_alpha] = {0};
    int alpha2[size_alpha] = {0};

    int counter = -1;
    while(word1[++counter] != '\0')
        ++alpha1[word1[counter] - 'a'];
    
    counter = -1;
    while(word2[++counter] != '\0')
        ++alpha2[word2[counter] - 'a'];
    
    for (int i = 0; i < size_alpha; i++)
        if (alpha1[i] == 1 && alpha2[i] == 1)
            fprintf(file_out, "%c ", i + 97);
    
    fclose(file_in);
    fclose(file_out);
    
    
    return 0;
}