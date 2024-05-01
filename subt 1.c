#include <stdio.h>
int main() {

  int sub, n1, n2;
  // não consegui colocar acentos no texto

  printf("Digite um numero:");
  scanf("%i", &n1);
  printf("Digite outro numero:");
  scanf("%i", &n2);
  sub = n1 - n2;
  printf ("O resultado da subtracao dos numeros %i e %i e: %i", n1, n2, sub);

return (0);
}
