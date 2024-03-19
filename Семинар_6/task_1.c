#include <stdio.h>
#include <math.h>

void print_num(int num);

int main(){

    int num = 54321;

    scanf("%d", &num);
    print_num(num);

    return 0;
}

void print_num(int num){

    int countNum = 0;    
    for (int i=num; i!=0 ; i/=10)
        countNum++;
    
    if (countNum > 1){
        printf("%d ", num / ((int)pow(10, countNum-1)));
        print_num(num % ((int)pow(10, countNum-1)));
    }
    else
        printf("%d \n", num / ((int)pow(10, countNum-1)));

}