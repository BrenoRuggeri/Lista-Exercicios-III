#include <stdio.h>

int main() {
    int i = 1, soma = 0;

    while (i <= 100) { 
        if (i % 2 == 0) { 
            soma += i;
        }
        i++; 
    }
    printf("Soma dos números pares de 1 a 100 é: %d\n", soma);
    return 0;
}
