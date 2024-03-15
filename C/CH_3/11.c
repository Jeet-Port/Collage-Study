#include<stdio.h>
#include<conio.h>
int sum(int n);
int main() 
{
    int num;
    printf("Enter Number = : ");
    scanf("%d", &num);
    printf("Sum = %d", sum(num));
    return 0;
}
int sum(int n) 
{
    if (n != 0)
    {
        return n + sum(n - 1);
    }
    else
    {
        return n;
    }
}