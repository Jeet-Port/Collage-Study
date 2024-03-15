#include<stdio.h>
#include<conio.h>
struct student
{
    int m,s,e;
    float t;
}s[100];
void main()
{
    int i,n;
    printf("Enter Students = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter Maths Marks = ");
        scanf("%d",&s[i].m);
        printf("Enter Science Marks = ");
        scanf("%d",&s[i].s);
        printf("Enter English Marks = ");
        scanf("%d",&s[i].e);
        printf("Enter Total Percentage = ");
        scanf("%f",&s[i].t);
    }
    for(i=0;i<n;i++)
    {
        if(s[i].m>=80 && s[i].s>=75 && s[i].e>=70 && s[i].t>=75)
        {
            printf("\nYou Are Eligibal");
            printf("\nMaths = %d",s[i].m);
            printf("\nScience = %d",s[i].s);
            printf("\nEnglish = %d",s[i].e);
            printf("\nTotal Percentage = %f",s[i].t);
        }
    }
}