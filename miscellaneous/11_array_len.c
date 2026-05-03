#include <stdio.h>
#define MAXLINE 1000 //cantidad maxima que permite el array

int get_line(int a[], int size);
int main()
{
    int len =0;
    int line[MAXLINE];
    len = get_line(line,MAXLINE);
    printf("longitud %d\n", len);
    
    for(int i =0;i<MAXLINE;++i)
    {
        if(line[i] == '\0')
        {
            break;
            
        }
        else
        {
            printf("En la pos %d el valor es %c\n", i,line[i]);
            
        }
    }
    return 0;
}

//funcion que guarda lo que escribe el user en array y devuelve el len
int get_line(int a[], int size)
{
    int c,i;
    i = 0;
    for (i=0;i< size; ++i)
    {
        if((c = getchar()) != EOF && c != '\n')
        {
            a[i] = c;
        }
        if(c == '\n'){
            ++i;
            a[i] = '\0';
            break;
        }

        
    }
    a[i] = '\0';
    return i;

}