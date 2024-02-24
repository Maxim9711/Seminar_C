#include "stdio.h"

int sumSquare(int* Znum, int size);

int main(){

    const int size = 2;
    int Znum[size];

    scanf("%d%d", &Znum[0], &Znum[1]);

    printf("%d\n", sumSquare(Znum, size));

    return 0;
}


int sumSquare(int* Znum, int size){
    int sumSquare = 0;

    for (int i=Znum[0]; i<=Znum[1]; i++)
        sumSquare += i*i;

    return sumSquare;
}