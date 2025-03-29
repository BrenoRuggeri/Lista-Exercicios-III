#include <stdio.h>

int main (){

    int tentativas=10, advinhaNumero, numero = 42;

    for(int i = 1; i<tentativas; i++){

        printf("Digite um número: \n");
        scanf("%d",&advinhaNumero);

        if(advinhaNumero == numero){
            printf("Parabéns, você acertou!\n");
            break;
        }else{

            tentativas--;
            printf("Continue tentando, ainda restam %d tentativas\n",tentativas);
        }
    }
}