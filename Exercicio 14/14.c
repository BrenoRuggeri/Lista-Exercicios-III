#include <stdio.h>

int main (){

    int numero, i=2;

    printf("Digite um número: \n");
    scanf("%d",&numero);

    for (i; i<numero;i++){
        if (i%2 ==0){
            printf("%d\n",i);
        }
    }
}