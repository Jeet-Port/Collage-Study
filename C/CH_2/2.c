#include<stdio.h>
#include<conio.h>
void main()
{
    int a,*ptr;
    printf("Entr value of a = ");
    scanf("%d",&a);
    ptr=&a;
    printf("A = %d",*ptr);
}