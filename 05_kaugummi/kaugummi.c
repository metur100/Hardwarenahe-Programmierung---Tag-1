#include <stdio.h>

/*
 * Nimmt Tastatureingabe vom Benutzer entgegen und gibt die eingegebene Zahl zurück.
 */
int warte_auf_eingabe();

/*
 * Gibt "anzahl" Kaugummis aus und passt die übergebenen Geld- und Kaugummibestände
 * des Automaten entsprechend an.
 */
void kaugummi_ausgeben(int anzahl, double *geldstand, int *kaugummistand);

/*
 * Ausgabe eines Kaugummis.
 */
void print_kaugummi();


void print_kaugummi(){
        printf("  __\n");
        printf(" /o \\ \n");
        printf(" \\__/\n\n");
}
