#include <stdio.h>
int main()
{
    FILE *arq;
    int g;
    arq = fopen("dados.txt", "w"); // cria o arquivo  e define o parâmetro w para gravação

    g = fprintf(arq, "Eternos estreia semana que vem");

    fclose(arq);

    return (0);
}