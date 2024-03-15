#include<stdio.h>
#include<conio.h>
struct search
{
    int a[100];
}s;
void main()
{
    int i,n,flag,e;
    printf("Enter N = ");
    scanf("%d",&n);
    printf("Enter Element of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&s.a[i]);
    }
    printf("Enter Element which you want to serch = ");
    scanf("%d",&e);
    for(i=0;i<n;i++)
    {
        if(s.a[i]==e)
        {
            flag=1;
            break;
        }
    }i--;
    if(flag==1)
    {
        printf("Location is = s.a[%d]",s.a[i]);
    }
    else
    {
        printf("NOT FOUND");
    }
}