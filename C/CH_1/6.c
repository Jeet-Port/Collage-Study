//Question 6
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,n,loc;
    printf("Enter value of n=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("Your Element Of array are");
    for(i=0;i<n;i++)
    {
        printf("\na[%d]=%d",i,a[i]);
    }
    printf("\nEnter loction where you want to Delete = ");
    scanf("%d",&loc);
    for(i=loc;i<=n-1;i++)
    {
        a[i-1]=a[i];
    }
    printf("\nafter Deleting New element we get");
    for(i=0;i<n-1;i++)
    {
        printf("\na[%d]=%d",i,a[i]);
    }
}