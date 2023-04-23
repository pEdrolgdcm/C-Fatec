#include <stdio.h>
int main()
{
    int x = 0, carro = 0, valorcarro = 0, parcelas = 0, juros = 0;

    printf("Qual o modelo do carro? ");
    scanf("%d", &carro);

    printf("Pretende parcelar em quantas vezes? ");
    scanf("%d", &parcelas);

    printf("Qual a taxa de juros? ");
    scanf("%d", &juros);

    printf("Valor do carro: %d", valorcarro);
}
