#include<stdio.h>
#include<conio.h>
struct person
{
    char name[20];
    int age;
    char add[20];
}x[100];
void main()
{
    int i,n;
    printf("Enter n = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter name = ");
        scanf("%s",x[i].name);
        printf("Enter age = ");
        scanf("%d",&x[i].age);
        printf("Enter Adress = ");
        scanf("%s",x[i].add);
    }
    for(i=0;i<n;i++)
    {
        printf("\nName = %s",x[i].name);
        printf("\nAge = %d",x[i].age);
        printf("\nAdress = %s",x[i].add);
    }
}