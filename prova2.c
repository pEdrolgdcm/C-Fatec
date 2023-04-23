#include <stdio.h> //eu n consegui terminar o exercicio, n consegui fazer ele funcionar corretamente, espero q vc possa considerar algo ^^
int main()
{
    int i, idade, opiniao, otimo = 0, bom = 0, regular = 0, ruim = 0, pessimo = 0, idaderuim = 0, idade65 = 0;
    printf("** Pesquisa de opiniao **\n");
    printf("\n");
    printf("\t[1] Otimo\n");
    printf("\t[2] Bom\n");
    printf("\t[3] Regular\n");
    printf("\t[4] Ruim\n");
    printf("\t[5] Pessimo\n");

    while (i != -1)
    {
        printf("Idade: ");
        scanf("%d", &idade);
        printf("Opiniao: ");
        scanf("%d", &opiniao);
        printf("\n");

        if (opiniao == 1)
        {
            otimo = otimo + 1;
        }
        if (opiniao == 3)
        {
            regular = regular + 1;
        }
        if (opiniao == 4)
        {
            ruim = ruim + 1;
            idaderuim = idaderuim + idade;
        }
        if (idade >= 65)
        {
            idade65 = idade65 + 1;
        }
    }
    idaderuim = idaderuim / ruim;
    printf("\nA quantidade de pessoas que responderam otimo: %d", otimo);
    printf("\nA quantidade de pessoas que responderam regular: %d", regular);
    printf("\nA media das idades que responderam ruim: %d", idaderuim);
    printf("\nA quantidade de pessoas com a idade acima de 65 é %d", idade65);
    return (0);
}