#include <stdio.h>
int main()
{
    int peso, np;
    float pp;
    printf("Qual o seu peso?: ");
    scanf("%d", &peso);
    printf("Escolha um numero de 1 a 5 para saber seu peso em um determinado planeta do sistema solar! ");
    scanf("%d", &np);
    switch (np)
    {
    case 1:
        pp = peso * 0.37;
        printf("O seu peso em mercurio e: %f", pp);
        break;
    case 2:
        pp = peso * 0.88;
        printf("O seu peso em venus e: %f", pp);
        break;
    case 3:
        pp = peso * 0.38;
        printf("O seu peso em marte e: %f", pp);
        break;
    case 4:
        pp = peso * 2.64;
        printf("O seu peso em jupiter e: %f", pp);
        break;
    case 5:
        pp = peso * 1.15;
        printf("O seu peso em saturno e: %f", pp);
        break;
    default:
        printf("O numero nao corresponde a nenhum planeta");
    }

    return (0);
}