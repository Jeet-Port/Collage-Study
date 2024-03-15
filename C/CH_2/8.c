#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,*ptr[3];
    printf("Enter Value of A&B&C\n");
    scanf("%d%d%d",&a,&b,&c);
    ptr[0] = &a;
    ptr[1] = &b;
    ptr[2] = &c;
    printf("A = %d\nB = %d\nC = %d",*ptr[0],*ptr[1],*ptr[2]);
}