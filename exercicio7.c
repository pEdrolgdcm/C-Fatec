#include <stdio.h>
int main()
{
    float pc, pd, i, pt;
    printf("Qual o preco do carro? ");
    scanf("%f", &pc);
    i = pc * 30 / 100;
    pd = pc * 12 / 100;
    printf("O preco da porcentagem do distribuidor e: %f", pd);
    printf(", o preco dos impostos e: %f", i);
    return (0);
}