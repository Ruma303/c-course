#include <stdio.h>
#include <stdbool.h>

int main() {
    bool a = true;
    _Bool b = false;
    bool c = 1;
    if (a) {
        printf("a è vero\n");
    }
    if (!b) {
        printf("b è falso\n");
    }
    printf("%d\n%d\n%d\n", a, b, c);
    
    return 0;
}