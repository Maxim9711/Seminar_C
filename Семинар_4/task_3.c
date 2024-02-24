#include "stdio.h"

char* isEvenNumber(int number);

int main(){

    int num = 0;

    scanf("%d", &num);

    printf("%s\n", isEvenNumber(num));

    return 0;
}


char* isEvenNumber(int number){
    
    do{

        if (number%10%2 != 0)
            return "NO";

    }while (number /= 10);
    
    return "YES";
}