#include <stdio.h>

#define SIZE_W 3
#define SIZE_D 10

int find_w(int a[], int b)
{
    int flag = 0;
    for(int i =0; i < SIZE_W;++i)
    {
        if (a[i] == b)
        {
            flag = 1;
            break;
        }

    }

    return flag;
}

int find_d(int a[], int b)
{
    int flag = 0;
    for(int i =0; i < SIZE_D;++i)
    {
        if (a[i] == b)
        {
            flag = 1;
            break;
        }

    }

    return flag;
}

//getchar() deveulve el valro ASCII
int main()
{
    int c,nwhite_c,ndigit_c,nother_c;
    int nwhite[SIZE_W] = {' ', '\n','\t'};
    int ndigit[SIZE_D] = {'0','1','2','3','4','5','6','7','8','9'};

    nwhite_c=ndigit_c=nother_c = 0;

    while ((c=getchar()) != EOF)
    {
        if(find_w(nwhite, c) == 1){
            ++nwhite_c;
        }
        else if(find_d(ndigit, c) == 1)
        {
            ++ndigit_c;
        }
        else 
        {
            ++nother_c;
        }
    }

    printf("la cantidad de blancos %d, la cantdad de digitos %d, y otros %d\n", nwhite_c,ndigit_c,nother_c);

    return 0;
}

