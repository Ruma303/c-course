#include <stdio.h>
#include <float.h>
#include <math.h>

int main() {

    // Variabili floating point
    float e = 2.71828f;
    printf("Il valore del numero di Nepero è: %f\n", e);

    double pi = 3.14;
    printf("Il valore di pi greco è: %lf\n", pi);

    long double pi_long = 3.14159265359L;
    printf("Il valore di pi greco è: %Lf\n", pi_long);

    // Costanti e operazioni math
    printf("FLT_MAX: %e\n", FLT_MAX);
    printf("DBL_EPSILON: %.20f\n", DBL_EPSILON);
    printf("Radice quadrata di 2 (float): %f\n", sqrtf(2.0f));

    // Altre notazioni
    float a = 1.23e-3f;
    double b = 3.14E2;
    printf("Esponenziale float %f\n", a); // 0.00123
    printf("Esponenziale float %lf\n", b); // 314.0


    // Precisione e arrotondamenti
    double x = 0.1 + 0.2;
    printf("%.17g\n", x); // output: 0.30000000000000004

    // Valori speciali
    float zero = 0.0f;
    float inf = 1.0f / zero;        // Infinity
    float nan = 0.0f / zero;        // NaN
    printf("inf = %f, nan = %f\n", inf, nan);

    return 0;
}