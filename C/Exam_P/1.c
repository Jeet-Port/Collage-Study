//Question 3
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],i,max,min;
    for(i=0;i<=4;i++)
    {
        printf("Entera a[%d]=",i);
        scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[0];
    for(i=0;i<=4;i++)
    {
        if(min>a[i])
        min=a[i];
        if (max<a[i])
        max=a[i];
        
    }
    printf("max=%d\n",max);
    printf("min=%d",min);
}