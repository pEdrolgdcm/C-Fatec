#include <stdio.h>
int main()
{
    float n1, n2, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    media = (n1 + n2) / 2;
    printf("Media do aluno = %f\n", media);
    if (media >= 6)
    {
        printf("Aluno esta Aprovado\n");
    }
    else
    {
        printf("Aluno Reprovado\n");
    }

    return (0);
}