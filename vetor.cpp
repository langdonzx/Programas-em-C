#include <locale.h>


int main() {
   long Vetor[100];
   long I, N, Menor, Ordenadas, Temp;

   printf("N:"); scanf("%d", &N);

   for (I = 0; I < N; I++)
      scanf("%d", &Vetor[I]);

   Ordenadas = -1;

   do {
      Ordenadas++;

      Menor = Ordenadas;

      for (I = Ordenadas + 1; I < N; I++)
         if (Vetor[I] < Vetor[Menor])
            Menor = I;

      Temp = Vetor[Ordenadas];
      Vetor[Ordenadas] = Vetor[Menor];
      Vetor[Menor] = Temp;
   }
   while (Ordenadas < N);

   for (I = 0; I < N; I++)
      printf("%d\n", Vetor[I]);
}
