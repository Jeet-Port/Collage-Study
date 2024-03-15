#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *file;
    char ch;
    int i;
    if(file=fopen("D://C//CH_5//TEST//2.txt","r"))
    {
        printf("File Open\n");
        while ((ch=fgetc(file))!=EOF)
        {
            printf("ch[%d] = %c\n",i,ch);
            i++;
        }
    }
    else
    {
        printf("File Not Found");
    }
}