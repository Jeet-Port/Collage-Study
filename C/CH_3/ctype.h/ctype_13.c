#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
    char a;
    printf("Enterr A = ");
    scanf("%c",&a);
    a=tolower(a);
    printf("A = %c",a);
}