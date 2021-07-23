#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


char nome[5]; 

int main(void){
 
        setlocale(LC_ALL, "Portuguese");
 	 int i;
    char nome[5]; 

    for(i=0; i<=5; i++){
        printf("Informe o nome %d:\n", i+1);
        scanf("%s", nome[i]); 
    }

    for(i=0; i<=5; i++){
        printf("Aluno %d: %s\n", nome[i], i+1);
    }
    
}
