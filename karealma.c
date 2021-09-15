#include <stdio.h>
#define Kirmizi  "\x1B[31m"
#define Turkuaz  "\x1B[36m"


int main() {

    float sayi1;
    float sonuc;


    for (sonuc;sonuc<999999; ) {


        printf("\n%sLütfen Sayıyı Giriniz:",Turkuaz);
        scanf("%f", &sayi1);


        sonuc = sayi1 * sayi1;

        printf("\n%sİşleminizi Sonucu : %f",sonuc,Kirmizi);


    }


}
