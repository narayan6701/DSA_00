#include<stdio.h>

void main()
{
    int a, b;

    printf("Enter the value of a and b \n");
    scanf("%d %d", &a, &b);

    printf("%d\n", a<b);
    printf("%d\n", a>b);
    printf("%d\n", a==b);
    printf("%d\n", a<=b);
    printf("%d\n", a>=b);
    printf("%d\n", a!=b);
}