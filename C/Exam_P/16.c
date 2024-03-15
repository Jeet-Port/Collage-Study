#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
void main()
{
    int a,b;
    printf("Enter value of a = ");
    scanf("%d",&a);
    printf("Enter value of b = ");
    scanf("%d",&b);
    swap(&a,&b);
}
void swap(int *a,int *b)
{
    int temp;
    temp=*b;
    *b=*a;
    *a=temp;
    printf("After Swapping\na = %d\nb = %d\n",*a,*b);
}