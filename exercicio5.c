#include <stdio.h>
int main()
{
    float vp, vm; //vp= valor em polegáda, vm= valor em milímetro
    printf("Quantidade da chuva: ");
    scanf("%f", &vp);
    vm = vp * 25.4;
    printf("Valor da chuva em milimetro: %f", vm);
    return (0);
}