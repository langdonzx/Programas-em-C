#include <stdio.h>
using namespace std;


int main() {
float altura, base, area,perimetro;
 
    printf("Entre com a base:"); scanf("%f", & base);
    printf("Entre com a altura:"); scanf("%f", & altura);
 
    area = altura * base;
    
    perimetro = (base * 2) + (altura * 2);
 
    printf("Area: %f", area);
    printf("|" "Perimetro: %f ", perimetro);
   
    return 0;
}




