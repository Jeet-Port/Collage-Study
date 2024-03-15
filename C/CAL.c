#include<stdio.h>
#include<conio.h>
void main()
{
    int add=0,sub=0,mul=0,num,a[10000],i,n;
    system("cls");
    printf("Welcome to Calculater\n");
    printf("Please select What you want to do\n");
    printf("[1] = Addition , [2] = Substraction [3] = Multiplication\n");
    printf("Enter Number From Above = ");
    scanf("%d",&num);
    if(num==1)
    {
        printf("Enter Total numbers you want to add = ");
        scanf("%d",&n);
        printf("Enter Your Numbers\n\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]); 
        }
        for(i=0;i<n;i++)
        {
            add=add+a[i];
        }
        printf("Your Answer Is = %d",add);
    }
    else if(num==2)
    {
        printf("Enter Total numbers you want to Substract = ");
        scanf("%d",&n);
        printf("Enter Your Numbers\n\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]); 
        }
        sub=a[0];
        for(i=1;i<n;i++)
        {
            sub=sub-a[i];
        }
        printf("Your Answer Is = %d",sub);
    }
    else if(num==3)
    {
        printf("Enter Total numbers you want to Multiplication = ");
        scanf("%d",&n);
        printf("Enter Your Numbers\n\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]); 
        }
        mul=a[0];
        for(i=1;i<n;i++)
        {
            mul=mul*a[i];
        }
        printf("Your Answer Is = %d",mul);
    }
    else
    {
        printf("Wrong Number");
    }
    if(num==1)
    {
        
    }
    else if(num==2)
    {
        
    }
    else if(num==3)
    {
    }
}