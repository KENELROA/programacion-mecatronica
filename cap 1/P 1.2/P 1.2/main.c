#include <stdio.h>

/* invierte datos

El programa, al recibir como dato un conjunto de datos de entrada, invierte el orden de los mismos cuando los imprime.

A, B, C y D: Variables de tipo entero.*/

void main (void)

{
    int A,B,C,D;

    printf ("Ingrese cuatro datos de tipo entero separado por espacios:");
    scanf ("%d %d %d %d", &A, &B, &C, &D);
    printf ("\n %d %d %d %d", D, C, B, A);
}
