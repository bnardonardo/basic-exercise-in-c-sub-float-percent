#include <stdio.h>
int main (){
   // var
   float valor, desc, total;//valor c desconto
   // entradas
   printf ("Valor:");
   scanf("%f", &valor);

   //process
   desc = (valor * 15)/100;
   total = (valor - desc);

   printf("Valor informado: %f\n", valor);
   printf("Desconto 15%" "\n");
   printf("Valor a pagar: %f", total);

   return(0);
}
