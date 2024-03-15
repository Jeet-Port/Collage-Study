#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],t[3][3],i,j;
    printf("Enter Matrix A\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf(" Matrix A\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d    ",a[i][j]);
        }
        printf("\n");
    }
    printf("After Transpos\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            t[j][i]=a[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d    ",t[i][j]);
        }
        printf("\n");
    }
}