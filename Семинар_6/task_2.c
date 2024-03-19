#include <stdio.h>

void pr_num_AtoB(int a, int b);

int main(){

    int a = 5;
    int b = 2;

    scanf("%d %d", &a, &b);
    pr_num_AtoB(a, b);

    return 0;
}

void pr_num_AtoB(int a, int b){
    
    if (a > b){
        printf("%d ", a--);
        pr_num_AtoB(a, b);
    }        
    else if(a < b){
        printf("%d ", a++);
        pr_num_AtoB(a, b);
    }       
    else
        printf("%d\n", a);

}