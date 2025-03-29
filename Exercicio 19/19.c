#include <stdio.h>

int main() {

    int n;

    printf("Digite um número inteiro positivo: ")
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        int potencia = 1; 

        for (int j = 0; j < i; j++) {

            potencia *= 2; 

        }

        printf("2^%d = %d\n", i, potencia); 
    }

    return 0;

}

