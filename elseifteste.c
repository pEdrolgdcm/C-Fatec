#include <stdio.h>
int main()
{
    int valor = 11;
    if (valor == 10)
    {
        printf("executei o primeiro if");
    }
    else if (valor < 10)
    {
        printf("executei o segundo if");
    }
    else if (valor > 10)
    {
        printf("executei o terceiro if");
    }
    else
    {
        printf("Nao encontrei nenhuma condicao valida");
    }
    return (0);
}