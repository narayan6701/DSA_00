#include<stdio.h>

void main()
{
    int a, b=10;

    a=b;
    printf("%d\n", a);
    printf("%d\n", a+=b);
    printf("%d\n", a-=b);
    printf("%d\n", a*=b);
    printf("%d\n", a/=b);
    printf("%d\n", a%=b);

}