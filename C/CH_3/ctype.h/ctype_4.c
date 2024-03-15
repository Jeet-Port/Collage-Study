#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
    char a;
    printf("Enter A = ");
    scanf("%c",&a);
    if(isspace(a))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}