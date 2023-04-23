#include <stdio.h>
int main()
{
    int a[10], x;
    for (x = 0; x <= 9; x++)
    {
        printf("Digite um valor para a posicao [%d]: ", x);
        scanf("%d", &a[x]);
    }

    if (a[x] < 30)
    {
        a[x] = 1;
    }

    for (x = 0; x <= 10; x++)
    {
        printf("Valor da posicao [%d]  = %d\n", x, a[x]);
    }

    return (0);
}