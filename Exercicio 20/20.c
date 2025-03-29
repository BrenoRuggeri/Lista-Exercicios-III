#include <stdio.h>

int main() {

    int n, i, soma = 0;

    printf("Digite o número de elementos na sequência: ");

    scanf("%d", &n);

    if (n <= 0) {

        printf("Por favor, insira um número inteiro positivo.\n");

        return 1; 

    }

    for (i = 0; i < n; i++) {

        int elemento;

        printf("Digite o elemento %d: ", i + 1);

        scanf("%d", &elemento);

        soma += elemento; 

    }

    printf("A soma da sequência é: %d\n", soma);
    return 0;
}