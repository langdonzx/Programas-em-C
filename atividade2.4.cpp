#include<stdio.h>
#include<math.h>

int main(){
	
float a,b,c;

printf("Entre com o valor de b: ");
scanf("%f",&b);
printf("Entre com o valor de c: ");
scanf("%f",&c);
a=pow(b,2)+pow(c,2);
printf("Valor da Hipotenusa: %0.2f",sqrt(a));
}
