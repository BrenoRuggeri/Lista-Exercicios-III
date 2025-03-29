#include <stdio.h>

int main (){

    int n, i=1, somatorio = 0, quadrado;

    printf("Digite o valor de N: \n");
    scanf("%d",&n);

    for(i; i<=n; i++){

        quadrado = i * i;
        somatorio += (5 * quadrado + 2 * i + 8);

        printf("%d\n",somatorio);
    }
}