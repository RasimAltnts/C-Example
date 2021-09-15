#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

void mesaj();
void mesaj2();


int main () {

    mesaj();
    printf("\n");
    mesaj2();
    //printf("ASDasd");

    return 0;

}


void mesaj() {

    printf("Hoşgeldiniz!");
}

void mesaj2() {

    printf("Giriş Yapılıyor!");
}


