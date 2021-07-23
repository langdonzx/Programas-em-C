#include <stdio.h>
#include <locale.h>


int main(void){
		setlocale(LC_ALL,"Portuguese");
        char operacao;
        float numero1 = 0; 
        float numero2 = 0;
		int opcao,i;
       
	do{
       
        printf("\nentre com a operação: \n");
        scanf("%c",&operacao);
        
        printf("\nentre com o primeiro número: \n");
        scanf("%f",&numero1);
        
        printf("entre com o segundo número: \n");
        scanf("%f",&numero2);

        switch( operacao )
        {
            case '+':
            	printf("o resultado é: %0.2f", (numero1+numero2));
                break;
            case '-':
                printf("o resultado é: %0.2f",(numero1-numero2));
                break;
            case '*':
                printf("o resultado é: %0.2f", (numero1*numero2));
                break;
            case '/':
                printf("o resultado é: %0.2f", (numero1/numero2));
                break;
            default:
                printf("opção inválida");
                
        }
        
        	printf("\nQuer continuar? (1-SIM | 2-NÃO)\n");
        	scanf("%d", &opcao);
              
        
        }while(opcao ==1);
        	return 0;	

}
