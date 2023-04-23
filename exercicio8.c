#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf("Qual o valor do primeiro numero?: ");
    scanf("%d", &n1);
    printf("Qual o valor do segundo numero?: ");
    scanf("%d", &n2);

    n3 = (n1 == n2) ? n1 + n2 : n1 * n2;

    printf("Resultado = %d\n", n3);

    return (0);
}