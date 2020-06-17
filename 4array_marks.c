#include <stdio.h>
int main()
{ int first_value[6]= {50,60,85,75,95,100};
    int second_value[6]={ 45,95,85,62,65,85};
    int final_value[6]={100,95,85,96,92,78};
    int i;
    double total_marks [6];
    for(i=0;i<6;i++){
        total_marks[i]= first_value[i]/4.0+ second_value[i]/4.0+ final_value[i]/2.0;
        }
        for(i=1;i<=6;i++){
        printf("Roll Number: %d\t total marks is : %0.1lf\n", i,total_marks[i-1]);
    }
    return 0;

}
