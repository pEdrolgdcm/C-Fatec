#include <stdio.h>
int main()
{
    int x, y, resto;
    printf("Entre com o valor de X: ");
    scanf("%d", &x);
    printf("Entre com o valor de Y: ");
    scanf("%d", &y);
    resto = x % y; // divide x por y e retorna o resto
    printf("Resto da divisao = %d", resto);
    return (0);
}