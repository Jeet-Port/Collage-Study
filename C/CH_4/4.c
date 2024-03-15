#include<stdio.h>
#include<conio.h>
struct person
{
    char name[20];
    int id,per;
}s[100];
void main()
{
    int i,n;
    printf("Enter Student = ",i);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Student [%d]\n",i);
        printf("Enter ID = ");
        scanf("%d",&s[i].id);
        printf("Enter Name = ");
        scanf("%s",s[i].name);
        printf("Enter Percentage = ");
        scanf("%d",&s[i].per);
    }
    for(i=1;i<=n;i++)
    {
        printf("\nStudent [%d]",i);
        printf("\nID = %d",s[i].id);
        printf("\nName = %s",s[i].name);
        printf("\nPercentage = %d\n",s[i].per);
    }
}