#include<stdio.h>
#include<conio.h>
void main()
{
    int i,l,k,j,a[100],b[100],M[100],msize;
    FILE *f1,*f2,*m;
    if(f1=fopen("D://C//CH_5//TEST//File1.txt","w"))
    {
        printf("\nFile Open\n");
        printf("Enter l = ");
        scanf("%d",&l);
        for(i=0;i<l;i++)
        {
            printf("a[%d] = ",i);
            scanf("%d",&a[i]);
        }
        for(i=0;i<l;i++)
        {
            printf("\n%d",a[i]);
            fprintf(f1,"\n%d",a[i]);
        }
    }
    else
    {
        printf("\nNot Found\n");
    }
    if(f2=fopen("D://C//CH_5//TEST//File2.txt","w"))
    {
        printf("\nFile Open\n");
        printf("Enter k = ");
        scanf("%d",&k);
        for(i=0;i<k;i++)
        {
            printf("b[%d] = ",i);
            scanf("%d",&b[i]);
        }
        for(i=0;i<k;i++)
        {
            printf("\n%d",b[i]);
            fprintf(f2,"\n%d",b[i]);
        }
    }
    else
    {
        printf("Not Found\n");
    }
    if(m=fopen("D://C//CH_5//TEST//Merge.txt","w"))
    {
        for(i=0;i<l;i++)
        {
            M[i]=a[i];
        }
        msize=l+k;
        for(i=0,j=l;i<k,j<msize;i++,j++)
        {
            M[j]=b[i];
        }
        printf("\nAfter Mergeing Element We Get\n");
        for(i=0;i<msize;i++)
        {
            printf("%d\t",M[i]);
            fprintf(m,"%d\t",M[i]);
        }
    }
}