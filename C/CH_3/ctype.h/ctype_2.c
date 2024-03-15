#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
    char a;
    printf("\nEnter A = ");
    scanf("%c",&a);
    if(isalpha(a))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}