#include <stdio.h>

int soma(int, int);

int main()
{
    int func;
    func = soma(10,20);
    printf("Soma = %d\n",func);
    func = soma(50,70);
    printf("Soma = %d\n",func);
    func = soma(1024,976);
    printf("Soma = %d\n",func);
    return(0);
}

int soma(int x, int y)
{
    return(x+y);
}
