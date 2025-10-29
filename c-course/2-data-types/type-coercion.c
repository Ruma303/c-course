#include <stdio.h>

int main() {

    // No conversion
    /*
    int a = 10;
    int b = a; // Nessuna conversione necessaria

    float x = 5.5;
    float y = x; // Nessuna conversione necessaria
    printf("%d\n%d\n%g\n%g\n", a, b, x, y);
    */

    // Type Promotion
    /*
    int a = 5;
    float b = a; // a viene promosso implicitamente in float
    printf("b = %f\n", b); // b = 5.000000
    */

    // Type Demotion
    /*
    float a = 3.14;
    int b = a; // a viene retrocesso implicitamente in int
    printf("b = %d\n", b); // b = 3
    */

    // Conversioni tra signed e unsigned
    // Da signed a unsigned
    /*
    int a = -3;
    unsigned int b = a;
    printf("%u\n", b); // 4294967293
    */

    // Da unsigned a signed
    /*
    unsigned int a = 3000000000;
    int b = a;
    printf("%d\n", b); // Stampa un numero errato
    */

    // Overflow
    /*
    int x = 300;
    unsigned char y = x;
    printf("%u", y); // 44
    */
    return 0;
}