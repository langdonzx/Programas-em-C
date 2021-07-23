#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int i;
char nome[5][30];

int main(void){

    setlocale(LC_ALL, "Portuguese");

    for(i=0; i<=4; i++)
    {

        printf("Informe o nome %d:\n", i+1);
        scanf("%s", nome[i]); 

    }

    for(i=0; i<=4; i++){
    printf("Aluno:%s\n", nome[i], i+1); 
    }

return 0;
}
