#include "stdio.h"

char* isThreeDigitNumber(int number);

int main(){

    int num = 123;

    scanf("%d", &num);

    printf("%s\n", isThreeDigitNumber(num));

    return 0;
}


char* isThreeDigitNumber(int number){
    
    int numOfDigits = 0;

    while (numOfDigits < 4 && number != 0){        
        number /=10;
        numOfDigits++;        
    }

    if (numOfDigits==3)
        return "YES";
    
    return "NO";
    
}