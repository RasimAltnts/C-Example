#include <stdio.h>

int main () {

    int i;
    int j;
    int matris[3][3]={};
    int satrtoplam=0;
    int stntoplam=0;

    for (i=0;i<3;i++) {
        for (j = 0; j <3 ; j++) {

            printf("%d x %d elemanı giriniz:",i+1,j+1);
            scanf("%d",&matris[i][j]);
        }
    }

    for (i = 0;  i<3 ; ++i) {
        for (j = 0; j <3 ; j++) {

            satrtoplam+=matris[i][j];

        }

        printf("%d.satırın toplamı=%d",i,satrtoplam);
        printf("\n--------------------------------\n");
        satrtoplam=0;

    }


    for (i = 0; i <3 ; ++i) {
        for (j = 0; j <3 ; ++j) {

            stntoplam+=matris[j][i];



        }
        printf("\n---------------------------------\n");
        printf("%d.sutunun toplamı =%d",i,stntoplam);
        stntoplam=0;
    }


}
