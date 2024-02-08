#include <stdio.h>

/* medidas.
El programa, al recicir como datos de longitud y el peso de un ojebto
expresados en pies y libras, calcula los datos de ested objecto pero en metros y kilogramos, respectivamente.

PIE, LIB, y KI; VARIABLE DEL TIENDOO TRAL */

void main (void)
{

float PIE, LIB, MET, KIL;
printf ("Ingrese los datos del objeto:");
scanf("%f %f", &PIE, &LIB);
MET = PIE * 0.09290;
KIL = LIB * 0.45359;
printf ("\nDatos del objeto \nLongitud: %5.2f \t peso: %5.2f", MET, KIL);
}

