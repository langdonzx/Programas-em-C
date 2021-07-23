#include<stdio.h>
#include<conio.h>

int main (void )
{
  char matriznomes[5][40],i, j;
  
  
  for(i=0; i<5; i++){
        printf("Informe o nome n: %s\n", i + 1);
        scanf("%s",&matriznomes[i]);
    }
  
  
  
  for ( i=0; i<3; i++ )
    for ( j=0; j<5; j++ )
    {
      printf ("\nElemento[%s][%s] = ", i, j);
      scanf ("%s", &matriznomes[ i ][ j ]);
    }
    
    for ( j=0; j<5; j++ )
    {
      printf ("\nAluno[%s][%s] = ", i, j);
      scanf ("%s", &matriznomes[ i ][ j ]);
    }
}

