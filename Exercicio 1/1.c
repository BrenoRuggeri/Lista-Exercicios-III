#include <stdio.h>

int main (){

    double ladoA, ladoB, ladoC;

    printf("Digite o valor do lado A: \n");
    scanf("%lf",&ladoA);

    printf("Digite o valor do lado B: \n");
    scanf("%lf",&ladoB);

    printf("Digite o valor do lado C: \n");
    scanf("%lf",&ladoC);

    // condição que verifica se é possivel formar um triângulo

    if(ladoA + ladoB > ladoC && ladoB + ladoC > ladoA && ladoA + ladoC > ladoB){
        printf("É possivel formar um triângulo com esses valores \n");

        if(ladoA == ladoB && ladoB == ladoC && ladoC == ladoA){
            printf("É um triângulo Equilátero\n");
        }else if (ladoA == ladoB || ladoB == ladoC || ladoC == ladoA){
            printf("É um triângulo Isósceles\n");
        }else {
            printf("É um triângulo Escaleno\n");
        }
    }else{
        printf("Não é possivel formar um triângulo com esses valores\n");
    }
}