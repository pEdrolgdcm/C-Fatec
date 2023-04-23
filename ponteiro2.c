#include <stdio.h>
#include <stdlib.h>

int main (){

    int * x;
    x = (int *)malloc(sizeof(int));

    *x = 10;

    printf("x = %d\n, *x");

    free(x);
    
    return(0);
}