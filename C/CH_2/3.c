#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],i,*ptr;
    printf("Enter array element = ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    ptr=a;
    for(i=0;i<5;i++)
    {
        printf("%d\n",*(ptr+i));
    }
}