#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <locale.h>



int main() {
	
	setlocale(LC_ALL,"Portuguese");
	float a, b, c;
	float x1, x2, delta;

	printf("digite sua a \n");
	scanf("%f", & a);
	
	printf("digite sua b \n");
	scanf("%f", & b);
	
	printf("digite sua c \n");
	scanf("%f", & c);
	

 
    delta = b*b - 4 * a * c;
 
    if(delta < 0)
    {
        printf("delta menor que zero - raízes complexas\n %f  ");
    }
    else
    {
        if(delta == 0)
        {
            x1 = -b / (2 * a);
            printf("\ndelta maior ou igual a zero - raízes reais %f");
        }
        else
        {
            x1 = (-b - sqrt(delta)) / (2 * a);
            x2 = (-b + sqrt(delta)) / (2 * a);
        }
        
			printf("\ndelta maior ou igual a zero - raízes reais");
            printf("\ndelta  %0.2f \nx1   %0.2f\nx2  %0.2f\n",delta,x1,x2);
        }
    
 
    system("pause");
 
    return 0;
}















