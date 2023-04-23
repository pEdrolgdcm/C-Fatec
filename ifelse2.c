#include <stdio.h>
int main()
{
    float n1, n2, media;
    int faltas;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a quantidade de faltas: ");
    scanf("%d", &faltas);
    media = (n1 + n2) / 2;
    printf("Media do aluno = %f\n", media);
    if (media >= 6)
    {
        if (faltas <= 20)
        {
            printf("Aluno Aprovado\n");
        }
        else
        {
            printf("Aluno Reprovado\n");
        }
    }
    else
    {
        printf("Aluno Reprovado\n");
    }
    return (0);
}