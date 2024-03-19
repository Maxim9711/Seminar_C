#include <stdio.h>

int recurs_power(int n, int p);

int main(){
        
    int n = 0;
    int p = 0;
    scanf("%d %d", &n, &p);
    printf("%d\n", recurs_power(n, p));
    return 0;
}

int recurs_power(int n, int p){
    
    if(p)
        return n*recurs_power(n, p-1);

    return 1;

}