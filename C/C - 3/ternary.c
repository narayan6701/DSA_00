#include<stdio.h>

void main()
{
    int age;
    printf("Enter the value of age\n");
    scanf("%d", &age);

    age>=18 ? printf("Adult") : printf("Not Adult");
}