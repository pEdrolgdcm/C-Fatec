#include <stdio.h>
int main()
{
    float vd, vr; //vd= valor em dólar, vr= valor em real
    printf("Qual o valor do produto? ");
    scanf("%f", &vd);
    vr = vd * 5.30; //dia 19/08/21, cotação do dólar R$05,30
    printf("O valor em real e: %f", vr);
    return (0);
}