//Question 5
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,n,loc,no;
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
    printf("\nEnter loction where you want to insert = ");
    scanf("%d",&loc);
    printf("\nEnter Element which you want to insert = ");
    scanf("%d",&no);
    for(i=n-1;i>=loc;i--)
    {
        a[i+1]=a[i];
    }
    a[loc]=no;
    printf("\nafter inserting New element we get");
    for(i=0;i<=n;i++)
    {
        printf("\na[%d]=%d",i,a[i]);
    }
}