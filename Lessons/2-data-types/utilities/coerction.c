#include <stdio.h>

int main() {

  // Conversioni implicite
  int a = 10;
  int b = a; // Nessuna conversione necessaria
  printf("a: %d, b: %d\n", a, b);
  
  float x = 5.5;
  float y = x; // Nessuna conversione necessaria
  printf("x: %f, by: %f\n", x, y);
  
  
  // Type Promotion
  int i = 10;
  float j = i; // Promozione implicita a float
  printf("j = %f\n", j);

  
  // Type Demotion
  float n = 5.7;
  int m = n; // Retrocessione implicita a int
  printf("m = %d\n", m); // Perdita della parte frazionaria, perdita di dati
  

  // Conversioni esplicite
  int myInt = 5;
  double myDouble = 2.0;
  
  // Senza il type casting, myInt viene convertito in int e la divisione risulta in 2, perdiamo la parte decimale
  printf("Senza type casting = %f\n", myInt / myDouble);
  
  // Con l'operatore di type casting, myInt viene prima convertito in double, myDouble viene promosso a floating point, e la divisione risulta in 2.5
  printf("Con type casting = %f\n", (double) myInt / myDouble);
  
  return 0;
}
