#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    {
        char str1[20];
        int l;
        printf("Enter String1 = ");
        gets(str1);
        l=strlen(str1);
        printf("Length=%d",l);
    }
    {
        char str1[20],dest[20];
        printf("\nEnter String1 = ");
        gets(str1);
        strcpy(dest,str1);
        printf("Copied string Is %s ",dest);
    }
    {
        char str1[20],str2[20];
        printf("\nEnter String1 = ");
        gets(str1);
        printf("Enter String2 = ");
        gets(str2);
        strcat(str1,str2);
        printf("%s",str1);
    }
    {
        char str1[20],str2[20];
        int c;
        printf("\nEnter String1 = ");
        gets(str1);
        printf("Enter String2 = ");
        gets(str2);
        c=strcmp(str1,str2);
        if(c==0)
        {
            printf("Both Strinng are Equal");
        }
        else
        {
            printf("Result = %d",c);
        }
    }
}