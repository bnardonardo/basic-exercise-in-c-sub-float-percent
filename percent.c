#include <stdio.h>
#include <locale.h>
int main (){
    //definindo idioma
    setlocale(LC_ALL, "Portuguese");
   // var
   int num, div, resto, res;
   // entradas
   printf ("Numero a ser dividido:");
   scanf("%i", &num);
   printf("Divisor:");
   scanf("%i", &div);

   //process
   resto = num % div; // mod
   res = num / div;
   // saida
   printf("O resto deu: %i\n", resto);
   printf("O resultado deu: %i", res);
   return(0);
}
