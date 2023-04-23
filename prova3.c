#include <stdio.h>
int main()
{
    int a, b, p;
    printf("Qual a altura do paralelograma? ");
    scanf("%d", &a);
    printf("Qual o comprimento do paralelograma? ");
    scanf("%d", &b);
    p = 2 * (a + b);
    printf("O perimetro desse paralelograma eh: %d", p);
    return (0);
}