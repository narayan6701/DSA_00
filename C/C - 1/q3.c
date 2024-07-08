// Program to calculate perimeter of a rectangle

#include<stdio.h>
#include<conio.h>

void main()
{
    int a, b;

    printf("Enter the length and breadth of the rectangle\n");
    scanf("%d %d",&a, &b);

    printf("The perimeter will be %d", 2*(a+b));
}