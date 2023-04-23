#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *x, y=10;
    
    x = &y;
    
    *x = 50;
    
    printf("\ny = %d e x = %d", y, *x);
    return(0);
}