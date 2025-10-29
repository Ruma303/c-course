#include <stdio.h>
#include <limits.h>

int main(){

    //% sizeof()
    printf("Size and range of char type:\n");
    printf("Size: %zu bytes\n", sizeof(char));
    printf("Min (Signed): %d\n", CHAR_MIN);
    printf("Max (Signed): %d\n", CHAR_MAX);
    printf("Max (Unsigned): %u\n", UCHAR_MAX);
    printf("\n");

    printf("Size and range of short int type:\n");
    printf("Size: %zu bytes\n", sizeof(short int));
    printf("Min (Signed): %d\n", SHRT_MIN);
    printf("Max (Signed): %d\n", SHRT_MAX);
    printf("Max (Unsigned): %u\n", USHRT_MAX);
    printf("\n");

    printf("Size and range of int type:\n");
    printf("Size: %zu bytes\n", sizeof(int));
    printf("Min (Signed): %d\n", INT_MIN);
    printf("Max (Signed): %d\n", INT_MAX);
    printf("Max (Unsigned): %u\n", UINT_MAX);
    printf("\n");

    printf("Size and range of long int type:\n");
    printf("Size: %zu bytes\n", sizeof(long int));
    printf("Min (Signed): %ld\n", LONG_MIN);
    printf("Max (Signed): %ld\n", LONG_MAX);
    printf("Max (Unsigned): %lu\n", ULONG_MAX);
    printf("\n");

    printf("Size and range of long long int type:\n");
    printf("Size: %zu bytes\n", sizeof(long long int));
    printf("Min (Signed): %lld\n", LLONG_MIN);
    printf("Max (Signed): %lld\n", LLONG_MAX);
    printf("Max (Unsigned): %llu\n", ULLONG_MAX);
    printf("\n");


    //% Esempi sintassi

    /* //* Esempio 1: Dichiarazione e assegnazione di int
    int num = 100; // dichiarazione e assegnazione di una variabile int
    printf("Il valore di num è: %d\n", num); // stampa la variabile

    //* Esempio 2: Dichiarazione e assegnazione di char
    char ch = 'A'; // dichiarazione e assegnazione di una variabile char
    printf("Il valore di ch è: %c\n", ch); // stampa la variabile

    //* Esempio 3: Dichiarazione e assegnazione di short
    short num = 30000; // dichiarazione e assegnazione di una variabile short
    printf("Il valore di num è: %hd\n", num); // stampa la variabile

    //* Esempio 4: Dichiarazione e assegnazione di long
    long num = 1000000L; // dichiarazione e assegnazione di una variabile long
    printf("Il valore di num è: %ld\n", num); // stampa la variabile

    //* Esempio 5: Dichiarazione e assegnazione di long long
    long long num = 10000000000LL; // dichiarazione e assegnazione di una variabile long long
    printf("Il valore di num è: %lld\n", num); // stampa la variabile

    //* Esempio 6: Dichiarazione e assegnazione di unsigned int
    unsigned int num = 4000000000U; // dichiarazione e assegnazione di una variabile unsigned int
    printf("Il valore di num è: %u\n", num); // stampa la variabile
 */
    return 0;
}
