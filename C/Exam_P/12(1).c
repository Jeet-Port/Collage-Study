#include<stdio.h>
#include<conio.h>
void main()
{
    int **p1,*p2,a;
    printf("Enter value of a = ");
    scanf("%d",&a);
    p2 = &a;
    p1 = &p2;
    printf("p2 = %x\n*p2 = %d",p2,*p2);
    printf("\np1 = %x\n*p1 = %x\n**p1 = %d",p1,*p1,**p1);
}