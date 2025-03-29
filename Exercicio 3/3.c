#include <stdio.h>

int main (){

    int N, A = 0, B = 1, C, i=2;

    printf("Digite o valor de N: \n");
    scanf("%d",&N);

    for(i;i<N; i++){

        C = A + B;

        printf("%d\n",C);

        A = B;
        B = C;
    }
}