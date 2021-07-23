#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
	
	int val_1, val_2,val_3;
	int menor, maior;
	
		printf("digite o valor 1: \n");
        scanf("%f",&val_1);
        
        printf("digite o valor 1: \n");
        scanf("%d",&val_2);
        
        printf("digite o valor 1: \n");
        scanf("%d",&val_3);
    
    if(val_1 < val_2){
        if(val_1 < val_3)
            menor = val_1;
        else
            menor = val_3;
    }
    else{
        if(val_2 < val_3)
            menor = val_2;
        else
            menor = val_3;
    }

    if(val_1 > val_2){
        if(val_1 > val_3)
            maior = val_1;
        else
            maior = val_3;
    }
    else{
        if(val_2 > val_3)
            maior = val_2;
        else
            maior = val_3;
    }

    printf("O maior valor é: %d.\nO menor valor é:%d.\n", maior, menor);
}
        


