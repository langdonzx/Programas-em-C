#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int  main (void) {
    float n1; 

	float media;
	//media = n1 + n2 
	setlocale(LC_ALL,"Portuguese");

    printf ("Digite a primeira nota \n" );
    scanf ("%f",& n1);   


    if (media >= 9 && media <= 10 ) {
    	printf ("Faixa de nota: 9 a 10 ");
        printf ("\nAprovado");
    }
    if(media >=7.5 && media <9.00){
    	printf ("Media: %0.2f", media);
    	printf ("\nResultado: B");
        printf ("\nAprovado");
	}
    
    else if (media <= 6.00 && media <7.0 ) {
    	printf ("Media: %0.2f", media);
        printf ("\nResultado: C");
        printf ("\nAprovado");
    }
    else if (media == 0.0 && media <6.0)
    {
	//	media = n1 + n2 / 2;
		printf ("Media: %0.2f", media);
        printf ("\nResultado: R");
        printf ("\nReprovado");
    }
	else if (media > 10.00)
    {
    //	media = n1 + n2 / 2;
        printf ("Valor de nota inválida");
    }

    return  0 ;
}
