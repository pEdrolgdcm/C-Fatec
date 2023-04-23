#include <stdio.h>

struct dados
{
    char nome[100];
    float salario;
    int idade;

};

int main(){

    struct dados funcionario;

    printf("Informe o nome do funcionario:");
    gets(funcionario.nome);
    printf("Informe o salario do funcionario:");
    scanf("%f",&funcionario.salario);
    printf("Informe a idade do funcionario:");
    scanf("%d",&funcionario.idade);

    printf("\nNome do funcionario: %s",funcionario.nome);
    printf("\nSalario do funcionario: %.2f",funcionario.salario);
    printf("\nIdade do funcionario: %d",funcionario.idade);
    

    return(0);
}