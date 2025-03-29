#include <stdio.h>

int main (){

    int num, num1,num2, num3, num4, num5, num6, num7, num8, num9, loopmedia = 20, media;

    for (int i=0; i < loopmedia; i++){

        printf("Digite a nota 1: \n");
        scanf("%d",&num);

        printf("Digite a nota 2: \n");
        scanf("%d",&num1);

        printf("Digite a nota 3: \n");
        scanf("%d",&num2);

        printf("Digite a nota 4: \n");
        scanf("%d",&num3);

        printf("Digite a nota 5: \n");
        scanf("%d",&num4);

        printf("Digite a nota 6: \n");
        scanf("%d",&num5);

        printf("Digite a nota 7: \n");
        scanf("%d",&num6);

        printf("Digite a nota 8: \n");
        scanf("%d",&num7);

        printf("Digite a nota 9: \n");
        scanf("%d",&num8);

        printf("Digite a nota 10: \n");
        scanf("%d",&num9);

        media = (num+num1+num2+num3+num4+num5+num6+num7+num8+num9)/10;
        
        loopmedia--;

        printf("Sua média é: %d e ainda restam %d calcúlos\n ",media,loopmedia);

    }
}