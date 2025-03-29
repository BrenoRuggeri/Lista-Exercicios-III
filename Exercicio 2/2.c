#include <stdio.h>
#include <math.h>

int main (){
    
    int x, i=2, divisor, soma = 0;
    
    printf("Digite: \n");
    scanf("%d",&x);
    
    for (i; i <=x; i++){ 
        
        int primo = 1;
    
        for(divisor=2; divisor <= sqrt(i); divisor ++){
            
            if(i % divisor == 0){
                
                primo = 0;
                break;    
            }
        }
        if (primo){
            soma += i;
        }
    }
    printf("A soma dos número primos até: %d é: %d\n",x,soma); 
    return 0;   
}
