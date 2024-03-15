#include<stdio.h>
#include<conio.h>
struct member
{
    char name[20];
    int a,c,h,w;
}m[100];
void main()
{
    int i,n;
    printf("Enter Member = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter Name = ");
        scanf("%s",m[i].name);
        printf("Enter Code = ");
        scanf("%d",&m[i].c);
        printf("Enter Age = ");
        scanf("%d",&m[i].a);
        printf("Enter Height = ");
        scanf("%d",&m[i].h);
        printf("Enter Weight = ");
        scanf("%d",&m[i].w);
    }
    for(i=0;i<n;i++)
    {
        if(m[i].w>50 && m[i].h>40)
        {
            printf("\nName = %s",m[i].name);
            printf("\nCode = %d",m[i].c);
            printf("\nAge = %d",m[i].a);
            printf("\nHeight = %d",m[i].h);
            printf("\nWeight = %d",m[i].w);
        }
    }
}