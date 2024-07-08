// Program to check if a character is digit or not 

#include<stdio.h>
#include<conio.h>
#include<ctype.h>

void main()
{
    char digi;
    
    printf("Enter your character: ");
    scanf("%c", &digi);

    printf("%d\n", isdigit(digi));
    
    char ch=getch();

    printf("%c", ch);
}