#include <stdio.h>
#include <stdlib.h>

void valor (int, int);

int main()
{
    int a = 10, b = 20;
    printf("\na = %d e b = %d antes de chamar a função", a, b);
    valor(a,b);
    printf("\na = %d e b = %d depois de chamar a função", a, b);
    return(0);
}

void valor (int x, int y)
{
    x = 50;
    y = 70;
}