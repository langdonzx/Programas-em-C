#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <locale.h>

int main ()
{
	float n1, n2,media;
	
	printf ("Digite a primeira nota \n");
	scanf ("%f",&n1);
	printf ("Digite a segunda nota \n");
	scanf ("%f",&n2);
	
	media = n1+n2/2;
	scanf ("%f",&media);
	
	if (media>=9.0)
      	{
      		printf ("Média: %0.2f",media);
      		scanf ("%0.2f",&media);
      		printf ("Resultado: A");
      		printf ("Aprovado");
      	}
      	
      	else if (media == 4 && media == 7)
      	{
      		printf("\n tem direito de fazer uma prova de recuperação a nota");		
		  }
		  else if (media<4)
		  {
		  	printf("\n reprovado direto com a nota %0.2f",media);	
		  }		  		  
	return(0);
}
