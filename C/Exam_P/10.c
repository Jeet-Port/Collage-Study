#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float a,b,c,d,r1,r2,*ptr;
    ptr=&d;
    printf("Enter value of A : ");
    scanf("%f",&a);
    printf("Enter value of b : ");
    scanf("%f",&b);
    printf("Enter value of c : ");
    scanf("%f",&c);
    *ptr=(b*b-(4*a*c));
    if(*ptr>0)
    {
        printf("d>0");
        r1=-b+(sqrt(*ptr));
        r2=-b-(sqrt(*ptr));
        printf("\nRoot 1 = %f",r1);
        printf("\nRoot 2 = %f",r2);
    }
    else if(*ptr<0)
    {
        printf("d<0");
        printf("\nAnswer will be an Imaginary Root");
    }
    else if(*ptr==0)
    {
        printf("d=0");
        r1=(-b/(2*a));
        r2=(-b/2*a);
        printf("\nRoot 1 = %f",r1);
        printf("\nRoot 2 = %f",r2);
    }
}