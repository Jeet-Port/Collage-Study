#include<stdio.h>
#include<conio.h>
int sum(int,int);
void main()
{
    int a,b;
    printf("Enter a = ");
    scanf("%d",&a);
    printf("Enter b = ");
    scanf("%d",&b);
    printf("Sum = %d",sum(a,b));
}
int sum(int a,int b)
{
    return(a+b);
}