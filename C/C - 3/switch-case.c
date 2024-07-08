#include<stdio.h>

void main()
{
    int age;
    printf("Enter the value of age\n");
    scanf("%d", &age);

    switch(age) {
        case 18: {
            printf("adult\n");
            printf("they can vote\n");
            printf("they can drive\n");
            break;
        }
        case 10: {
            printf("Not adult\n");
            printf("they can't vote\n");
            printf("they can't drive\n");
            break;
        }
        default: {
            printf("Invalid\n");
        }
    }
}
