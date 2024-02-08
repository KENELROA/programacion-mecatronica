#include <stdio.h>
#include <math.h>

/*Suma cuadrados.
El programa, al recibir como dato un prupo de enteros positivos, obtiene el cuadrado de los mismos y la suma correspondiente a dichos cuadrados.*/
void main (void)

{
    int NUM;
    long CUA, SUC = 0;
    printf ("\nIngrese un numero entero -0 para ternimar-:\t");
    scanf ("%d", &NUM);
    while (NUM)

        /*Observa que la condicion es verdadera mientras el entero es diferente de cero. */

    {

        CUA = pow (NUM, 2);
        printf("%d al cubo es %ld", NUM, CUA);
        SUC = SUC + CUA;
        printf ("\n Ingrese un numero entero -0 para ternimar-:\t");
        scanf ("%d", &NUM);

    }
    printf ("\nLa suma de los cuadrados es %ld", SUC);
}
