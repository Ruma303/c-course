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

    /* // Inizializzazione di una variabile int
    int int_num = 100;
    printf("Il valore di int_num è: %d\n", int_num);

    // Inizializzazione di una variabile char
    char char_num = 'A';
    printf("Il valore di char_num è: %c\n", char_num);

    // Inizializzazione di una variabile short
    short short_num = 30000;
    printf("Il valore di short_num è: %hd\n", short_num);

    // Inizializzazione di una variabile long
    long long_num = 1000000L;
    printf("Il valore di long_num è: %ld\n", long_num);

    // Inizializzazione di una variabile long long
    long long long_long_num = 10000000000LL;
    printf("Il valore di long_long_num è: %lld\n", long_long_num);

    // Inizializzazione di una variabile unsigned int
    unsigned int unsigned_num = 4000000000U;
    printf("Il valore di unsigned_num è: %u\n", unsigned_num); */

    return 0;
}
