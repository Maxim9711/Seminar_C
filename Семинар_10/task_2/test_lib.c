#include "test_lib.h"

enum States { Start, In, Out };

void delete_spaces(char fileName_1[], char fileName_2[]){

    FILE *input_file = fopen(fileName_1, "r");
    FILE *output_file = fopen(fileName_2, "w");
    int c, state = Start;

    while ((c = fgetc(input_file)) != EOF){
        switch (state){
            case Start:
                if (c != ' '){
                state = In;
                fputc(c, output_file);
                }
                break;
            
            case In:
                if (c == ' ')
                    state = Out;
                else
                    fputc(c, output_file);
                break;
            
            case Out:
                if (c != ' '){
                    state = In;
                    fputc(' ', output_file);
                    fputc(c, output_file);
                }
                break;
        }
    }
    
    fclose(input_file);
    fclose(output_file);

}