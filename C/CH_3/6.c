#include<stdio.h>
#include<conio.h>
int max(int,int);
void main()
{
    int a,b;
    printf("Enter A = ");
    scanf("%d",&a);
    printf("Enter B = ");
    scanf("%d",&b);
    printf("Max = %d",max(a,b));
}
int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}