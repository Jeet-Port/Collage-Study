//Question 10
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("a[%d][%d]=%d\n",i,j,a[i][j]);
        }
    }
}