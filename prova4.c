#include <stdio.h>
int main()
{
    int peso1, peso2, peso3, peso4, peso5, pesoe, pesot;
    printf("Me de o peso da primeira pessoa: ");
    scanf("%d", &peso1);
    printf("Me de o peso da segunda pessoa: ");
    scanf("%d", &peso2);
    printf("Me de o peso da terceira pessoa: ");
    scanf("%d", &peso3);
    printf("Me de o peso da quarta pessoa: ");
    scanf("%d", &peso4);
    printf("Me de o peso da quinta pessoa: ");
    scanf("%d", &peso5);
    printf("Qual seria a capacidade maxima do elevador? ");
    scanf("%d", &pesoe);
    pesot = peso1 + peso2 + peso3 + peso4 + peso5;
    if (pesot < pesoe)
    {
        printf("O elevador suporta esse peso!");
    }
    else
    {
        printf("O elevador nao suporta esse peso!");
    }
    return (0);
}