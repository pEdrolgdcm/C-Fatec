#include <stdio.h>
void verificabuffer()
{
char c;
while ((c=getchar()) != '\n' && c!= EOF);
}



int main()
{
char nome[50], cidade[50];
int x;
float salario;
for (x=1;x<=3;x++){
printf("Digite seu nome: ");
gets(nome);
printf("Digite sua cidade: ");
gets(cidade);
printf("Entre com seu salario: ");
scanf("%f",&salario);
verificabuffer();




printf("Seu nome = %s\n",nome);
printf("Sua cidade = %s\n",cidade);
printf("Salario = %.2f\n",salario);
}



return(0);
}