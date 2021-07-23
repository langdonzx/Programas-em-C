#include<stdio.h>
#include <locale.h>
#include <stdlib.h>
#include<stdio.h>


int main(void)

{
	
	setlocale(LC_ALL,"Portuguese");

  int a = 1; 
  int maior = 0; 
  int menor = 0; 
  int soma = 0;


do{
		printf("a: \n");
		scanf("%f", &a);
	if(a > 0){
			if (a > maior){maior = a;}
			if (menor == 0){menor = a;}else if(a < menor){menor = a;}
			printf("O valor de a é: \n",maior);
	}
	}while(-100);
	system("Pause");
  printf("comando fora do bloco while");
  return 0;
}
