#include <stdio.h>
#include <stdlib.h>

int main ()  {

    int i;
    int buyuk_sayi;
    int kucuk_sayi;
    int toplam =0;



    printf("Küçük Olan Degeri Giriniz:");
    scanf("%d",&kucuk_sayi);

    printf("Büyük Olan Sayıyı Giriniz:");
    scanf("%d",&buyuk_sayi);



    for (i=kucuk_sayi;i<=buyuk_sayi;i++) {

        toplam+=i;

        printf("i= %d toplam %d\n",i,toplam);

    }

    return 0;

}
