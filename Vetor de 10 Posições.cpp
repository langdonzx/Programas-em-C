#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){

    int vetor[10], i;

    for(i=0; i<10; i++){
        printf("Entre com o número %d\n", i + 1);
        scanf("%d",&vetor[i]);
    }
		  for(i=0; i<10; i++){
        printf("Valores inseridos:\n");
        printf("[%d ]", vetor[i]);

    return 0;
}
}
