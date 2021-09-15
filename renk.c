#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define Kirmizi  "\x1B[31m"


int main() {


    int sayi1;

    printf("---------------------------------------------------------- \n");
    printf(" %s Alan Hesapama Sistemini Kullandıgınız İçin Teşekkür Ederiz \n",Kirmizi);
    printf("Lütfen Üçgen İçin 1                                        \n");
    printf("Lütfen Kare İçin 2                                         \n");
    printf("Lütfen Daire İçin 3                                        \n");
    printf("Lütfen Dikdörtgen İçin 4                                   \n");
    printf("Lütfen Altıgen İçin 5                                      \n");
    printf("-----------------------------------------------------------\n");
    printf("Lütfen Seceginizi Giriniz:\n");
    scanf("%d", &sayi1);





    if (sayi1==1) {

        int taban;
        int yukseklik;
        int ucgen;

        printf("Lütfen Taban Kenar Uzunlugunu Giriniz:\n");
        scanf("%d", &taban);
        printf("Lütfen Yuksekligi Giriniz:\n");
        scanf("%d", &yukseklik);

        ucgen = taban * yukseklik / 2;

        printf("Ucgenin Alanı: %d",ucgen);

        return 0;




    }

    else if (sayi1==2)  {

        int kare_kenar;
        int kare_alan;

        printf("Lütfen Karenin Bir Kenarını Giriniz:\n");
        scanf("%d",&kare_kenar);

        kare_alan = kare_kenar * kare_kenar;

        printf("Karenin Alanı: %d",kare_alan);

        return 0;

    }


    else if (sayi1==3)  {

        int daire_yaricap;
        int daire_alan;

        printf("Lütfen Dairenin Yarıcapını Giriniz:\n");
        scanf("%d",&daire_yaricap);

        daire_alan = PI * daire_yaricap;

        printf("Dairenin Alanı: %d",daire_alan);

        return 0;

    }


    else if (sayi1==4) {

        int kisa_kenar;
        int uzun_kenar;
        int dik_alan;

        printf("Lütfen Kısa Kenar Uzunlugu Giriniz:\n");
        scanf("%d",&kisa_kenar);

        printf("Lütfen Uzun Kenar Uzunlugu Giriniz:\n");
        scanf("%d",&uzun_kenar);

        dik_alan = uzun_kenar * kisa_kenar;

        printf("Dikdörtgenin Alanı: %d",dik_alan);

        return 0;

    }



    else if (sayi1==5) {



        int alti_kenar;
        int alti_alan;

        printf("Lütfen Altıgenin Kenar Uzunlugu Giriniz:\n");
        scanf("%d",&alti_kenar);

        alti_alan = 6 * alti_kenar * alti_kenar * 3^1/2 /4;

        printf("Altıgenin Alanı: %d",alti_alan);

        return 0;


    }


    
}
