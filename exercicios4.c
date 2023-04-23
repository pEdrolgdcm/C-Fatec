#include <stdio.h>
int main()
{
    int t;
    float tc, tf, te;
    printf("Vamos trabalhar com 1-Celsius ou 2-Fahrenheit? ");
    scanf("%d", &t);
    printf("Qual a temperatura? ");
    scanf("%f", &te);
    switch (t)
    {
    case 2:
        tc = (te - 32) / 1.8;
        printf("São %f graus Celsius", tc);
        break;
    case 1:
        tf = (9 / 5) * te + 32;
        printf("São %f graus Fahrenheit", tf);
        break;
    default:
        printf("Escolha entre 1 e 2");
    }

    return (0);
}