#include <stdio.h>

int main () {

    int numero = 42, adivinhaNumero;

    while(numero != adivinhaNumero){
        printf("Digite um número: \n");
        scanf("%d",&adivinhaNumero);

        if (adivinhaNumero == numero){
            printf("Parabéns, você acertou !\n");
            break;
        }else{
            printf("Continue tentando !\n");
        }
    }
}