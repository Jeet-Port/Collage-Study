#include<stdio.h>
#include<stdio.h>
struct person
{
    char name[20];
    int age;
};
void main()
{
    struct person p,*ptr;
    ptr=&p;
    printf("Enter Name = ");
    gets(ptr->name);
    printf("Enter Age = ");
    scanf("%d",&ptr->age);
    printf("\nName = %s",ptr->name);
    printf("\nAge = %d",ptr->age);
}