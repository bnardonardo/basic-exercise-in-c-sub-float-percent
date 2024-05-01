#include <stdio.h>

int main() {
   float media, n1, n2;

   printf ("Digite a nota 1:");
   scanf("%f", &n1);
   printf ("Digite a nota 2:");
   scanf("%f", &n2);
   media = (n1 + n2) / 2;  // = = <- recebe
   printf("A media foi: %f", media);


return (0);
}
