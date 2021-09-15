#include <stdio.h>

int bol(int, int);
int obeb_bul(int,int);
int okek_bul(int, int);

int main () {
    int sayi1,sayi2;

    printf("İlk Sayıyı Giriniz:");
    scanf("%d",&sayi1);
    printf("İkinici Sayıyı Giriniz:");
    scanf("%d",&sayi2);

    int obeb = obeb_bul(sayi1,sayi2);
    int okek = okek_bul(sayi1,sayi2);

    printf("OBEB (%d,%d)=%d\n",sayi1,sayi2,obeb);
    printf("OKEK (%d,%d)=%d\n",sayi1,sayi2,okek);
    return 0;

}

int bol (int bolunen,int bolen){

    if  ( bolunen % bolen == 0)
        return 1;
    else
        return 0;

}

int obeb_bul (int sayi1, int sayi2){

    int kucukSayi = sayi1;

    if (sayi2 < kucukSayi)
        kucukSayi = sayi2;

    int i;
    for (i = kucukSayi; 0 < i ; ++i) {

        if (bol(sayi1,i) == 1 && bol(sayi2,i) == 1 ) {

            return i;
        }

    }



}

int okek_bul(int sayi1 , int sayi2) {

    int buyukSayi = sayi1;
    int kucukSayi = sayi2;

    if (sayi2 < buyukSayi) {
        buyukSayi = sayi2;
        kucukSayi = sayi1;
    }

    if (bol(buyukSayi,kucukSayi))
        return buyukSayi;

    int i;

    for (i = buyukSayi*2;; i+=buyukSayi) {
         if (bol(i,sayi1) == 1 && bol(i,sayi2)==1){
             return i;
         }

    }



}
