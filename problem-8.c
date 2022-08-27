#include<stdio.h>
int main()
{
    int *ptr;
    ptr=(int*)malloc(sizeof(int));
    *ptr=10;
    printf("\nbefore %d",*ptr);
    free(ptr);
    printf("\nafter %d",*ptr);
}
