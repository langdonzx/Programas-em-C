#include<stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void)

{
	
	setlocale(LC_ALL,"Portuguese");

  int a=0,b=0;
  char resp;
  
  do
  {
    printf("a: \n");
    scanf("%f",&a);
    printf("b: \n");
    scanf("%f",&b);
     
	 
	 if ( a > b){
    printf("o valor de ""a"" é maior do que de ""b"" \n");
}	
	
    printf("Digite um novo valor de 'b' \n");
    scanf("%f",&b);

	   if ( b > a){
    printf("o valor de 'b' é maior do que de 'a' \n");
}

  }while(resp);
  printf("comando fora do bloco while");
  return 0;
}
