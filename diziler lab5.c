#include <stdio.h>

int main () {

    int matris[3][4] = {19,3,15,7,11,9,13,5,17,1,3,6};

    int i,j;

    for (i = 0; i <3 ; ++i) {
        for (j = 0; j <4 ; ++j) {

            printf("%3d",matris[i][j]);



        }

        printf("\n");

    }


    return 0;
}
