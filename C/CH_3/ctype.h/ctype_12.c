#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
    char a;
    printf("Enterr A = ");
    scanf("%c",&a);
    a=toupper(a);
    printf("A = %c",a);
}