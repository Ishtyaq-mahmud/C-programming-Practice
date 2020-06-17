#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num1;
    double num2,value;
    printf(" enter the number: ");
    scanf("%d", &num1);
    printf("enter the another number: ");
    scanf("%lf",&num2);

    value=num1+num2;

    printf("%d+%f=%0.2lf\n", num1, num2, value);
    return 0;
}

