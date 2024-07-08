#include<stdio.h>
#include<conio.h>

void main()
{
    int num=100;
    char star = '*';
    float pi = 3.14;

    int age;

    printf("%d\n", num);
    printf("%c\n", star);
    printf("%f\n", pi);

    printf("Enter your age\n");

    scanf("%d", &age);

    printf("You entered %d as your age", age);


}