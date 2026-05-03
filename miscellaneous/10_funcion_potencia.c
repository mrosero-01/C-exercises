#include <stdio.h>

//include
int power(double base, double exponente);
int main()
{   
    power(5,4);
    return 0;
}

int power(double base, double exponente)
{   
    double resultado = 1.0;

    for(int i=0;i<exponente;++i)
    {
        resultado = resultado * base;

    }
    printf("%0.1f elevado a %0.1f es igual a: %0.1lf\n", base, exponente, resultado);
}