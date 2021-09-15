#include <stdio.h>
#define Kirmizi  "\x1B[31m"
#define Turkuaz  "\x1B[36m"
#define PI 3.14

int main() {

    int secenek;
    float yukseklik;
    float taban;
    float ucgen_alan;
    float kare_kenar;
    float kare_alan;
    float yaricap;
    float daire_alan;
    float kisa_kenar;
    float uzun_kenar;
    float dik_alan;
    float alti_kenar;
    float alti_alan;



    printf("%s |---------------------------------------------------------- |\n",Kirmizi);
    printf("%s |Alan Hesapama Sistemini Kullandıgınız İçin Teşekkür Ederiz |\n",Turkuaz);
    printf("%s |Lütfen Üçgen İçin 1                                        |\n",Turkuaz);
    printf("%s |Lütfen Kare İçin 2                                         |\n",Turkuaz);
    printf("%s |Lütfen Daire İçin 3                                        |\n",Turkuaz);
    printf("%s |Lütfen Dikdörtgen İçin 4                                   |\n",Turkuaz);
    printf("%s |Lütfen Altıgen İçin 5                                      |\n",Turkuaz);
    printf("%s |-----------------------------------------------------------|\n",Kirmizi);
    printf("%s Lütfen Seceginizi Giriniz:",Kirmizi);
    scanf("%d", &secenek);



    for(secenek;secenek<4;){

        //printf("%s Lütfen Seceginizi Giriniz:",Kirmizi);
        //scanf("%d", &secenek);

        switch (secenek) {

            case 1:

                printf("\nÜçgenin Yüksekligini Giriniz:");
                scanf("%f",&yukseklik);

                printf("\nÜçgenin Tabanın Giriniz");
                scanf("%f",&taban);

                ucgen_alan = taban * yukseklik / 2;

                printf("\nÜçgenin Alanı : %f",ucgen_alan);

                break;



            case 2:

                printf("\nKarenin Kenar Uzunlugu Giriniz:");
                scanf("%f",&kare_kenar);
                kare_alan = kare_kenar * kare_kenar;
                printf("\nKarenin Alanı : %f",kare_alan);
                break;


            case 3:



                printf("\nDairenin Yarıcapını Giriniz:");
                scanf("%f",&yaricap);

                daire_alan = PI * yaricap *yaricap;

                printf("\nDairenin Alanı : %f",daire_alan);

                break;


            case 4:



                printf("\nKisa Kenar Uzunlugunu Giriniz:");
                scanf("%f",&kisa_kenar);

                printf("\nUzun Kenar Uzunlugunu Giriniz:");
                scanf("%f",&uzun_kenar);

                dik_alan = kisa_kenar * uzun_kenar;

                printf("\nDikdörtgenin Alanı:%f",dik_alan);

                break;


            case 5:




                printf("\n Lütfen Altıgenin Kenar Uzunlugu Giriniz:");
                scanf("%f",&alti_kenar);

                alti_alan = 6 * ((alti_kenar * alti_kenar * 1.732050808 ) /4);
                printf("\nAltıgenin Alanı: %f",alti_alan);
                printf("\n");

                break;

            default:
                printf("\n%sYanlış Secenek Girdiniz:",Kirmizi);





        }


        printf("\n%sSecenegi Giriniz:",Kirmizi);
        scanf("%d",&secenek);



    }


}
