//Question 4
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],i,n,flag;
    for(i=0;i<5;i++)
    {
        printf("Enter a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("Enter Element Which you want to search = ");
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        if(a[i]==n)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Location is = a[%d] ",i);
    }
    else
    {
        printf("Not Found");
    }
}