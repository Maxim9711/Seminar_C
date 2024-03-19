#include <stdio.h>

int acounter();

int main(){
        
    printf("%d\n", acounter());
    return 0;
}

int acounter(){
    
    int count = 0;
    char c;

    while ( (c = getchar()) != '.')
        if (c == 'a')
            count++;

    return count;

}