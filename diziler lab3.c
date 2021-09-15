#include <stdio.h>

int main () {

    int dizi[10] = {};

    int i,j;

    for (i = 0; i <10 ; i++) {

        printf("%d indisteki elemanı giriniz:",i);
        scanf("%d",&dizi[i]);

        if (dizi[i] == 0) {
            break;
        }
    }

    for (j = 0; j <i ; j++) {

        printf("%d. indisteki eleman = %d \n",j,dizi[j]);
;
    }

    return 0;
}
