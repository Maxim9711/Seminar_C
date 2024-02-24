#include "stdio.h"
#include "stdlib.h"
#include "math.h"

void printHappyNum(int number);

int main(){

    int num = 0;

    scanf("%d", &num);

    if (num > 10)
        printHappyNum(num);

    return 0;
}


void printHappyNum(int number){


    int numDigits = 1;
    int lustNumDigits = 2;
    int sum = 0;
    int mult = 0;
    

    int* digits = malloc(2 * sizeof(int));

    for (int i=10; i < number; i++){
                    
        while(i / ((int)(pow(10,numDigits))) != 0)
            numDigits++;

        if (lustNumDigits < numDigits){
            free (digits);
            digits = malloc(numDigits * sizeof(int));    
        }


        for (int j=0; j <  numDigits; j++)
            digits[j] = i / (int)pow(10, numDigits-1-j) % 10;
        

        sum = digits[0];
        mult = digits[0];
        for (int j=1; j < numDigits; j++){
            sum += digits[j];
            mult *= digits[j];
        }
        
        if (sum == mult)
            printf("%d ", i);        


        lustNumDigits = numDigits;
        numDigits = 1;

    }

    free (digits);
    printf("\n");

}