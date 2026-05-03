#include <stdio.h>

int main(){
    long contador = 0;
    printf("%ld\n",contador);

    while(getchar() != EOF){
        ++contador;
        printf("%ld\n",contador);
        }
    
    printf("el usuario ingresó: %ld caracteres", contador);


}