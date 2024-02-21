#include "stdio.h"

int main(){

    int numMonth = 0;

    scanf("%d", &numMonth);

    char month[][10] = {"winter", "spring", "summer", "autumn"};

    if (numMonth >= 1 && numMonth <=3)
        printf("%s\n", month[0]);
    else if (numMonth >= 4 && numMonth <=6)
        printf("%s\n", month[1]);
    else if (numMonth >= 7 && numMonth <=9)
        printf("%s\n", month[2]);
    else if (numMonth >= 10 && numMonth <=12)
        printf("%s\n", month[3]);
    else
        printf("error\n");

    return 0;
}