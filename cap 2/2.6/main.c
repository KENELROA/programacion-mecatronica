#include <stdio.h>

/*Incremento de salario.
El programa, al recibir como dato el nivel de un profesor, imcrementa su salario en funcion de la tabla 2.3.

NIV: variables de tipo entero.
SAL: variables de tipo real. */

void main (void)
{
    float SAL;
    int NIV;
    printf("Ingrese el nivel academico del profesor:");
    scanf ("%d", &NIV);
    printf ("ingrese el salario: ");
    scanf ("%f", &SAL);
    switch (NIV)
    printf ("ingrese el salario: ");
    scanf ("%f", &SAL);
    switch (NIV)
    {
        case 1: SAL = SAL * 1.0035; break;
        case 2: SAL = SAL * 1.0041; break;
        case 3: SAL = SAL * 1.0048; break;
        case 4 : SAL = SAL * 1.0053; break;
    }
    printf ("\nNivel: %d \tNuevosalario: %8.2f", NIV, SAL);
    }


