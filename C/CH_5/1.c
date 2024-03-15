#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *file;
    char ch;
    if(file=fopen("D://C//CH_5//TEST//1.txt","w"))
    {
        printf("File Open\n");
        fputs("HEllo File",file);
    }
}