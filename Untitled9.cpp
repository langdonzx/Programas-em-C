#include <stdio.h>   
#include <stdlib.h>  
#include <locale.h>

float recebe(float altura,char sexo);
int main(void)
{
	setlocale(LC_ALL,"Portuguese");
    float altura,ideal;
    char sexo;
     system("cls");
    printf("Entre com o sexo (F ou M): \n");
    scanf("%c", &sexo);   
	    printf("Entre com a altura em metros: \n");
    scanf("%f", &altura);
    printf("\n");  

         if(sexo=='m')
           {
             ideal=(72.7 * altura )- 58;
             printf("\O peso ideal Masculino com altura de %0.2f", altura);
			 printf("m %0.2f é: ",ideal);
			 printf("kg");
             }
             else

             if(sexo=='f')
               {
                ideal=(62.1 * altura) - 44.7;
                printf("\O peso ideal Feminino com altura de%0.2f",altura);
                printf("m %0.2f é: ",ideal);
			 printf("kg");
    
                }

    }

