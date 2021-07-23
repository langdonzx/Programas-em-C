#include <stdio.h>
#include <locale.h>
#include <stdlib.h>



int main(void) {
    float a, b, c;

	setlocale(LC_ALL,"Portuguese");


    printf("Digite o primeiro lado: \n");
    scanf("%f",&a);
   
    printf("Digite o segundo lado: \n");
	scanf("%f",&b);
   
    printf("Digite o terceiro lado: \n");
    scanf("%f",&c);
   

    if(a + b > c && a + c > b && b + c > a){
        if(a == b && a == c)
            printf("Triângulo equilátero");
        else
            if(a == b || a == c || b == c)
                printf("Triângulo isósceles");
            else
                printf("Triângulo escaleno");
    }
    
}


