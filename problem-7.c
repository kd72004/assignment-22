#include<stdio.h>
int main()
{
     int *ptr;
     ptr=(int*)malloc (sizeof(int)*4);
     ptr=NULL; //memory leak
}
