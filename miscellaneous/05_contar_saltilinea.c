#include <stdio.h>

int main(){
    int c,nl;
    c = getchar();
    nl = 0;

    while(c != EOF){
        if(c == '\n') ++nl;
        c = getchar();
    }
    printf("%d", nl);

}