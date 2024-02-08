#include <stdio.h>

/* promedio curso.
el programa, al recibnir como dato el promedio de un alumno en curso universitario, esbribe aprobado si su promedio es mayor o igual a 6, o reprobado en caso de contrario.

Pro: Variables de tipo real, */

void main(void)

{
    float PRO;
    printf("Ingrese el promedio del alumno:");
    scanf ("%f", &PRO);
    if (PRO >=6.0)
        printf ("\nAprovado");
    else
        printf ("\nReprovado");
}
