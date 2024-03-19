#include <stdio.h>

void print_num();

int main(){
    
    print_num();
    printf("\n");
    return 0;
}

void print_num(){
    
    int num = 0;

    scanf("%d", &num);
    if(num%2)
        printf("%d ", num);

    if(num)
        print_num();

}