#include<stdio.h>
int main()
{
    int a,*ptr,i,size=0;
    int sum=0;
    printf("\n enter size of array -> ");
    scanf("%d",&size);
    ptr=(int*)malloc(size*sizeof(int));
    printf("\n enter %d values in an array -> ",size);
    for(i=0;i<=size-1;i++)
    {
        scanf("%d",ptr+i);
    }
    for(i=0;i<=size-1;i++)
    {
        sum=sum+ *(ptr+i);
    }
    printf("\n[average is -> %d",sum/size);
}
