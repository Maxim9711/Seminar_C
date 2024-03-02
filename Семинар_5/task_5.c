#include <stdio.h>

int main(){

    int count = 0;
    char c;

    while ( (c = getchar()) != '.'){
        // putchar(c);
        if (c == '(')
            count++;
        if (c == ')')
            count--;
    }        

    if (count)
        printf("NO\n");
    else
        printf("YES\n");

    return 0;
}

