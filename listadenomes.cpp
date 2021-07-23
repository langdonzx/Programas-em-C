#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct todos_dados
    {

        char nome[5][30];
    };
struct todos_dados aluno;
int main() {
	
	
	  setlocale(LC_ALL, "Portuguese");

	char nome;
    int i = 0;

   
    for(;i < 5;i++){
        printf("Informe o nome %d:%s", aluno.nome[i], i + 1);
        scanf("%s",aluno.nome[i]);

    }

    for(i = 0;i < 5;i++){
        printf("\nAluno:%s",aluno.nome[i],i+1);
    }
    
}
