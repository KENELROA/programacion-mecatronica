#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador = 0;
    contador =1;
    // while (contador <= 100)
    for(contador = 1; contador <=100; contador++)
    {
        if (contador == 50)
        {
            printf ("\nValor de contador=: %d",contador );
        }
        else if (contador == 60)
        {
            printf ("\nvalor de contador=: %d", contador);
        }
        else if (contador == 70)
        {
            printf ("\nvalor de contador=: %d", contador);
        }
        else
        {
            printf ("\nno me interesa");
        }
        contador = contador + 1 ;
        //contador++;
    }
    printf ("\nTermine\n");
    return 0;
}
