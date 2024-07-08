#include<stdio.h>

void main()
{
    int age;
    printf("Enter the value of age\n");
    scanf("%d", &age);

    if (age>=18)
    {
        printf("Adult");
    }
    else if (age<18 && age>=13)
    {
        printf("teenager");
    }
    else if(age<13 && age>0)
    {
        printf("child");
    }
    else
    {
        printf("invalid input");
    }
}