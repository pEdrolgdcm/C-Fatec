#include <stdio.h>

int calc(int a, int b)
{
    return (a * b);
}

int main()
{
    int x, y;
    printf("Digite um valor ");
    scanf("%d", &x);
    printf("Digite outro valor ");
    scanf("%d", &y);
    printf("Resultado = %d\n", calc(x, y));

    return (0);
}