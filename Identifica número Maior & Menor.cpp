#include<stdio.h>
#include<stdlib.h>
int main()
{
int nro,maior=0,menor=0;
printf("digite os valores:");
scanf("%d",&nro);
maior=nro;
menor=nro;
while(nro!=9){
if(nro>0){
if(nro>maior)maior=nro;
if(nro<menor)menor=nro;}
else
printf("Valor invalido.\n");
printf("digite os valores:");
scanf("%d",&nro);
}

printf("O maior valor é:%d\n",maior);
printf("O menor valor é:%d\n",menor);
system("Pause");
}
