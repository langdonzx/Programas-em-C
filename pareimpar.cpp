#include <stdio.h>
#include <locale.h>


int main(){

int a;
	setlocale(LC_ALL,"Portuguese");
	printf ("digite o n�mero \n");
    scanf ( "%d" , & a);
	a % 2 == 0 ? printf("o numero %d � par:", a) : printf("o numero %d � impar:", a);
    return 0;
}



