#include <stdio.h>
#include <stdbool.h>

void position_chess(char c, int n);

int main(){
    int n;
    char c;

    scanf("%c", &c);
    scanf("%d", &n);
    position_chess(c, n);

    return 0;
}

void position_chess(char c, int n)  {
    if (n % 2 != 0)
        if (c % 2 != 0)
            printf("BLACK\n");
        else
            printf("WHITE\n");
    else    
        if (c % 2 == 0)
            printf("BLACK\n");
        else
            printf("WHITE\n");

}