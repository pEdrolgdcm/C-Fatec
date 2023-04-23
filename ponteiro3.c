#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *x;
    x= (int *)malloc(sizeof(int));
    *x=10;
    printf("\nx = %d", *x);
    free(x);
    return(0);
}