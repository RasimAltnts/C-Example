#include <stdio.h>

int main () {

    int i;
    int toplam;

    float dizi[10] = {15.5,23,5,13,31.5,32,1.5,22.5,32,15};

    for (i = 0; i<10 ; i++) {

        toplam+=dizi[i];

    }


    printf("%d",toplam);

    return 0;

}
