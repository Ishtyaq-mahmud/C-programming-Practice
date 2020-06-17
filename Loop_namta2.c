
#include<stdio.h>

int main(void)
{ int repeat=0;
    printf(" How strong is your love? : ");
    scanf("%d",&repeat);
    printf(" I love my family", repeat);
    while(repeat>0){
        printf(" very\n", repeat--);

    }
    printf(" much");

return 0;
}
