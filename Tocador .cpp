#include<stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");

 int tecla;

				printf("entre com a tecla: \n");
				scanf("%d", &tecla);
				
 switch (tecla)
{
   case 1:
     printf("Tocando...");
   break;

   case 2:
     printf("Parado.");
   break;
   
   case 3:
     printf("Aguardando..");
   break;
   
   case 4:
   	printf ("Retrocedendo...");
   
   
   default:
      printf("tecla inválida");
}

}
