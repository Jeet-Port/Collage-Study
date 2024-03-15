#include<stdio.h>
#include<conio.h>
struct student
{
    char n[5];
    int no;
}s;
union student1
{
    char n[5];
    int no;
}s1;
void main()
{
    printf("Size of structure = %d",sizeof(s));
    printf("\nSize of union = %d",sizeof(s1));
}