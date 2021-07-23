//Programa de classificação dos triângulos
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float a,b,c;
    char q;

    printf("Digite o primeiro lado ");
    scanf("%i",&a);
    printf("Digite o segundo lado ");
    scanf("%i",&b);
    printf("Digite o terceiro lado ");
    scanf("%i",&c);
    if((a > b+c)||(b > a+c)||(c > a+b))
       printf("NAO REPRESENTA TRIANGULO\n");    
       else
       {
         if((a == b) && (a == c))
         printf("Triangulo Equilatero\n");
         else
         {
            if((a == b) || (a == c) || (b == c))
            printf("Tringulo Isosceles\n");
            else
            {  
                printf("Triangulo Escaleno\n");             
            }
         }
       }                                                                        
           
system("Pause");
}//fim            
