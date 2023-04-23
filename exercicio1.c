#include <stdio.h>
int main()
{
    int v, t, d; //v= velocidade, t= tempo, d= distância
    printf("Digite o valor da velocidade: ");
    scanf("%d", &v);
    printf("Digite o valor do tempo: ");
    scanf("%d", &t);
    d = v * t;
    printf("Distancia = %d\n", d);
    return (0);
}