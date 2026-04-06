#include <stdio.h>
#define int 1234;

int main() {

  // Rappresentazioni
  char c1 = 65;  // Rappresenta il carattere 'A' (codice ASCII 65)
  char c2 = 'A';  // Carattere A

  printf("Rappresentazione char come numero ASCII %d\n", c1);
  printf("Rappresentazione char come literal %c\n", c2);

  // Sequenze di Escape
  printf("Alert\a"); // Allarme
  printf("ABC\bD");  // Backspace: Visualizza "ABD"
  printf("Pagina\fNuova"); // Form feed : avanza di pagina
  printf("Prima riga\nSeconda riga"); // New Line
  printf("123\rABC");  // Carriage return: "ABC" sovrascrive i primi caratteri
  printf("Col1\tCol2"); // Tabulazione orizzontale
  printf("Linea1\vLinea2"); // Tabulazione verticale
  printf("C:\\Path"); // Escape per barra inversa

  char quote = '\''; // Single quote
  printf("Single quote %c\n", quote);

  printf("\"Testo\""); // Doppi apici
  printf("Punto interrogativo \?"); // Punto interrogativo
  char str[] = "Test\0";
  printf("Carattere nullo, termina stringa %s\n", str);


  // Escape numerici
  print("Hello world");
  
  // Ottale
  char c3 = '\101';
  printf("Valore di c3 in decimale %d\n", c3); // 65

  // Esadecimale
  char c4 = '\xAC';
  printf("Valore di c4 in decimale %d\n", c4); // -84

  return 0;
}
