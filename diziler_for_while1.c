#include <stdlib.h>
#include <stdio.h>

int main () {

    int tek_Sayilar[10] = {1,3,5,7,9,11,13,15,17,19};

    int i;

    for (i=0;i<10;i++) {

        printf("tekSayilar[%d] = %d\n",i,tek_Sayilar[i]);


    }


    int toplam = 0;
    i = 0;

    do {
        toplam +=tek_Sayilar[i];
        i++;

    }

    while (i<10) ;

        printf("Dizinin Toplam Elemanı : %d",toplam);
        return 0;

}
