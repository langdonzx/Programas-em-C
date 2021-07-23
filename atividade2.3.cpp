#include <math.h>
#include <stdio.h>


int main(void) {
    float r,a,p;
    const float pi= 3.14159;
    
    printf("Entre com o raio: ");
    scanf("%f", &r);
    
    a = pi*pow(r,2);
    p = 2*pi*r;

    printf("Area: %2f",a);
    printf(" | Perimetro: %2f",p);

    return 0;

}


