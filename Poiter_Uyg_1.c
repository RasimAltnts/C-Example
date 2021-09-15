#include <stdio.h>

int main () {

    int deger_1,*deger;
    int adim,*adim_1;

    printf("Lütfen Degeri Giriniz:");
    scanf("%d",&deger_1);

    deger = &deger_1;

    printf("\nDegişkenin Adresi:%p",deger);

    printf("\nAdım Sayısını Giriniz:");
    scanf("%d",&adim);

    adim_1 = &adim;

    deger+=adim;

    printf("\nAdım Sayısını Heximal Gösterimi:%p",adim_1);

    printf("\nDegişkenin Yeni Degeri:%p",deger);

}
