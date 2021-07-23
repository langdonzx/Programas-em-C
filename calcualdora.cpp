#include <stdio.h>
#include <locale.h>

int main(void)
{
        float num1,num2;
        float soma, divisao, mult, sub;
        char oper;
        int resp;
			setlocale(LC_ALL,"Portuguese");
        do
        {

            printf("entre com a operação: \n");
    		scanf("%c",&oper);

            printf("entre com o primeiro número: \n");
            scanf("%f", &num1);
            printf("entre com o segundo número: \n");
            scanf("%f", &num2);



            switch( oper )
            {
                case '+':
                		soma = (num1 + num2);
                        printf("o resultado é: %0.2f\n", num1 + num2);
                        break;

                case '-':
                		sub = (num1-num2);
                        printf("o resultado é: %0.2f\n", num1 - num2);
                        break;

                case '*':
                		mult = (num1*num2);
                        printf("o resultado é: %0.2f\n", num1 * num2);
                        break;

                case '/':
                		divisao = (num1/num2);
                            printf("o resultado é: %0.2f\n", num1 / num2);
                        break;
			
                default:
                        if(num1 != 0 && oper != '0' && num2 != 0)
                            printf("opção inválida");
            }
						printf("Quer continuar? (1-SIM | 2-NÃO)");
						scanf ("%d", resp) ;	
        }while(resp == 1);

}
