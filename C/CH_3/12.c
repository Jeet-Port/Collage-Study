#include<stdio.h>
#include<conio.h>
void ree(int n);
void main()
{
    int n;
    printf("Enter Number = ");
    scanf("%d",&n);
    ree(n);
}
void ree(int n)
{
    int r;
    if(n==0)
    {
        return;
    }
    else
    {
        r=n%10;
        printf("%d",r);
        ree(n/10);
    }
}