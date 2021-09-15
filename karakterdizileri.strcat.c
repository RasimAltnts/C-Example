#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int main () {

    char ad[15]="rasim";
    char soyad[15]="altuntas";
    puts(ad);
    puts(soyad);
    printf("birleştirdikten sonra\n");
    strcat(ad,soyad);
    puts(ad);
    //puts(soyad);


    return 0;

}
