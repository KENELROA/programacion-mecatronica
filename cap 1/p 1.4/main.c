#include <stdio.h>

/* Superficie del triangulo.
El programa, al recibir como datos la base y altura de un triangulo, calcula su superficie.

 BAS, ALT y SUP: variables de tipo real.c*/

void main(void)
{
    float BAS, ALT, SUP;
    printf ("Ingresa la base y la altura del triangulo:");
    scanf ("%f %f", &BAS, &ALT);
    SUP= BAS * ALT / 2;
    printf ("\n La superficie del triangulo es: %5.2f", SUP);
}
