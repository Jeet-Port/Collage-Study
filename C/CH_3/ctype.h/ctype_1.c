#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
    int a;
    printf("Enter A = ");
    scanf("%d",&a);
    if(isalnum(a))
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
}