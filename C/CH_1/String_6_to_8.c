#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    {
        char str1[20];
        printf("Enter String1 = ");
        gets(str1);
        strupr(str1);
        printf("%s",str1);
    }
    {
        char str1[20];
        printf("\nEnter String1 = ");
        gets(str1);
        strlwr(str1);
        printf("%s",str1);
    }
    {
        char str1[] = "jeet";
        char ch='j';
        if(strchr(str1,ch))
        {
            printf("\n%c present %s");
        }
        else
        {
            printf("\n%c not present %s");
        }
    }
}