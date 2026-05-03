#include <stdio.h>
#define SIZE 10
int main()
{
    int numbers[SIZE];
    int c;

    for(int i=0; i<SIZE;++i)
    {
        numbers[i] = 0;
    }
    while((c=getchar()) != EOF)
    {
        if(c>= 48 && c<=57)
        {
            numbers[c - 48] = (numbers[c - 48] + c);
        }
        
    }

    for(int i=0; i<SIZE;++i)
    {
        int nf = numbers[i]/(i + 48);
        printf("el numero %d fue escrito: %d veces\n ",i,nf);
    }
    
  
}