#include <stdio.h>
int kuvvetHesapla(int sayi,int kuvvet);
int sayi,kuvvet;


int main () {
    printf("Lütfen Sayıyı Giriniz:");
    scanf("%d",&sayi);
    printf("Lütfen Kuvveti Giriniz:");
    scanf("%d",&kuvvet);

    printf("Sonuc = %d",kuvvetHesapla(sayi,kuvvet));

    return 0;
}

int kuvvetHesapla(int sayi,int kuvvet){
    int i;
    int sonuc=1;
    for (i=0;i<kuvvet;i++){
        sonuc *= sayi;

    }

    return sonuc;
}


