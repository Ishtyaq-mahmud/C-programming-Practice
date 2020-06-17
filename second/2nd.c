#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2,sum;
    printf(" enter the number: ");
    scanf("%d", &num1);
    printf("enter the another number: ");
    scanf("%d",&num2);

    sum=num1+num2;
    printf("%d+%d=%d\n", num1, num2, sum);
    return 0;
}
