#include <stdio.h>
#include <locale.h>

int main(void)
{
        float num1,num2;
        char oper;
        int resp;
			setlocale(LC_ALL,"Portuguese");
        do
        {

            printf("entre com a opera��o: \n");
            printf("+ - soma\n");
            printf("- - subtracao\n");
            printf("* - multiplicao\n");
            printf("/ - divisao\n");
    		scanf("%c",&oper);

            printf("entre com o primeiro n�mero: \n");
            scanf("%f", &num1);
            printf("entre com o segundo n�mero: \n");
            scanf("%f", &num2);

        


            switch( oper )
            {
                case '+':
                        printf("o resultado �: %.2f\n\n", num1 + num2);
                        break;

                case '-':
                        printf("o resultado �: %.2f\n\n", num1 - num2);
                        break;

                case '*':
                        printf("o resultado �: %.2f\n\n", num1 * num2);
                        break;

                case '/':
                        if(num2 != 0)
                            printf("o resultado �: %.2f\n\n", num1 / num2);
                        break;
			
                default:
                        if(num1 != 0 && oper != '0' && num2 != 0)
                            printf("op��o inv�lida");
            }
						printf("Quer continuar? (1-SIM | 2-N�O");
						scanf ("%d", resp) ;	
        }while(resp != 2);

}
