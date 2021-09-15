#include <stdio.h>

int main () {

    int matris[3][4] = {19,3,15,7,11,9,13,5,17,1,3,6};
    int matris_1[3][4] = {19,3,15,7,11,9,13,5,17,1,3,6};
    int toplam_matris[3][4] = {};
    int i,j;

    for (i = 0; i <3 ; ++i) {
        for (j = 0; j <4 ; ++j) {

            toplam_matris[i][j] = matris[i][j] + matris_1[i][j];

            printf("%3d",toplam_matris[i][j]);



        }

        printf("\n");

    }


    return 0;
}
