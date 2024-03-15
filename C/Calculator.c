#include<stdio.h>
#include<conio.h>
float total=0;
void main()
{
    system("cls");
    printf("It's Simple Calculater made by me\n");
    printf("Enter First Opration so we can know your first digit is positive or not\n");
    cal();
}
int cal()
{
    char au;
    float n;
    printf("Enter Opration = ");
    scanf("%s",&au);
    if(au=='+'||au=='-'||au=='*'||au=='='||au=='/')
    {
        switch (au)
        {
            case '+':
            printf("Enter Number = ");
            scanf("%f",&n);
            total=total+n;
            cal();
            break;
            case '-':
            printf("Enter Number = ");
            scanf("%f",&n);
            total=total-n;
            cal();
            break;
            case '*':
            printf("Enter Number = ");
            scanf("%f",&n);
            total=total*n;
            cal();
            break;
            case '/':
            printf("Enter Number = ");
            scanf("%f",&n);
            total=total/n;
            cal();
            break;
            case '=':
            printf("Total = %f",total);
            break;
            default:
            break;
        }
    }
    else
    {
        printf("Invalid Opration");
    }
    return 0;
}