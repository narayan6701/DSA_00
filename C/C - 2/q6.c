// Program to check even or odd

#include<stdio.h>
#include<conio.h>

void main()
{
    // for even - 1
    // for odd - 0
    
    int x;
    printf("Enter your number\n");
    scanf("%d", &x);

    printf("%d", x%2 != 1);
}