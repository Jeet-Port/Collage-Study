#include<stdio.h>
#include<conio.h>
struct book
{
    char title[20],auth[20],pub[20];
    int page,price;
}b;
void main()
{
    printf("Enter Book Name = ");
    scanf("%s",b.title);
    printf("Enter Author = ");
    scanf("%s",b.auth);
    printf("Enter Publisher = ");
    scanf("%s",b.pub);
    printf("Enter Pages = ");
    scanf("%d",&b.page);
    printf("Enter Price = ");
    scanf("%d",&b.price);
    printf("\nBook Name = %s",b.title);
    printf("\nAuthor = %s",b.auth);
    printf("\nPubisher = %s",b.pub);
    printf("\nPages = %d",b.page);
    printf("\nPrice = %d",b.price);
}