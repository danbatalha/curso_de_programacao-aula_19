#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x;

  printf("Digite um número qualquer: ");
  scanf("%d", &x);
  //x = x + 1; (soma mais um)
  //x++; (soma mais um)
  x--; //(diminui um)
  printf("O número final é: %d\n", x);
  return 0;
}