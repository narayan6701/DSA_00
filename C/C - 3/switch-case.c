#include<stdio.h>

void main()
{
    int age;
    printf("Enter the value of age\n");
    scanf("%d", &age);

    switch(age)
        case 18:
            printf("adult");
            printf("they can vote");
            printf("they can drive");
            break;
        case 10:
            printf("Not adult");
            printf("they can't vote");
            printf("they can't drive");
            break;
        default:
            printf("Invalid");
}