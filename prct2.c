#include <stdio.h>
#include <locale.h>
int main (){

    //definindo idioma
    setlocale(LC_ALL, "Portuguese");

   // var
   float valor, ac, total;
   int prct;

   // entradas
   printf ("Insira um valor:");
   scanf("%f", &valor);
   printf("Insira a porcentagem acrescida:");
   scanf("%i", &prct);

   //process
   ac = (valor * prct)/100;
   total = valor + ac;

   // saida
   printf("Valor inicial %f\n", valor);
   printf("Percentual de acréscimo: %i\n", prct);
   printf("Valor a pagar: %f", total);
   return(0);
}
