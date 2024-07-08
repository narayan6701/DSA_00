// Print 1 or 0 for following statements

#include<stdio.h>
#include<conio.h>

void main()
{
    // if it's sunday and snowing - true
    int isSunday=1;
    int isSnowing=1;

    printf("%d\n", (isSunday&&isSnowing));

    // if it's monday or raining - true
    int isMonday=0;
    int isRaining = 0;

    printf("%d\n", isMonday || isRaining);

    // if a number is greater than 9 and less than 100

    int num;
    printf("Enter your number\n");
    scanf("%d", &num);

    printf("%d", num>9 && num<100);

}