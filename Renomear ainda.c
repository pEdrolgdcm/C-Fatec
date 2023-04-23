#include <stdio.h>

void funcao(void);

int main()
{
    funcao(); //quanto mais funções tiver aqui, mais vezes ele vai repetir o "printf("Primeiro exemplo!\n\n");"
    funcao();
    funcao();
    funcao();
    return(0);
}

void funcao(void)
{
    printf("Primeiro exemplo!\n\n");
}
