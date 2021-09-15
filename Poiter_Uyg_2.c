#include <stdio.h>

int main() {

    double dizi[10] = {1,2,3,4,5,6,7,8,9,10};

    double *ptr=dizi;

    int i;

    for (i = 0; i < 10 ; ++i) {
        printf("Dizinin %d indisindeki degerin Heximal Karşılıgı ----> %p",i,(ptr+i));
        printf("\n-----------------------------\n");

    }


    return 0;
}


