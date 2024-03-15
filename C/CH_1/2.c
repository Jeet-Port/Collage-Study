//Question 2
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,n;
    printf("Enter value of n=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d",i,a[i]);
        printf("\n");
    }
}