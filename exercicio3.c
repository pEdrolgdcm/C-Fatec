#include <stdio.h>
int main()
{
    int b, h, a; //b= base, h= altura, a= área
    printf("Qual a altura do triangulo? ");
    scanf("%d", &h);
    printf("Qual a base do triangulo? ");
    scanf("%d", &b);
    a = b * h / 2;
    printf("a area do triangulo e: %d", a);
    return (0);
}