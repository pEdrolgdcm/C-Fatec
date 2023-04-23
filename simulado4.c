#include <stdio.h>
int main()
{
    int a, l, c, d;
    printf("Qual a altura da caixa? ");
    scanf("%d", &a);
    printf("Qual a largura da caixa? ");
    scanf("%d", &l);
    printf("Qual o comprimento da caixa? ");
    scanf("%d", &c);
    printf("Qual o diametro da bola? ");
    scanf("%d", &d);
    if ((d < a) && (d < l) && (d < c))
    {
        printf("A bola cabe dentro da caixa!");
    }
    else
    {
        printf("A bola nao cabe dentro da caixa!");
    }

    return (0);
}