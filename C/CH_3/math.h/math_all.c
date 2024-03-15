#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float a,c,p;
    printf("Enter A = ");
    scanf("%f",&a);
    printf("Enter power = ");
    scanf("%f",&p);
    c=ceil(a);
    printf("Ceil = %f",c);
    c=floor(a);
    printf("\nFloor = %f",c);
    c=sqrt(a);
    printf("\nSquare Root = %f",c);
    c=pow(a,p);
    printf("\nPower = %f",c);
    c=abs(a);
    printf("\nAbs = %f",c);
}