#include<stdio.h>

int main(void)
{ int value=0;
    printf(" How strong is your love? : "); // enter 1-4 numbers//
    scanf("%d",&value);

    if(5>=value>=1){
        printf(" I love you", value);
    }
    else
    printf(" F**k you"); // Enter the value 0//

return 0;
}
