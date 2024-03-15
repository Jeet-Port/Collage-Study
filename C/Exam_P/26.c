#include<stdio.h> 
#include<conio.h>
#include<string.h>
void main()
{
    FILE *file;
    if(file=fopen("D://C//CH_5//TEST//1.txt","w"))
    { 
        char name[50] = "Hello World";
        int i;
        int len = strlen(name);
        if (file != '\0')
        {
	        for (i = 0; i < len; i++) 
            {
                printf("Character we ar writing to the File = %c \n", name[i]);
	            fputc (name[i], file);
	        }
	            printf("\n We have written the Name successfully");
                for(i=0;i<len;i++)
            {
                fprintf(file,"\nCh[%d] = %c",i,name[i]);
            }
	        fclose(file);		
        }
    }
    else
    {
  	    printf("\n Unable to Create or Open the Sample.txt File");
    }
}