#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"portuguese");



float notasAlunos  [5][3] = {0};
      float mediaAlunos [2] = {0};
      float media = 0;
      int i = 0;
      int alunos;

        for (int notas = 0; notas < 4; ++notas){
        	printf("Entre com a nota da P%i do aluno n:\n", i+1);
            scanf("%f", &notasAlunos [alunos] [notas]);
             media += notasAlunos [alunos] [notas];

        } printf("\nInforme o nome %d: ", i+1, nome[i]);
        scanf("%s",nome[i]); 
        printf(nome[i]);
    }
        mediaAlunos [alunos] = media / 2;
        media=0;
        printf("Insira as 4 notas do aluno %i:\n", alunos + 2);
    }

            for (int alunos = 0; alunos < 4; ++alunos){
                printf("Notas do aluno %i é %2.f\n", alunos +1, mediaAlunos [alunos]);
            }










    return 0;
}
