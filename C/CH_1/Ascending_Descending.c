#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],n,i,j,temp;
    printf("Enter value of n = ");
    scanf("%d",&n);
    printf("Enter value which you want in Ascending/Descending order = \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("After Ascending value we get\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nAfter Descending value we get\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}