#include<stdio.h>
int main()
{
    char *ptr,c;
    int i=0,j=1;
    ptr=(char*)malloc(sizeof(char));
    while(c!='\n')
    {
        c=getc(stdin);
        j++;
        ptr= (char*)realloc(ptr,j*sizeof(char));
        ptr[i]=c;
    }
}
