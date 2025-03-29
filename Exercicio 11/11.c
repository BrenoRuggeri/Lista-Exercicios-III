#include <stdio.h>
#include <stdbool.h>

int main (){
        
    while(true){
        
        float nota, nota1, nota2, nota3, nota4, media;
        
        printf("Digite sua nota: \n");
        scanf("%f",&nota);
        
        printf("Digite sua nota2: \n");
        scanf("%f",&nota2);
        
        printf("Digite sua nota3: \n");
        scanf("%f",&nota3);
        
        printf("Digite sua nota4: \n");
        scanf("%f",&nota4);
        
        media = (nota+ nota1+nota2+nota3 + nota4)/5;
        
        printf("Sua media: %.2f\n",media);
        
    }
}