#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){   
float peso , altura, imc;
printf("Entre com a altura em metros: \n");
scanf ("%f",&peso);
printf("Entre com o peso em quilogramas: \n");
scanf ("%f",&altura);
imc = peso / (altura*altura); 

if (imc <= 18.5 ){
        printf("Peso abaixo do normal\n");   
}else{       
if(imc = 18.5 && imc<=25){
            printf("Peso normal.\n");       
}else{       
if(imc >= 25 && imc<30){
            printf("Peso acima do normal.\n");       
}else{       
if(imc >= 30){
            printf("Peso excessivo.\n");       
}      
 } } } 
   printf("\n IMC de %0.3f,",imc);

 
    return 0;
}

