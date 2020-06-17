
#include <stdio.h>
int main() {
    int i, n, x1=0, x2=1, next_terms;
    printf( " Enter the number of terms: ");
    scanf("%d", &n );
     printf("Fibonacci Series:\n");

    for( i=0; i<=n;++i){
        printf("%d\n" , x1);
        next_terms=x1+x2;
        x1=x2;
        x2= next_terms;
    }

    return 0;
}
