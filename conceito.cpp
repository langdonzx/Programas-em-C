#include <stdio.h>
#include <locale.h>


int main()
{
        char operacao;
        float numero1, numero2;
		float soma, divisao, mult, sub;
		setlocale(LC_ALL,"Portuguese");

        printf("entre com a opera��o: \n");
        scanf("%c",&operacao);

        printf("entre com o primeiro n�mero: \n");
        scanf("%f",&numero1);
        printf("entre com o segundo n�mero: \n");
        scanf("%f",&numero2);

        switch( operacao )
        {
            case '+':
            	soma = (numero1 + numero2);
            	printf("o resultado �:%0.2f", soma);
                break;
            case '-':
            	sub = (numero1-numero2);
                printf("o resultado �:%0.2f",sub);
                break;
            case '*':
            	mult = (numero1*numero2);
                printf("o resultado �:%0.2f", mult);
                break;
            case '/':
            	divisao = (numero1/numero2);
                printf("o resultado �:%0.2f", divisao);
                break;
            default:
                printf("op��o inv�lida");

        }
        		
}

