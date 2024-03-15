#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],i;
    for(i=0;i<=4;i++)
    {
        printf("Enter a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<=4;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
}