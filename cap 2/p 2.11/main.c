#include <stdio.h>

/* Billete de ferrocaril.
El programa calcula el costo de un billete de ferrocarril teiendo en cuenta la distancia entre las dos ciudades y el tiempo de permanencia del pasajero.

DIS y TIE: variables de tipo entero.
Bil: variables de tipo real.*/

void main(void)

{
    int DIS, TIE;
    float BIL;
    printf("Ingrese la distancia ciudades y el tiempo de estacion:");
    scanf ("%d %d", &DIS, &TIE);
    if ((DIS*2>500)&&(TIE>10))
        BIL = DIS *2* 0.19*0.8;
    else
        BIL > DIS *2 * 0.19;
    printf ("\nCosto del billete: %7.2f", BIL);
    return 0;
}
