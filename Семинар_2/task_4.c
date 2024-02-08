#include "stdio.h"

int main(){

    int num;

    scanf("%d", &num);
    printf("%.2f\n", ((num/1000) + (num/100%10) + (num/10%10) + (num%10))/4.0);

    return 0;
}