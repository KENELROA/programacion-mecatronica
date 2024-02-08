#include <stdio.h>

/*Nomina de profesores.
El programa, al recibir como datos los salarios de los profesores de una universidad,obgtiene la nimina y el promedio de salarios.
I: variable de tipo entero.
SAL: variable de tipo real.*/

void main (void)

{
    int I = 0;
    float SAL, PRO, NOM =0;
    printf("Ingrese el salario del profecsor:\t");
    /*Observa que al menos se necesita ingresal el salario de un profesor para que no ocurra un error de ejecucion del programa. */
    scanf ("%f", &SAL);
    do
    {
        NOM = NOM + SAL;
        I = I + 1;
        printf ("Ingrese el salario del profesor -0 para terminar-:\t");
        scanf ("%7f", &SAL);
    }
    while (SAL);
    PRO = NOM/I;
    printf ("\nNomina: %.2f \t Promedio de salarios: %2f", NOM, PRO);

    return 0;
}
