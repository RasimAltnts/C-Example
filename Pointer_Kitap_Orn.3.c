#include <stdio.h>

int main () {

    int dizi[10] = {1,2,3,4,5,6,7,8,9,10};

    int *ptr = &dizi[0];
    int *ptr2=dizi;

    int i;

    printf("Dizinin 1. elemanı : %d\n", dizi[0]);
    printf("Dizinin 1. elemanı : %d\n", *ptr);
    printf("Dizinin 1. elemanı : %d\n", *ptr2);

    printf("\n--------------------------------------\n");

    printf("Dizinin 4. elemanı : %d\n", dizi[4]);
    printf("Dizinin 4. elemanı : %d\n", *ptr+4);
    printf("Dizinin 4. elemanı : %d\n", *ptr2+4);

    printf("\n-----------------------------------------------\n");

    printf("Dizinin 8. elemanı : %d\n", dizi[8]);
    printf("Dizinin 8. elemanı : %d\n", *ptr+8);
    printf("Dizinin 8. elemanı : %d\n", *ptr2+8);


    printf("\n------------------------------------------------\n");


    for (i = 0; i <10 ; ++i) {

        printf("dizi[%d] -> adresi %p, degeri : %d\n",i,ptr+i,*(ptr+i));

    }




}
