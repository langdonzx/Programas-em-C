#include <stdio.h>
#include <locale.h>


int main()
{
        char operacao;
        float numero1, numero2;
		float soma, divisao, mult, sub;
		setlocale(LC_ALL,"Portuguese");

        printf("\nentre com a opera��o: ");
        scanf("%c",&operacao);

        printf("\nentre com o primeiro n�mero: ");
        scanf("%f",&numero1);
        printf("\nentre com o segundo n�mero: ");
        scanf("%f",&numero2);

        switch( operacao )
        {
            case '+':
            	soma = numero1 + numero2;
            	printf("\no resultado �:", soma);

                printf("%c%c %0.2f", numero1, numero2, (numero1 + numero2));
                break;
            case '-':
                printf("\n%c%cO resultado �:%0.2f", numero1, numero2, (numero1 - numero2));
                break;
            case '*':
                printf("\n%c%cO resultado �:%0.2f", numero1, numero2, (numero1 * numero2));
                break;
            case '/':
                printf("\n%c%cO resultado �:%0.2f", numero1, numero2, (numero1 / numero2));
                break;
            default:
                printf("\nop��o inv�lida");

        }
        		
}

