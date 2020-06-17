#include <stdio.h>

int main()
{ int
    n=0;
    while( n<20){
        n=n+1;
        if(n%2==0){
            continue;
        }
        printf("The odd number is= %d\n", n);

    }
   return 0;

}
