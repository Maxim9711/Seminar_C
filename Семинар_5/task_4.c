#include <stdio.h>

int sumDigits(int number);

int main(){

    int number = 0;

    scanf("%d", &number);

    printf("%d\n", sumDigits(number));

    return 0;
}


int sumDigits(int number){

    int sum = 0;
    for (int i=1; i <= number; i++)
        sum += i;

    return sum;
}