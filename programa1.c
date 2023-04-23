#include <stdio.h>

void valor (int,int);

int main(){

    int a, b;

    a = 10;
    b = 20;

    
    printf("a e b antes da chamada da função: %d %d\n\n",a ,b);
    valor(a,b);
    //será impresso valor de a e b
    printf("a e b depois da chamada da função: %d %d\n\n",a ,b);

return(0);
}

//para imprimir x e y necessario colocar printf dentro da função, 
//o que acontece na função termina dentro dela.
void valor ( int x, int y){
    x = 50;
    y = 70;

}