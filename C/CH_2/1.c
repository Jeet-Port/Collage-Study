//Write a program to print the address of variable
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,*ptr;
    printf("Enter value of a= ");
    scanf("%d",&a);
    ptr=&a;
    printf("Value of a = %d\n",a);
    printf("Address of a = %d\n",&a);
}