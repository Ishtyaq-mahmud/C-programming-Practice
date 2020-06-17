#include <stdio.h>
int main()
{ int ara[]= {1,2,3,4,5,6};
    int i,j, temp;
    for(i=0, j=5; i<6; i++,j--){
        temp= ara[j];
        ara[j]=ara[i];
        ara[i]=temp;
    }
    for(i=0;i<6;i++){
        printf("%d\n",temp--);
    }
    return 0;
    }


