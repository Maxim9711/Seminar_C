#include <stdio.h>

int countONE(int num);

int main(){

    int num = 0;

    scanf("%d", &num);
    printf("%d\n", countONE(num));

    return 0;
}

int countONE(int num){
    
    int count = 0;
    
    for (int i = 0; i < 32; i++, num <<= 1)
        if(num & 0x80000000) count++;

    return count;
}