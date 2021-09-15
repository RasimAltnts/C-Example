#include <stdio.h>
#define Kirmizi  "\x1B[31m"
#define Turkuaz  "\x1B[36m"
#define Normal  "\x1B[0m"

int main ()  {

    int secenek;
    int secenek_2;
    int secenek_3;
    int secenek_4;
    int secenek_5;
    int secenek_6;
    int secenek_7;
    int Gogus_Sira_1 = 0;
    int Gogus_Sira_2 = 0;
    int Genel_Cerrah_Sira_1 = 0;
    int Genel_Cerrah_Sira_2 = 0;
    int Beyin_Cerrah_Sira_1 = 0;
    int Beyin_Cerrah_Sira_2 = 0;
    int Kardiyoloji_Sira_1 = 0;
    int Kardiyoloji_Sira_2 = 0;
    int KBB_1=0;
    int KBB_2=0;
    int KBB_3=0;
    int Goz_Sira_1=0;
    int Goz_Sira_2=0;



    printf("Sıra Alma Sistemi\n");

    printf("%s |---------------------------------------------------------- |\n",Kirmizi);
    printf("%s |                  Sıra Alma Sistemi                        |\n",Turkuaz);
    printf("%s |                 Gögüs Bölümü İçin 1                       |\n",Turkuaz);
    printf("%s |                 Genel Cerrah İçin 2                       |\n",Turkuaz);
    printf("%s |                 Beyin Cerrahisi İçin 3                    |\n",Turkuaz);
    printf("%s |                 Kardiyoloji İçin 4                        |\n",Turkuaz);
    printf("%s |                 KBB için 5                                |\n",Turkuaz);
    printf("%s |                 Göz Sağlıgı İçin 6                        |\n",Turkuaz);
    printf("%s |-----------------------------------------------------------|\n",Kirmizi);
    printf("%s Lütfen Seceginizi Giriniz:",Kirmizi);
    scanf("%d", &secenek);

    for (secenek;secenek<=6;) {

        switch (secenek) {

            case 1:

                printf("\n%s--Gögüs Bölümü---",Normal);

                printf("\nDoktorunuzu Seçiniz:");
                printf("\nProf.Cengiz İçin 1");
                printf("\nDoç.Dr.Kamil İçin 2");
                printf("\nLütfen Seceneginizi Giriniz:");
                scanf("%d",&secenek_2);
                printf("\n\n---------------\n");

                if (secenek_2 == 1) {

                    Gogus_Sira_1 = Gogus_Sira_1 + 1;
                    printf("Sıra Numaranız = %d",Gogus_Sira_1);
                    printf("\n\n---------------\n");



                }

                else if (secenek_2 == 2) {

                    Gogus_Sira_2 = Gogus_Sira_2 + 1;

                    printf("Sıra Numaranız = %d",Gogus_Sira_2);
                    printf("\n\n---------------\n");




                }

                else {

                    printf("Yanlış Secenek Girdiniz");


                }

                break;


            case 2:

                printf("\n%s---Genel Cerrahi---",Normal);
                printf("\nLütfen Doktorunuzu Seçiniz:");

                printf("\nProf.Dr.Veysel için 1");
                printf("\nDoç.Dr.Arife için 2");
                printf("\nLütfen Seceneginizi Giriniz:");
                scanf("%d",&secenek_3);
                printf("\n\n-----------------\n");

                if (secenek_3 == 1) {

                    Genel_Cerrah_Sira_1 = Genel_Cerrah_Sira_1 + 1;

                    printf("Sıraniz = %d",Genel_Cerrah_Sira_1);
                    printf("\n\n---------------\n");




                }






                else if (secenek_3 == 2) {

                    Genel_Cerrah_Sira_2++;

                    printf("Sıranız = %d ",Genel_Cerrah_Sira_2);
                    printf("\n\n---------------\n");


                }

                else {

                    printf("Yanlış Secenek Girdiniz:");


                }


                break;

            case 3:
                printf("\n%s---Beyin Cerrahi",Normal);
                printf("\nLütfen Doktorunuzu Seçiniz:");

                printf("\nDoç.Dr.Fatma İçin 1");
                printf("\nDr.Yigit için 2");
                printf("\nLütfen Seceneginizi Giriniz:");
                scanf("%d",&secenek_4);
                printf("\n\n--------------\n");

                if (secenek_4 == 1) {

                    Beyin_Cerrah_Sira_1++;

                    printf("Sıraniz : %d ",Beyin_Cerrah_Sira_1);
                    printf("\n\n---------------\n");


                }


                else if (secenek_4 == 2) {


                    Beyin_Cerrah_Sira_2++;

                    printf("Sıranız:%d",Beyin_Cerrah_Sira_2);
                    printf("\n\n---------------\n");

                }

                else {

                    printf("Yanlış Secenek Girdiniz!");

                }

                break;


            case 4:

                printf("\n%s---Kardiyoloji---",Normal);

                printf("\nLütfen Doktorunuzu Seçiniz:");
                printf("\nProf.Dr.Kaan İçin 1");
                printf("\nDoç.Dr.Ayşe İçin 2");
                printf("\nLütfen Seceneginizi Giriniz:");
                scanf("%d",&secenek_5);
                printf("\n\n---------------\n");

                if (secenek_5 == 1) {

                    Kardiyoloji_Sira_1++;

                    printf("Sıranız:%d",Kardiyoloji_Sira_1);
                    printf("\n\n---------------\n");
                }


                else if (secenek_5 == 2) {

                    Kardiyoloji_Sira_2++;

                    printf("Sıranız:%d",Kardiyoloji_Sira_2);
                    printf("\n\n---------------\n");
                }

                else {

                    printf("Yanlış Secenek Girdiniz");
                }

                break;


            case 5:

                printf("\n%s ------KBB-------",Normal);
                printf("\nLütfen Doktorunuzu Seçiniz");
                printf("\nProf.Dr.Aslı için 1");
                printf("\nProf.Dr.Kartal İçin 2");
                printf("\nDr.Adem için 3");
                printf("\nLütfen Seceneginizi Giriniz:");
                scanf("%d",&secenek_6);
                printf("\n\n----------------\n");

                if (secenek_6 == 1) {

                    KBB_1;

                    printf("Sıranız = %d",KBB_1);
                    printf("\n----------------\n");




                }


                else if (secenek_6 == 2) {

                    KBB_2++;

                    printf("Sıranız = %d",KBB_2);
                    printf("\n-----------------\n");
                }


                else if (secenek_6 == 3 ) {

                    KBB_3++;
                    printf("Sıranız = %d",KBB_3);
                    printf("\n-----------------\n");
                }



                else {


                    printf("Yanlış Secenek Girdiniz:");
                    printf("\n-----------------------\n");
                }

                break;


            case 6:

                printf("\n%s---Göz----",Normal);

                printf("Lütfen Doktorunuzu Seçiniz:");
                printf("\nProf.Dr.Ahmet İçin 1");
                printf("\nProf.Dr.Cenk İçin 2");
                printf("\nLütfen Seceneginizi Giriniz:");
                scanf("%d",&secenek_7);
                printf("\n\n----------------\n");

                if (secenek_7==1 && Goz_Sira_1<100) {

                    Goz_Sira_1++;
                    printf("Sıranız:%d",Goz_Sira_1);
                    printf("\n\n---------------\n");

                }


                else if (secenek_7==2 && Goz_Sira_2 < 100){

                    Goz_Sira_2++;
                    printf("\nSiranız:%d",Goz_Sira_2);
                    printf("\n\n---------------\n");

                }


                else {

                    printf("Doktor Dolu!!");
                    printf("Diger Doktorları Deneyiniz:");
                }


                break;









        }



        printf("\nSıra Alma Sistemi\n");

        printf("%s |---------------------------------------------------------- |\n",Kirmizi);
        printf("%s |                  Sıra Alma Sistemi                        |\n",Turkuaz);
        printf("%s |                 Gögüs Bölümü İçin 1                       |\n",Turkuaz);
        printf("%s |                 Genel Cerrah İçin 2                       |\n",Turkuaz);
        printf("%s |                 Beyin Cerrahisi İçin 3                    |\n",Turkuaz);
        printf("%s |                 Kardiyoloji İçin 4                        |\n",Turkuaz);
        printf("%s |                 KBB için 5                                |\n",Turkuaz);
        printf("%s |                 Göz Sağlıgı İçin 6                        |\n",Turkuaz);
        printf("%s |-----------------------------------------------------------|\n",Kirmizi);
        printf("%s Lütfen Seceginizi Giriniz:",Kirmizi);
        scanf("%d", &secenek);


    }








}







