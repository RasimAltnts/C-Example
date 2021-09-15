//
// Created by rasim on 22.02.2018.
//

#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main() {


    int sayi1;

    printf("|---------------------------------------------------------- |\n");
    printf("|Alan Hesapama Sistemini Kullandıgınız İçin Teşekkür Ederiz |\n");
    printf("|Lütfen Üçgen İçin 1                                        |\n");
    printf("|Lütfen Kare İçin 2                                         |\n");
    printf("|Lütfen Daire İçin 3                                        |\n");
    printf("|Lütfen Dikdörtgen İçin 4                                   |\n");
    printf("|Lütfen Altıgen İçin 5                                      |\n");
    printf("|-----------------------------------------------------------|\n");
    printf("Lütfen Seceginizi Giriniz:");
    scanf("%d", &sayi1);


    if (sayi1 == 1) {

        int taban;
        int yukseklik;
        int ucgen;

        printf("\nLütfen Taban Kenar Uzunlugunu Giriniz:");
        scanf("%d", &taban);
        printf("\nLütfen Yuksekligi Giriniz:");
        scanf("%d", &yukseklik);

        ucgen = taban * yukseklik / 2;

        printf("\nUcgenin Alanı: %d",ucgen);
        printf("\n");

        return 0;




    }

    else if (sayi1==2)  {

        int kare_kenar;
        int kare_alan;

        printf("\nLütfen Karenin Bir Kenarını Giriniz:");
        scanf("%d",&kare_kenar);

        kare_alan = kare_kenar * kare_kenar;

        printf("\nKarenin Alanı: %d",kare_alan);
        printf("\n");

        return 0;

    }


    else if (sayi1==3)  {

        int daire_yaricap;
        float daire_alan;

        printf("\nLütfen Dairenin Yarıcapını Giriniz:");
        scanf("%d",&daire_yaricap);

        daire_alan = PI * daire_yaricap * daire_yaricap;

        printf("\nDairenin Alanı: %f",daire_alan);
        printf("\n");

        return 0;

    }


    else if (sayi1==4) {

        int kisa_kenar;
        int uzun_kenar;
        int dik_alan;

        printf("\nLütfen Kısa Kenar Uzunlugu Giriniz:");
        scanf("%d",&kisa_kenar);

        printf("\nLütfen Uzun Kenar Uzunlugu Giriniz:");
        scanf("%d",&uzun_kenar);

        dik_alan = uzun_kenar * kisa_kenar;

        printf("\nDikdörtgenin Alanı: %d ",dik_alan);
        printf("\n");

        return 0;

    }



    else if (sayi1==5) {



        int alti_kenar;
        float alti_alan;


        printf("Lütfen Altıgenin Kenar Uzunlugu Giriniz:");
        scanf("%d",&alti_kenar);

        alti_alan = 6 * ((alti_kenar * alti_kenar * 1.732050808 ) /4);

        printf("\nAltıgenin Alanı: %f",alti_alan);

        printf("\n");

        return 0;


    }


    else
        printf("\nYanlış Secenek Girdiniz!! ");
        printf("Lütfen Tekrar Deneyiniz..\n");











}
