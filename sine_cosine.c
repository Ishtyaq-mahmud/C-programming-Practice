#include <stdio.h>
#include <math.h>

int main()
{
    double value;
    double result, result1;

    value = 0.5;
    result = sin(value);
    result1 = cos(value);

    printf("The Sine of %f is %f\n", value, result);
    printf("The cosine of %f is %f\n", value, result1);

    return 0;
}
