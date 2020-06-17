#include <stdio.h>
int main()
{ int ara[]= {1,2,3,4,5,6};
    int ara1[6];
    int i,j;
    for( i=0, j=5; i<6; i++, j--){
        ara1[j]=ara[i];
        }
        for( i=0; i<6; i++){
            ara[i]=ara1[i];
        }
        for( i=0; i<6; i++){
            printf("%d\n", ara1[i]);
            }
            return 0;


        }

