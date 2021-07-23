#include <stdio.h>
#include <stdlib.h>
int main(){   
float peso , altura, imc;
printf("Entre com a altura em metros: \n");
scanf ("%f",&altura);
printf("Entre com o peso em quilogramas: \n");
scanf ("%f",&peso);
imc = peso / (altura*altura); 

	printf("IMC é: %0.3f.",imc);
  
if (imc <=18.5 ){
        printf(" Peso abaixo do normal.\n");   
}else{       
if(imc >= 18.5 && imc<25){
            printf(" Peso normal.\n");       
}else{       
if(imc >= 25 && imc<30){
            printf("Peso acima do normal.\n");       
}else{       
if(imc >= 30 && imc<=40){
            printf(" Peso excessivo.\n");       
}else{       
if (imc>40){
            printf("");
 } } } }  

return 0;
}}
