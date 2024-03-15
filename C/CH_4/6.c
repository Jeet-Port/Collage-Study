#include<stdio.h>
#include<conio.h>
struct emp
{
    char n[200];
    float salary,total;
}e;
void main()
{
    float H,D,T;
    printf("Enter Employe Name = ");
    scanf("%s",e.n);
    printf("Enter Salary = ");
    scanf("%f",&e.salary);
    H=((e.salary*15)/100);
    D=((e.salary*50)/100);
    T=((e.salary*5)/100);
    e.total=(e.salary+H+D+T);
    printf("\nEmploye Name = %s",e.n);
    printf("\nOriginal Salary = %f",e.salary);
    printf("\nTotal salary = %f",e.total);
    printf("\nHRA = %f",H);
    printf("\nDA = %f",D);
    printf("\nTA = %f",T);
}