#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,a[1000];
    FILE *file,*even,*odd;
    if(file=fopen("D://C//CH_5//TEST//all.txt","w"))
    {
        printf("File Open\n");
        printf("Enter N = ");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            printf("a[%d] = ",i);
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            printf("\n%d",a[i]);
            fprintf(file,"\n%d",a[i]);
        }
    }
    else
    {
        printf("File Not Found");
    }
    printf("\nOdd");
    file=fopen("D://C//CH_5//TEST//odd.txt","w");
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            printf("\n%d",a[i]);
            fprintf(file,"\n%d",a[i]);
        }
    }
    printf("\nEven");
    file=fopen("D://C//CH_5//TEST//even.txt","w");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("\n%d",a[i]);
            fprintf(file,"\n%d",a[i]);
        }
    }
}