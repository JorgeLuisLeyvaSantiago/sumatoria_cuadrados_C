#include <stdio.h>

int main() {
   int n, i, sum = 0;
   printf("Ingrese un numero entero positivo: ");
   scanf("%d", &n);
   
   for (i = 1; i <= n; i++) {
      sum += i * i;
   }
   
   printf("La sumatoria de los cuadrados de 1 hasta %d es: %d\n", n, sum);
   return 0;
}
