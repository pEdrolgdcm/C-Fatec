#include <stdio.h>

void soma(int, int); //aqui n precisa colocar int X, variável local

int main()
{
    soma(10,20); //esses 10 e 20 passam pro (a) e pro (b)
    return(0);
}

void soma(int a, int b) //aqui precisa colocar int X, variável local
{
    printf("Soma = %d\n",a+b);
}
