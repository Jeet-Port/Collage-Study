#include<stdio.h>
#include<conio.h>
float aoc(float r);
void main()
{
    float r;
    printf("Enter radios = ");
    scanf("%f",&r);
    printf("Area of circle = %f",aoc(r));
}
float aoc(float r)
{
    return(3.14*r*r);
}