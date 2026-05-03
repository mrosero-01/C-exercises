//se implementa gana a la máquina con la letra generada aleatoriamente

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NO 0
#define SI 1

int main()
{
    /*nos sirve para basado en nuestra hora local, darle una semilla distinta a rand
    para que haga sus operaciones con valores distinos y garantizar aleatoriedad*/

    srand(time(NULL));
    int oportunidades,letra,acertado,c;
    oportunidades = 5;
    acertado = NO;
    /* rand() generar+a un numero aleatorio basado en l semlla que le da srand,
    este numero se divide entre 26 y se obtiene su residuo (entre 0 y 25), luego se le suma 97
    para que coindia con el rango 97 - 122 de las minusculas en la tabla ASCII*/

    letra = (rand() % 26) +97;
    printf("oportunidades restantes: %d\n", oportunidades);
    /*lo use para ver si todo iba bien*/
    //printf("debug, letra es %c\n", letra);
    while(((c=getchar()) != EOF) && acertado == NO)
    {
        /* El enter es tomado como un caracter \n, por lo que se restaran dos vidas
        tras hacer un intento, por tal motivo si del buffer del teclado llega un enter no se restan vidas
        ya que se vuele a evaluar la condición del while*/
        if (c == '\n') {
            continue; 
        }

        if(c != letra)
        {

            --oportunidades;
            printf("Equivocado. Oportunidades restantes: %d\n", oportunidades);
            if (oportunidades == 0)
            {
                printf("Te quedaste sin intentos, perdiste !!\n La letra era %c ", letra);
                break;
            }
        }
        else if(c == letra){
            acertado = SI;
            printf("has ganado la letra era !! : %c\n", letra);
        }

    }


}