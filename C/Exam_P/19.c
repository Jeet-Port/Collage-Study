#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str1[20],str2[20];
    int l,c;
    printf("Enter String1 = ");
    gets(str1);
    l=strlen(str1);
    printf("Length=%d",l);
    strcpy(str2,str1);
    printf("\nCopied string Is %s ",str2);
    strcat(str1,str2);
    printf("\n%s",str1);
    c=strcmp(str1,str2);
    if(c==0)
    {
        printf("\nBoth Strinng are Equal");
    }
    else
    {
        printf("\nResult = %d",c);
    }
}