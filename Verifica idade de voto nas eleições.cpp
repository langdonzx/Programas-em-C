#include <stdio.h>
#include <locale.h>


int  main (void) {
    float idade = 0 ;
	setlocale(LC_ALL,"Portuguese");

    printf ( "Digite idade: " );
    scanf ( " % d " , & idade);

    if (idade> 18 && idade <= 65 ) {
        printf (" Eleitor obrigatorio \ n " );
    }
    else  if (idade>= 16 && idade <= 18 || idade> 65 ) {
        printf ( " Eleitor facultativo \ n " );
    }
    else
    {
        printf ( "Você ainda não está habilitado a votar" );
    }

    return  0 ;
}
