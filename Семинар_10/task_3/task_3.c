#include "test_lib.h"

#define size 10000

int main(){
    
    char str[size], strFinal[size];
    input(str);
    extension(str, strFinal);
    output(strFinal);
    return 0;

}