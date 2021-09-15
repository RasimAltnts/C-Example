#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main() {

    float sayi_1;
    float sayi_2;
    float sonuc;
    char isaret;


    printf("İlk Sayiyi giriniz:");
    scanf("%f",&sayi_1);

    printf("İkinci Sayiyi Giriniz:");
    scanf("%f",&sayi_2);

    printf("Yapilacak İşlemi seçini (+ - * / ) :");

    scanf("%c",&isaret);

    switch (isaret) {

        case +:
            sonuc = sayi_1 + sayi_2 ;
            printf("%f \n",sonuc);
            break;

        case -:
            sonuc = sayi_1 - sayi_2;
            printf("%f \n",sonuc);
            break;

        case *:
            sonuc = sayi_1 * sayi_2;
            printf("%f \n",sonuc);
            break;

        case /:
            sonuc = sayi_1 / sayi_2;
            printf("%f \n",sonuc);
            break;
        default:
            printf("Yanlış Secenek Girdiniz");
            printf("Tekrar Deneyiniz");
            break;

    }

    return 0;





}
