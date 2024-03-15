#include<stdio.h>
#include<conio.h>
struct student
{
    char name[20];
    int maths,science,total;
}s[100];
void main()
{
    int n,i;
    FILE *in,*out;
    printf("Enter Total no of student = ");
    scanf("%d",&n);
    if(in=fopen("D://C//CH_5//TEST//Input.txt","w"))
    {
        printf("\nFile Open\n");
        for(i=1;i<=n;i++)
        {
            printf("Student [%d]\n",i);
            printf("Enter Student Name = ");
            scanf("%s",s[i].name);
            printf("Enter Maths Mark = ");
            scanf("%d",&s[i].maths);
            printf("Enter Science Mark = ");
            scanf("%d",&s[i].science);
            printf("Enter Total per = ");
            scanf("%d",&s[i].total);
        }
    }
    for(i=1;i<=n;i++)
        {
            printf("\nStudent [%d]",i);
            printf("\nStudent Name = %s",s[i].name);
            printf("\nMaths = %d",s[i].maths);
            printf("\nScience = %d",s[i].science);
            fprintf(in,"\nStudent [%d]",i);
            fprintf(in,"\nStudent Name = %s",s[i].name);
            fprintf(in,"\nMaths = %d",s[i].maths);
            fprintf(in,"\nScience = %d",s[i].science);
        }
    if(out=fopen("D://C//CH_5//TEST//Output.txt","w"))
    {
        printf("\nFile Open\n");
        if(in=fopen("D://C//CH_5//TEST//Input.txt","w"))
        {
            for(i=1;i<=n;i++)
            {
                if(s[i].maths>40&&s[i].science>40&&s[i].total>33)
                {
                    printf("\nStudent [%d]",i);
                    printf("\nYou Pass \n");
                    printf("\nName = %s",s[i].name);
                    printf("\nMaths = %d",s[i].maths);
                    printf("\nScience = %d",s[i].science);
                    printf("\nPercentage = %d",s[i].total);
                    fprintf(out,"\nStudent [%d]",i);
                    fprintf(out,"\nYou Pass");
                    fprintf(out,"\nName = %s",s[i].name);
                    fprintf(out,"\nMaths = %d",s[i].maths);
                    fprintf(out,"\nScience = %d",s[i].science);
                    fprintf(out,"\nPercentage = %d",s[i].total);
                }
                else
                {
                    printf("\nStudent [%d]",i);
                    printf("\nFail\n");
                    fprintf(out,"\nStudent [%d]",i);
                    fprintf(out,"\nFail\n");
                }
            }
        }
    }
}