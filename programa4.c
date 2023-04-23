#include <stdio.h>

struct dados
{
    char nome[100];
    float salario;
    int idade;
}funcionario;

void cadastrar(void);
void listar(void);

int main(){
    cadastrar();
    listar();

    return(0);
}

void cadastrar(void){
    printf("Informe o nome do funcionario:");
    gets(funcionario.nome);
    printf("Informe o salario do funcionario:");
    scanf("%f",&funcionario.salario);
    printf("Informe a idade do funcionario:");
    scanf("%d",&funcionario.idade);
}

void listar(void){
    printf("\nNome do funcionario: %s",funcionario.nome);
    printf("\nSalario do funcionario: %.2f",funcionario.salario);
    printf("\nIdade do funcionario: %d\n",funcionario.idade);
}
