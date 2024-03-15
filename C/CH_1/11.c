#include<stdio.h>
#include<conio.h>
void main()
{
    int a[2][2],b[2][2],i,j;
    int sum1,sum2,total;
    printf("Enter Matrix A\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Enter Matrix B\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    sum1=a[0][0]-a[0][0];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sum1=sum1+b[i][j];
        }
    }
    printf("sum=%d\n",sum1);
    sum2=b[0][0]-b[0][0];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sum2=sum2+b[i][j];
        }
    }
    printf("sum1=%d\n",sum1);
    total=sum1+sum2;
    printf("total=%d",total);
}