#include <stdio.h>

int main() {

  typedef double PESO;

  PESO p = 75.3;

  printf("Variabile p di tipo PESO vale %f e ha dimensione %zu bytes", p, sizeof(p));

  return 0;
}