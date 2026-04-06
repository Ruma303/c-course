#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <limits.h>

#define TYPEOF_SHORT "short"
#define TYPEOF_INT   "int"

int main(void) {

    // Tipi interi base
    char c = 'A';
    signed char sc = -120;
    unsigned char uc = 250;

    short s = -32000;
    unsigned short us = 65000;

    int i = 2147483647;
    unsigned int ui = 4000000000U;

    long l = 1000000L;
    unsigned long ul = 3000000000UL;

    long long ll = 10000000000LL;
    unsigned long long ull = 18000000000000000000ULL;

    // Stampa tipi interi base
    printf("char: %c with int number %d, signed char: %d, unsigned char: %u\n", c, c, sc, uc);
    printf("short: %hd, unsigned short: %hu\n", s, us);
    printf("int: %d, unsigned int: %u\n", i, ui);
    printf("long: %ld, unsigned long: %lu\n", l, ul);
    printf("long long: %lld, unsigned long long: %llu\n", ll, ull);


    // Tipi a larghezza fissa
    int8_t i8 = -128;
    uint8_t u8 = 255;
    int16_t i16 = -32000;
    uint16_t u16 = 65000;
    int32_t i32 = 2147483647;
    uint32_t u32 = 4294967295U;
    int64_t i64 = 9223372036854775807LL;
    uint64_t u64 = 18446744073709551615ULL;

    // Stampa tipi a larghezza fissa
    printf("int8_t: %" PRId8 ", uint8_t: %" PRIu8 "\n", i8, u8);
    printf("int16_t: %" PRId16 ", uint16_t: %" PRIu16 "\n", i16, u16);
    printf("int32_t: %" PRId32 ", uint32_t: %" PRIu32 "\n", i32, u32);
    printf("int64_t: %" PRId64 ", uint64_t: %" PRIu64 "\n", i64, u64);


    // Tipi speciali
    int_least32_t il32 = -100;
    uint_fast16_t uf16 = 12345;
    intptr_t ip = (intptr_t)&i;
    uintmax_t umax = UINTMAX_MAX;

    // Stampa tipi speciali
    printf("int_least32_t: %" PRIdLEAST32 ", uint_fast16_t: %" PRIuFAST16 "\n", il32, uf16);
    printf("intptr_t: %" PRIdPTR ", uintmax_t: %" PRIuMAX "\n", ip, umax);


    // Altre rappresentazioni
    int oct = 0123;  // Ottale
    int hex = 0x123; // Esadecimale
    int bin = 0b101; // Binario

    // Stampa altre rappresentazioni numeri interi
    printf("Ottale %o in decimale: %d\n", oct, oct);
    printf("Esadecimale %x in decimale: %d\n", hex, hex);
    printf("Binario 101 in decimale: %d\n", bin);


    // Overflow
    unsigned char o = 255;
    o = o + 1; // o diventa 0 per overflow
    printf("Valore di o %d\n", o);

    // Type Promotion
    short s1 = 10;
    printf("Valore di s1: %d di tipo %s\n", s1, TYPEOF_SHORT);

    int i1 = s1 + 1000; // Type promotion: short -> int
    printf("Valore di i1: %d di tipo %s\n", i1, TYPEOF_INT);


    // Limiti dei tipi interi
    printf("INT_MIN: %d, INT_MAX: %d\n", INT_MIN, INT_MAX);
    printf("LONG_MIN: %ld, LONG_MAX: %ld\n", LONG_MIN, LONG_MAX);
    printf("UINT64_MAX: %" PRIu64 "\n", UINT64_MAX);

    return 0;
}