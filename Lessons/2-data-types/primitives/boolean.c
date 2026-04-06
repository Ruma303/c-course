#include <stdio.h>
#include <stdbool.h>

int main() {
    bool a = true;
    _Bool b = false;
    bool c = 1;

    bool x = 123;    // x sarà true (1)
    bool y = 0;      // y sarà false (0)
    bool z = -5;     // z sarà true (1)
    printf("%d %d %d\n", x, y, z); // Output: 1 0 1

    // Uso in espressioni condizionali
    bool attivo = true;
    _Bool completato = 0; // false

    if (attivo) {
        printf("Il sistema è attivo\n");
    }

    if (!completato) {
        printf("Non ancora completato\n");
    }

    return 0;
}
