#include <stdio.h>
#include <locale.h>


int main()
{
        char operacao;
        float numero1, numero2;
		float soma, divisao, mult, sub;
		setlocale(LC_ALL,"Portuguese");

        printf("entre com a operação: \n");
        scanf("%c",&operacao);

        printf("entre com o primeiro número: \n");
        scanf("%f",&numero1);
        printf("entre com o segundo número: \n");
        scanf("%f",&numero2);

        switch( operacao )
        {
            case '+':
            	soma = (numero1 + numero2);
            	printf("o resultado é:%0.2f", soma);
                break;
            case '-':
            	sub = (numero1-numero2);
                printf("o resultado é:%0.2f",sub);
                break;
            case '*':
            	mult = (numero1*numero2);
                printf("o resultado é:%0.2f", mult);
                break;
            case '/':
            	divisao = (numero1/numero2);
                printf("o resultado é:%0.2f", divisao);
                break;
            default:
                printf("opção inválida");

        }
        		
}

