#include <stdio.h>
#include <stdlib.h>

int main () {

    int tek_sayilar[5];
    int i;

    while (i < 5){

        printf("\nDizinin %d.elemanını giriniz:",i + 1);
        scanf("%d",&tek_sayilar[i]);

        if ((tek_sayilar[i] % 2)== 0 ) {

            printf("Lütfen Tek Sayı Giriniz");
            continue;

        }
        i++;
    }
    printf("\n--------------------------------\n");
    printf("Dizinin Elemanları\n");
    printf("------------------------------\n");

    for (i=0;i<5;i++) {

        printf("Tek Sayılar[%d]=%d\n",i,tek_sayilar[i]);

    }

    return 0;




}
