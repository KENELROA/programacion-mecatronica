#include <stdio.h>

/* Numero perfectos
El programa, al recibir como dato un numero entero positivo como limite, obtiene los numeros perfectos hay en el intervalo.

I, J, NUM, C: variables de tipo entero.*/

void main(void)

{
    int I, J, NUM, SUM, C = 0;
    printf("\nIngrese el numero limite:");
    scanf ("%d", &NUM);
    for (I = 1; I <= NUM; I++)
    {
        SUM = 0;
        for (J = 1; J <= (I/2); J++)
            if ((I % J) == 0)
                SUM += J;
        if (SUM == I)
        {
            printf ("\n%d es un numero perfecto", I);
            C++;
        }
    }

    printf ("\nEntre 1 y %d hay %d numeros perfectos", NUM, C);
}