#include <stdio.h>

#define OUT 0
#define IN 1

int main()
{
    int c,nw,state;
    nw = 0;
    state = OUT;

    while ((c=getchar()) != EOF)
    {
        if(c == ' ' || c== '\n' || c =='\t')
        {
            state = OUT;
        } 
        else if(state == 0)
        {
            state = IN;
            ++nw;
        }
    }

    printf("la cantidad de palbras es : %d\n", nw);
    
}