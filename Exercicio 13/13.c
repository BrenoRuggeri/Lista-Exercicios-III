#include <stdio.h>


int main() {

    int numero, soma_digitos = 0;

    printf("Digite um número inteiro: ");

    scanf("%d", &numero);

    while (numero > 0) {

        int digito = numero % 10;

        soma_digitos += digito;

        numero /= 10;
    }

    printf("A soma dos dígitos é: %d\n", soma_digitos);


    return 0;
}