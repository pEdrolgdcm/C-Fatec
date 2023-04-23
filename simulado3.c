#include <stdio.h>
int main()
{
    int a, l, c, v;
    printf("Qual a altura do objeto? ");
    scanf("%d", &a);
    printf("Qual a largura do objeto? ");
    scanf("%d", &l);
    printf("Qual o comprimento do objeto? ");
    scanf("%d", &c);
    v = a * l * c / 6.000;
    printf("O peso cubico da embalagem e: %d", v);
    return (0);
}