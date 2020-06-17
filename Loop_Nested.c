#include <stdio.h>
int main() {
int a, b, c, e;
    for (a = 1; a <= 4; a++) {
        for (b = 1; b <= 4; b++) {
        if (b != a) {
            for (c = 1; c <= 4; c++) {
                if (c != b && c != a){
                    for (e = 1; e <= 4; e++) {
                        if (e != a && e != b && e !=c){

            printf ("%d, %d, %d, %d\n", a, b, c, e);}
    }
    }
    }
    }
    }
    }
return 0;
}



