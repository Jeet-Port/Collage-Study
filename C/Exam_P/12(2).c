#include<stdio.h>
#include<conio.h>
void main()
{
    void *ptr;
    int a = 10;
    float b = 20.20;
    ptr=&a;
    printf("A = %d",*(int*)ptr);
    ptr=&b;
    printf("\nB = %f",*(float*)ptr);
}