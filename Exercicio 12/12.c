#include <stdio.h>

int main (){
        
    int tamanhoLista = 5, i;
    
    while(i<tamanhoLista){
        
        int num, num1,num2,num3,num4;
        
        printf("Digite os numeros da lista: \n");
        scanf("%d",&num);
        scanf("%d",&num1);
        scanf("%d",&num2);
        scanf("%d",&num3);
        scanf("%d",&num4);
        
        if(num > num1 && num>2 && num3 && num4){
            printf("O maior número foi: %d\n",num);
        }else if (num1> num && num1 > num2 && num1 > num3 && num1 > num4){
            printf("O maior número foi: %d\n",num1);
        }else if (num2> num && num2 > num1 && num2 > num3 && num2 > num4){
            printf("O maior número foi: %d\n",num2);
        }else if (num3> num && num3 > num1 && num3 > num2 && num3 > num4){
            printf("O maior número foi: %d\n",num3);
        }else {
            printf("O maior número foi: %d\n",num4);
        }
    }       
}