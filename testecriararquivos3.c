#include <stdio.h>
int main()
{
    FILE *arq;
    char texto[50];

    arq=fopen("dados.txt","r");

    while(fgets(texto,50,arq)!=NULL)
        printf("%s",texto);

    fclose(arq);

    return(0);
}