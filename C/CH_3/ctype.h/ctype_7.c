#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
    char a;
    printf("\nEnter A = ");
    scanf("%c",&a);
    if(isprint(a))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}