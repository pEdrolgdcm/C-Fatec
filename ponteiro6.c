#include <stdio.h>
#include <stdlib.h>

void referencia (int*, int*);

int main()
{
    int a = 10, b = 20;
    
    printf("\na = %d e b = %d antes de chamar a função", a, b);
    referencia(&a,&b);
    printf("\na = %d e b = %d depois de chamar a função", a, b);
    
    return(0);
}

void referencia (int *x, int *y)
{
    *x = 50;
    *y = 70;
}