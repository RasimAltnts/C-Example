#include <stdio.h>
#include <stdlib.h>

#define pi 3.14


float cevreHesapla(float yaricap);
float alanHesapla(float yaricap);
float yaricap;



int main () {
    printf("Lütfen Yarıcapı Giriniz:");
    scanf("%f",&yaricap);

    printf("Dairenin Cevresi = %f",cevreHesapla(yaricap));
    printf("\n");
    printf("Dairenin Alanı = %f",alanHesapla(yaricap));
    return 0;
}



float cevreHesapla(float yaricap){
    float cevre = 2 * pi * yaricap;
    return cevre;
}


float alanHesapla(float yaricap){
    float alan = pi * yaricap * yaricap;
    return alan;
}
