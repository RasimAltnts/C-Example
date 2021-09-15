//
// Created by rasim on 22.02.2018.
//

#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define Normal  "\x1B[0m"
#define Kirmizi  "\x1B[31m"
#define Yesil  "\x1B[32m"
#define Sari  "\x1B[33m"
#define Mavi  "\x1B[34m"
#define Magenta  "\x1B[35m"
#define Turkuaz  "\x1B[36m"
#define Beyaz  "\x1B[37m"




int main() {


    int sayi1;

    printf("%s |---------------------------------------------------------- |\n",Kirmizi);
    printf("%s |Alan Hesapama Sistemini Kullandıgınız İçin Teşekkür Ederiz |\n",Turkuaz);
    printf("%s |Lütfen Üçgen İçin 1                                        |\n",Turkuaz);
    printf("%s |Lütfen Kare İçin 2                                         |\n",Turkuaz);
    printf("%s |Lütfen Daire İçin 3                                        |\n",Turkuaz);
    printf("%s |Lütfen Dikdörtgen İçin 4                                   |\n",Turkuaz);
    printf("%s |Lütfen Altıgen İçin 5                                      |\n",Turkuaz);
    printf("%s |-----------------------------------------------------------|\n",Kirmizi);
    printf("%s Lütfen Seceginizi Giriniz:",Sari);
    scanf("%d", &sayi1);


    if (sayi1 == 1) {

        float taban;
        float yukseklik;
        float ucgen;

        printf("\n %s Lütfen Taban Kenar Uzunlugunu Giriniz:",Mavi);
        scanf("%f", &taban);
        printf("\n %s Lütfen Yuksekligi Giriniz:",Mavi);
        scanf("%f", &yukseklik);

        ucgen = taban * yukseklik / 2;

        printf("\n %s Ucgenin Alanı: %f",Yesil,ucgen);
        printf("\n");

        return 0;




    }

    else if (sayi1==2)  {

        int kare_kenar;
        int kare_alan;

        printf("\n %s Lütfen Karenin Bir Kenarını Giriniz:",Magenta);
        scanf("%d",&kare_kenar);

        kare_alan = kare_kenar * kare_kenar;

        printf("\n %s Karenin Alanı: %d",Yesil,kare_alan);
        printf("\n");

        return 0;

    }


    else if (sayi1==3)  {

        int daire_yaricap;
        float daire_alan;

        printf("\n %s Lütfen Dairenin Yarıcapını Giriniz:",Magenta);
        scanf("%d",&daire_yaricap);

        daire_alan = PI * daire_yaricap * daire_yaricap;

        printf("\n %s Dairenin Alanı: %f",Kirmizi,daire_alan);
        printf("\n");

        return 0;

    }


    else if (sayi1==4) {

        int kisa_kenar;
        int uzun_kenar;
        int dik_alan;

        printf("\n %s Lütfen Kısa Kenar Uzunlugu Giriniz:",Mavi);
        scanf("%d",&kisa_kenar);

        printf("\n %s Lütfen Uzun Kenar Uzunlugu Giriniz:",Mavi);
        scanf("%d",&uzun_kenar);

        dik_alan = uzun_kenar * kisa_kenar;

        printf("\n %s Dikdörtgenin Alanı: %d ",Kirmizi,dik_alan);
        printf("\n");

        return 0;

    }



    else if (sayi1==5) {



        int alti_kenar;
        float alti_alan;


        printf("\n %s  Lütfen Altıgenin Kenar Uzunlugu Giriniz:",Beyaz);
        scanf("%d",&alti_kenar);

        alti_alan = 6 * ((alti_kenar * alti_kenar * 1.732050808 ) /4);

        printf("\n %s Altıgenin Alanı: %f",Kirmizi,alti_alan);

        printf("\n");

        return 0;


    }


    else
        printf("\nYanlış Secenek Girdiniz!! ");
    printf("Lütfen Tekrar Deneyiniz..\n");











}
