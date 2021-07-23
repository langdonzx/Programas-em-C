#include <stdio.h>
#include <locale.h>


int main(void)
{
  char  v_string[30];
  char caract[30];
  int carcte;
    
  printf("Informe a string:\n");
  scanf("%s", v_string);
  printf("Informe o caractere a ser procurado:\n");
  scanf("%s", caract);
  printf("\nA quantidade do caractere \"e\"encontrado na palavra\"Semestre\" foi:\n%s",  caract, carcte);
  
  return 0;
}
