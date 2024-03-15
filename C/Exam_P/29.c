#include<stdio.h>
#include<conio.h>
void main()
{
    int r;
    char n[20],a[20],c[20];
    FILE *file;
    if(file=fopen("D://C//CH_5//TEST//Student.txt","w"))
    {
        printf("File Open\n");
        printf("Enter Student Name = ");
        scanf("%s",n);
        printf("Enter Roll No. = ");
        scanf("%d",&r);
        printf("Enter Address = ");
        scanf("%s",a);
        printf("Enter City = ");
        scanf("%s",c);
        printf("\nName = %s",n);
        printf("\nRoll No. = %d",r);
        printf("\nAddress = %s",a);
        printf("\nCity = %s",c);
        fprintf(file,"\nName = %s",n);
        fprintf(file,"\nRoll No. = %d",r);
        fprintf(file,"\nAddress = %s",a);
        fprintf(file,"\nCity = %s",c);
    }
}