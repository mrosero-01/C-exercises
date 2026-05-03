#include <stdio.h>
#define MAXLINE 100

int fill_word(int a[], int b);
void print_array(int a[], int b);
void print_array2(int a[], int b);
int compare_arrays(int a[], int b[], int size);
void copy_array(int a[],int b[], int size);
int main()
{
    int word[MAXLINE];
    
    int size =0;
    int flag;

    size = fill_word(word, MAXLINE);
    int p_word[size];
    copy_array(word,p_word,size);
    print_array(word,size);
    printf("\n");
    print_array2(p_word,size);
    flag = compare_arrays(word,p_word,size);
    if(flag == 1){
        printf("Son palidromos\n");
    }
    else {
        printf("NO palidromos\n");
        
    }
    return 0;
}

int fill_word(int a[], int b)
{
    int c,i;
    i =0;
    for(i=0; i<b;++i)
    {
        if((c = getchar()) != EOF && c != '\n')
        {
            a[i] = c;
        } else if(c == '\n')
        {
            
            a[i] = '\0';
            ++i;
            break;
        }
    }
    return i;
}

void print_array(int a[], int b)
{
    for(int i=0;i<b;++i)
    {
        if(a[i] != '\0')
        {
            printf("pos %d : %c\n",i,a[i]);
        } else 
        {
            printf("pos %d : %c\n",i,a[i]);
            break;
        }
        
    }
}

void print_array2(int a[], int b)
{
    for(int i=b;i>=0;--i)
    {
        
        printf("pos %d : %c\n",i,a[i]);
    
        
    }
}


void copy_array(int a[], int b[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        b[i] = a[(size -1) - i];
    }
}

int compare_arrays(int a[], int b[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (a[i] != b[i + 1]) {
            return 0;
        }
    }
    return 1;
}