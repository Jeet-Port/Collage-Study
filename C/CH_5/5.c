#include<stdio.h>
#include<stdio.h>
void main()
{
    int a[100],n,i,j,temp;
    FILE *all,*sort;
    if(all=fopen("D://C//CH_5//TEST//ALL2.txt","w"))
    {
        printf("\nopen File\n");
        printf("Enter N = ");
        scanf("%d",&n);
        printf("Enter Number\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            printf("%d\t",a[i]);
            fprintf(all,"%d\t",a[i]);
        }
    }
    else
    {
        printf("\nNot Found");
    }
    if(sort=fopen("D://C//CH_5//TEST//Sort.txt","w"))
    {
        printf("\nAfter Assending Element We get\n");
        fprintf(sort,"\nAfter Assending Element we get\n");
        if(all=fopen("D://C//CH_5//TEST//ALL2.txt","w"))
        {
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(a[i]<a[j])
                    {
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
                }
            }
        }
        for(i=0;i<n;i++)
        {
            printf("%d\t",a[i]);
            fprintf(sort,"%d\t",a[i]);
        }
        printf("\nAfter Dssending Element We get\n");
        fprintf(sort,"\nAfter Dssending Element we get\n");
        if(all=fopen("D://C//CH_5//TEST//ALL2.txt","w"))
        {
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(a[i]>a[j])
                    {
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
                }
            }
        }
        for(i=0;i<n;i++)
        {
            printf("%d\t",a[i]);
            fprintf(sort,"%d\t",a[i]);
        }
    }
    else
    {
        printf("\nNot Found");
    }
}