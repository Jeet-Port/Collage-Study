#include<stdio.h>
#include<conio.h>
struct sort
{
    int a;
}s[100];
void main()
{
    int i,j,k,n,temp;
    printf("Enter total no of element = ");
    scanf("%d",&n);
    printf("Enter Element\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i].a);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(s[i].a<s[j].a)
            {
                temp=s[i].a;
                s[i].a=s[j].a;
                s[j].a=temp;
            }
        }
    }
    printf("After Assending element We get\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",s[i].a);
    }
}