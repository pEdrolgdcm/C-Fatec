#include <stdio.h>
int main()
{
    int n, n1, n2; //n= numero inteiro aleatório, n1= sucessor dele, n2= antecessor dele
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    n1 = n + 1;
    n2 = n - 1;
    printf("O sucessor e: %d", n1);
    printf(", o antecessor e: %d", n2);
    return (0);
}