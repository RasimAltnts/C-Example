#include <stdio.h>

int main () {

    int matris[2][3] = {1,2,3,4,5,6};
    int matris_1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int carpim_matris[2][4] = {};
    int i,j,k,toplam;

    for (i = 0; i <2 ; i++) {
        for (j = 0; j < 4; j++) {

            toplam = 0;

            for (k = 0; k<3 ; k++) {

                toplam+=matris[i][k]*matris_1[k][j];

            }

            carpim_matris[i][j]=toplam;

            printf("%4d",carpim_matris[i][j]);
        }

        printf("\n");

    }


    return 0;
}
