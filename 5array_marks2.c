#include <stdio.h>
int main()
{
    double total_marks[6]={ 56,56,58,55,57,55};
    int i, marks, count;
    for(marks=50; marks<=60; marks++){
        count=0;
        for(i=0; i<6;i++){
            if( total_marks[i]== marks){
                count++;
            }
        }
                printf("Marks: %d\t Count:%d\n", marks, count);
            }

            return 0;
        }
