#include<stdio.h>  
#include<conio.h>  
int fact(int n);  
int main()  
{  
    int n;  
  
    printf("Enter Factorial = ");  
    scanf("%d", &n);  
    printf("Factorial = %d",fact(n));  
    return 0;  
}  
int fact(int n)  
{  
    if(n>0)
    {  
        return(n * fact(n - 1));  
    }
    else
    {  
        return 1;
    }  
}