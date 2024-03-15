#include<stdio.h>
#include<conio.h>
int sum(int no);
void main()
{
    int n;
    printf("Enter N = ");
    scanf("%d",&n);
    printf("Sum = %d",sum(n));
}
int sum(int no)
{
    int i,b=0;
    for(i=0;i<=no;i++)
    {
        b+=i;
    }
    return b;
}