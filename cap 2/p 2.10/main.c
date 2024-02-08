#include <stdio.h>
#include <math.h>

/* PAR, impar o nul.

NUM: variable de tipo entero. */

void main(void)

{
    int NUM;
    printf("Ingrese el nimero:");
   scanf ("%d", &NUM);
    if (NUM ==0)
        printf ("\nNulo");
    else
        if (pow (-1, NUM)>0)
        printf ("\nPar");
        else
            printf ("\nImpar");

}
