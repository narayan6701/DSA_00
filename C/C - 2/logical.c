#include<stdio.h>

void main()
{
    printf("%d\n", 0&&0);
    printf("%d\n", 0&&1);
    printf("%d\n", 0||0);
    printf("%d\n", 0||1);
    printf("%d\n", !(0||1));
    printf("%d\n", !(0||0));

}