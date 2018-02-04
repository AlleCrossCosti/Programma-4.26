#include <stdio.h>

int main () {
   
   int a;
   
   printf("Inserisci un numero: ");
   scanf("%d", &a);
   
   a = a % 2;
   
   if(a == 0) printf("PARI");else printf("DISPARI");
   
   return 0;
   
   }
