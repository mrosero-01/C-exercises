#include <stdio.h>
/* comentarios del programa en C, comentario de varias
lienas */
/* Imprime la tabla de F-C para fahr=0,20 ...*/

int main(){
    float fahr,celsius;
    int upper,lower,step;

    lower=0; //limite inferior de la tabla de temperaturtas
    upper = 300;
    step = 20;

    fahr = lower;
    printf("desde for\n");
    for(fahr;fahr<=upper;fahr=fahr+step){
        celsius = 5.0*(fahr-32.0)/9.0;
        printf("%3.0f %6.2f\n",fahr,celsius);
    }

    fahr = lower;
    printf("desde while\n");
    while(fahr<=upper){
        celsius = 5.0*(fahr-32.0)/9.0;
        printf("%3.0f %6.2f\n",fahr,celsius);
        fahr = fahr + step;
    }

}
 