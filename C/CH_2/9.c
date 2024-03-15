#include<stdio.h>
#include<conio.h>
void main()
{
    char si[100],*ptr;
    int lenght=0;
    printf("Enter Your String = ");
    gets(si);
    ptr=si;
    while(*ptr!='\0')
    {
        lenght ++;
        ptr ++;
    }
    printf("Lenght = %d",lenght);
}