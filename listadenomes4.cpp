#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>


#include <stdio.h>
int main(void){
    
int pos, neg, nul;
    int vetor[10], i;
    int contador;
        
    for(i=0; i<10; i++){
        printf("Entre com o número %d\n", i + 1);
        scanf("%d",&vetor[i]);
    }
			
	printf("\nValores inseridos:\n"); 
             printf("[ ");
			 
    for(i=0; i<10; i++){
        printf("%d ", vetor[i]);
       
    }
	printf ("]");

for(i=0; i<10;i++){

    if (vetor[i]>0){
        pos++;
      
    }
    
    
    if (vetor[i]==0){
        nul++;
  
    
    }
    
 
    if (vetor[i]<0){
        neg++;

        }

    }

    		printf("\nValores positivos: \n", pos);
            printf("Valores nulos: \n", nul);
            printf("Valores negativos: \n", neg);


    return 0;
}
    




