#include <stdio.h>
#include <stdbool.h>

int main (){

    while(true){

        int num, num1, num2;

        printf("Digite o primeiro número: \n");
        scanf("%d",&num);

        printf("Digite o segundo número: \n");
        scanf("%d",&num1);

        printf("Digite o terceiro número: \n");
        scanf("%d",&num2);

        if(num > num1 && num > num2){
            printf("O valor maior foi: %d\n",num);
        }else if (num1 > num && num1 > num2) {
            printf("O valor maior foi: %d\n",num1);
        }else if (num2 > num && num2 > num1){
            printf("O valor maior foi: %d\n",num2);
        }else {
            break;
        }
    }
}
