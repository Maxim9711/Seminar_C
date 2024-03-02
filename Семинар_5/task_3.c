#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_happy_number(int number);

int main(){

    int num = 0;

    scanf("%d", &num);

    if (is_happy_number(num))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}


int is_happy_number(int number){

    int sum = 0;
    int mult = 1;

    while(number){
        sum += number%10;
        mult *= number%10;
        number /= 10;
    }

    return sum == mult ? 1 : 0;

}