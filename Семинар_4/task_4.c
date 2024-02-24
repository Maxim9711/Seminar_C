#include "stdio.h"
#include "math.h"

int flipDigits(int number);

int main(){

    int num = 0;

    scanf("%d", &num);

    printf("%d\n", flipDigits(num));

    return 0;
}


int flipDigits(int number){

    int numDigits = 1;

    while(number / ((int)(pow(10,numDigits))) != 0)
        numDigits++;


    int firstNum = 0;
    int secondNum = 0;

    int firstDivisor = 0;
    int secondDivisor = 0;

    for (int i=1; i <= numDigits/2; i++){

        firstDivisor = (int)pow(10, numDigits-i);
        secondDivisor = (int)pow(10, i-1);

        firstNum = number / firstDivisor % 10;
        secondNum = number % (secondDivisor*10) / secondDivisor;

        number = number
            - (firstNum * firstDivisor + secondNum * secondDivisor)
            + (secondNum * firstDivisor + firstNum * secondDivisor);
    }


    return number;
}