// Program to check divisibility by 2

#include<stdio.h>
#include<conio.h>

void main()
{
    int x;

    printf("Enter your number\n");
    scanf("%d", &x);

    printf("1 means true and 0 means false\n");
    printf("%d", x%2==0);
}