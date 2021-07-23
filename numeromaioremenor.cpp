#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int opcao;
	float n1, n2,media;
	char op;
	
    do {
        //if(opcao > 0 && opcao < 5){
            printf("insira n1:\nDigite a primeira nota \n");
            scanf("%2.f",&n1);
            printf("Digite a primeira nota \n");
            scanf("%2.f",n2);
            
            media = n1/n2;
        }
        if (media=9.0 && media =10 )	{
		}
		
        	printf("Média: %0.2f", media);
			printf("Resultado: A");
            printf("Aprovado");
		
		{
		}
			
			else if(media = 7.5 && media <9.0) {
			printf("Resultado: b");
            printf("Aprovado");
            break;
        }
            printf("Multiplicacao: %0.2f\n", n1 * n2);
            break;
            while(n2 == 0) {
                printf("Nao existe divisao por zero!\nDigite outro valor: ");
                scanf("%d", & n2);
            }
            printf("Divisao: %d\n", n1 / n2);
            break;
        default:
            printf("tecla inválida");
        }
    } while(opcao != 0);
}
