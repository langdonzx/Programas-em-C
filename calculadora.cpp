#include <stdio.h>
#include <locale.h>


int main()
{
        char operacao;
        float numero1, numero2;
		float soma, divisao, mult, sub;
		setlocale(LC_ALL,"Portuguese");

        printf("\nentre com a operação: ");
        scanf("%c",&operacao);

        printf("\nentre com o primeiro número: ");
        scanf("%f",&numero1);
        printf("\nentre com o segundo número: ");
        scanf("%f",&numero2);

        switch( operacao )
        {
            case '+':
            	soma = numero1 + numero2;
            	printf("\no resultado é:", soma);

                printf("%c%c %0.2f", numero1, numero2, (numero1 + numero2));
                break;
            case '-':
                printf("\n%c%cO resultado é:%0.2f", numero1, numero2, (numero1 - numero2));
                break;
            case '*':
                printf("\n%c%cO resultado é:%0.2f", numero1, numero2, (numero1 * numero2));
                break;
            case '/':
                printf("\n%c%cO resultado é:%0.2f", numero1, numero2, (numero1 / numero2));
                break;
            default:
                printf("\nopção inválida");

        }
        		
}

