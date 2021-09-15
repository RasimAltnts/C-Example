#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    srand(time(NULL));

    float bakiye = (float) (rand() % 2000);
    float cekilecek = 0;
    float limit = 2000;

    printf("Su anki Bakiyeniz %.2f\n",bakiye);
    printf("Lütfen Çekmek İstediginiz miktarı giriniz:");
    scanf("%f",&cekilecek);

    if (cekilecek <= bakiye && cekilecek <= limit) {

        bakiye = bakiye - cekilecek;
        printf("Cekilen para miktarı : %.2f\n",cekilecek);
        printf("Kalan Para Miktarı : %.2f\n",bakiye);

    }

    else {

        if (cekilecek > bakiye) {

            printf("Hesabınızda yeterli miktarda bakiye yok!\n");

        }

        else if (cekilecek > limit) {

            printf("Cekmek İstediginiz miktar, islem limitinizi asiyor!\n");

        }
    }

    printf("Program Sonlandı\n");

    return 0;
}
