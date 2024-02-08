#include <stdio.h>

void main (void)
{
    float ECA;
    printf("Ingrese la extencion de la estacion:");
    scanf ("%f", &ECA);
    ECA = ECA * 4047 / 10000;
    printf ("\nExtemncion de la estacion en hetareas: %5.5f", ECA);

}
