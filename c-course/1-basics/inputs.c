#include <stdio.h>

int main() {
    //, getchar()
    /* char c = getchar();
    printf("%c: %d\n", c, c); */

    /* puts("Ciao");
    getchar(); */

    //, scanf()
   /*  int x, y;
    puts("Inserire primo valore: ");
    scanf("%i",&x);
    puts("Inserire secondo valore: ");
    scanf("%i",&y);
    int somma = x + y;
    printf("\n%s %i\n", "Somma: ", somma); */

    int x, y, num;
    puts("Inserire due valori (separati da uno spazio): ");
    num = scanf("%i %i", &x, &y);

    int somma = x + y;
    printf("\n%s %i\n", "Somma :", somma);
    printf("Numeri di variabili acquisite: %i\n", num);


    return 0;
}


