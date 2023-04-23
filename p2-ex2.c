#include <stdio.h> //a única coisa q ta dando "errado" é q era pra estar dando 18,4 de média, n sei pq só está saindo 18, sendo q a conta está correta
int main()
{

    int n[10] = {2, 4, 35, 50, 23, 17, 9, 12, 27, 5};

    int soma = 0;

    float media = 0;

    soma = n[0] + n[1] + n[2] + n[3] + n[4] + n[5] + n[6] + n[7] + n[8] + n[9];
    media = soma / 10;

    printf("O maior valor eh: %d\n", n[3]);
    printf("A media eh: %.2f\n", media);

    return (0);
}