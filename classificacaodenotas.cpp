#include <stdio.h>

int main ()
{
	float nota;
	
	printf ("digite sua nota \n");
	scanf ("%f",&nota);
	if (nota>7)
      	{
      		printf ("\n passou direto com a nota %0.2f", nota);
      	}
      	
      	else if (nota == 4 && nota == 7)
      	{
      		printf("\n tem direito de fazer uma prova de recuperação a nota");		
		  }
		  else if (nota<4)
		  {
		  	printf("\n reprovado direto com a nota %0.2f",nota);	
		  }		  		  
	return(0);
}
