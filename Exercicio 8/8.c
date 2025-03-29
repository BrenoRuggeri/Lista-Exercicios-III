#include <stdio.h>

int main (){

    int i, x;

    printf("Digite um número: \n");
    scanf("%d",&x);

    while(i<x){
        i++;
        printf("%d\n",i);
    }
}