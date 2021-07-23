#include <stdio.h>
//int main () {
//	float temperatura;
//	printf ("insira a temperatura: ");
//	scanf ("%d",&temperatura);
//	if (temperatura>0);
  //   		printf ("\n Hoje eta muito frio");{
	//else  (temperatura=15);
      //  {
        //	printf ("\n A temperatura esta agradavel");
        //}
     	//else if (temperatura == 25) ;  
          //   printf ("\n Hoje esta calor");
            // printf ("\n Voce deve estar no Polo Sul ou no Saara");
        // }
///	return(0);
///}}

int main ()
{
	float temperatura;
	
	printf ("\ninsira a temperatura: ");
	scanf ("%d",&temperatura);
	if (temperatura>0 && temperatura <15)
      	{
      		printf ("\nHoje esta muito frio");
      	}
      	
    		  else if (temperatura==25 && temperatura <35)
		  {
		  	printf("\n Hoje esta calor");	
		  }		  		  
	else 
       		printf ("\n Voce deve estar no Polo Sul ou no Saara");
    	else if (temperatura == 15 && temperatura<25)
      	{
      		printf("\n A temperatura esta agradavel");		
		  }
   	{
      	}
	return(0);
}
