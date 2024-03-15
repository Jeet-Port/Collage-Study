#include<stdio.h>
#include<conio.h>
struct person
{
    char name[20];
    int age;
    char add[20];
};
void main()
{
    struct person x ={"Jeet",17,"Vastral"};
    printf("Name = %s",x.name);
    printf("\nAge = %d",x.age);
    printf("\nAdress = %s",x.add);
}