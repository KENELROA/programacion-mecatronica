#include <stdio.h>

/*Promedio de sueldos.
El programa al recibir como dato seis sueldos de un empleado, calcula tanto el ingreso total como el promedio mensual.

cla: variables de tipo entero.
su1, su2, su3, su4, su5, su6, ing, pro: variables de tipo real. */

void main (void)
{
    int CLA;
    float SU1, SU2, SU3, SU4, SU5, SU6, ING, PRO;
    printf ("Ingresa la clave del empreado y los 6 sueldos:\n");
    scanf ("%d %f %f %f %f %f %f", &CLA, &SU1,&SU2, &SU3, &SU4, &SU5, &SU6);
    ING = (SU1 + SU2 + SU3 + SU4 + SU5 + SU6 );
    PRO = ING /6;
    printf ("\n %d %5.2f %5.2f", CLA, ING, PRO);
}
