#include <stdio.h>

int topla(int dizi[],int eleman_Sayisi);

int main () {
    int n;
    int i;

    int dizi[n];
    printf("Dizinin Eleman Sayısını Giriniz:");
    scanf("%d",&n);
    for (i = 0; i <n ; ++i) {
        printf("Dizinin %d elemanı giriniz:",i+1);
        scanf("%d",&dizi[i]);
        printf("\n");

    }

    printf("Dizideki Elemanların Toplamı = %d",topla(dizi,n));

    return 0;
}


int topla(int dizi[],int eleman_Sayisi){

    int topla_sonuc=0,i;

    for (i = 0; i < eleman_Sayisi ; ++i) {
        topla_sonuc += dizi[i];
    }

    return topla_sonuc;
}


