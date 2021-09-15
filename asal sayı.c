#include <stdio.h>

int main () {
    int i,sayi;
    printf("Sayıyı Giriniz:");
    scanf("%d",&sayi);

    for (i=2;i<sayi;i++) {

        if (sayi%i==0) {

            printf("\n%d sayısı asal degildir",sayi);
            break;

        }


    }


    if (sayi==i) {

        printf("\nSayı Asaldır", sayi);

        return 0;

    }

}
