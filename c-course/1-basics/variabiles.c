#include <stdio.h>

//, Ambito delle variabili, fuori dal main()
int var_globale = 20; //* Variabile globale

void funzioneGlobale() {
    int var_locale = 10; //* Variabile locale
    printf("%d", var_globale); //? Variabile globale accessibile
    printf("%d", var_locale); //? Variabile locale accessibile
}

int main(){

    int my_var1; //* Dichiarazione

    int var1, var2, var3; //* Dichiarazione multiple

    int my_var2 = 100; //* Inizializzazione

    int var4 = 4, var5 = 5, var6 = 6;  //* Inizializzazione multiple

    var1 = 42;

    //printf("%d", my_var1);
    // 2867012

    //printf("%d", var1); // 42

    //, Tipi di valori assegnabili alle variabili

    int Var1 = 100; //* Literal
    int Var2 = 100 / 25; //* Espressioni
    //int Var3 = somma(5, 5); //* Invocazioni


    //, Ambito delle variabili, all'interno di main()
    printf("%d", var_globale); //? Variabile globale accessibile
    //printf("%d", var_locale); //. Variabile locale non accessibile
    funzioneGlobale();

    return 0;

}


