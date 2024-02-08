#include <stdio.h>

/* promedio curso.
El programna al recibir como dato el promedio de un alumno en un curso universitario, escribe aprobado si su promedio es mayor o igual a 6.
PRO: Variables de tipo real.*/

void main(void)

{
    float PRO;
    printf ("ingrese promedio del alumno:");
    scanf ("%f", &PRO);
    if (PRO >=6)
    printf("\nAprobado");

}
