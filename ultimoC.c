#include <stdio.h>

#define MAX 5

struct dados
{
  char nome[100];
  float salario;
  int idade;
}pessoas[MAX];

void cadastrar(void);
void listagem(void);

int main()
{
  cadastrar();
  listagem();
  return(0);
}

void cadastrar(void)
{
  int i;
  for(i=0;i<MAX;i++)
    {
      printf("Informe o nome: ");
      scanf("%s",&pessoas[i].nome);
      printf("Informe o salario: ");
      scanf("%f",&pessoas[i].salario);
      printf("Informe a idade: ");
      scanf("%d",&pessoas[i].idade);
      printf("\n\n");
    }
}

void listagem(void)
{
  int i;
  for(i-0;1<MAX;i++)
    {
      printf("\nNome: %s",pessoas[i].nome);
      printf("\nSalario: %f",pessoas[i].salario);
      printf("\nIdade: %d",pessoas[i].idade);
      printf("\n\n");
    }
}
