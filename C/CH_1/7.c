//Question 7
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],b[10],i,j,asize,bsize,msize,m[20];
    printf("Enter Value Of a=");
    scanf("%d",&asize);
    printf("Enter Element Of a\n");
    for(i=0;i<asize;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter Value Of b=");
    scanf("%d",&bsize);
    printf("Enter Element Of b\n");
    for(i=0;i<bsize;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<asize;i++)
    {
        m[i]=a[i];
    }
    msize=asize+bsize;
    for(i=0,j=asize;i<bsize,j<msize;i++,j++)
    {
        m[j]=b[i];
    }
    printf("a[%d] array element after merging \n",msize);
    for(i=0;i<msize;i++)
    {
        printf("%d\t",m[i]);
    }
}