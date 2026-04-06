#include <stdio.h>

int main() {
  
  // Aritmetici
  
  int num1 = 7, num2 = 3;
  int sum = num1 + num2;  // 10
  int div = num1 / num2;  // 2 (divisione intera)
  int rem = num1 % num2;  // 1
  
  // Pre e post incremento
  int a = 5, b;
	b = ++a; // a=6, b=6
	printf("a: %d, b: %d\n", a, b);
	b = a--; // b=6, a=5
	printf("a: %d, b: %d\n", a, b);
	
	// Esempio con espressioni
	int x = 10;
	int y = 5 + ++x;
	printf("y: %d\n", y); // 16: x è già stata incrementata a 11, poi sommata a 10
	
	int w = 10;
	int z = 5 + w++;
	printf("z: %d\n", z); // 15: w viene prima assegnata (quando ancora vale 10), poi incrementata
  
  return 0;
}