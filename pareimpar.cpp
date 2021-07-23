#include <stdio.h>
#include <locale.h>


int main(){

int a;
	setlocale(LC_ALL,"Portuguese");
	printf ("digite o número \n");
    scanf ( "%d" , & a);
	a % 2 == 0 ? printf("o numero %d é par:", a) : printf("o numero %d é impar:", a);
    return 0;
}



