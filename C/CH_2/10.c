#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,n,sum=0;
    int *ptr;
    printf("Enter number of sum to store in a = ");
    scanf("%d",&n);
    printf("Enter element of a\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    ptr=a;
    for(i=0;i<n;i++)
    {
        sum=sum+*ptr;
        *ptr++;
    }
    printf("The sum of array is %d",sum);
}