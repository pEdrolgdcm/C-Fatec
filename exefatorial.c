#include <stdio.h>
int main()
{
    //sempre comece declarando as suas variáveis
    int n, x, fat = 1; //tem q começar a variavel valendo 1 pois vai multiplicar, e n pode começar sendo 0
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    if (n != 0)
    {
        for (x = 1; x <= n; x++)
            fat = fat * x;
    }
    printf("Fatorial de %d = %d\n", n, fat);
    return (0);
}