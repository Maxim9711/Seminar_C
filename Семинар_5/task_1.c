#include <stdio.h>
#include <math.h>

int main(){

    int numCell = 0;

    scanf("%d", &numCell);

    if (numCell > 0 && numCell < 65)
        printf("%d\n", (int)pow(2, numCell-1));
    else
        printf("Много хочешь...\n");

    return 0;
}
