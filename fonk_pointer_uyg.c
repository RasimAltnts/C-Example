#include <stdio.h>

int faktoriyelHesapla(int);



int main () {
    int sayi = 0;
    int (*fonkPtr)(int);

    fonkPtr = faktoriyelHesapla;
    printf("Faktoriyeli Bulunacak Sayı:");
    scanf("%d",&sayi);

    int faktoriyel = (*fonkPtr)(sayi);

    printf("%d\n",faktoriyel);
    return 0;


}

int faktoriyelHesapla(int sayi){

    int sonuc = 1;
    if (sayi < 0)
        return sonuc;

    int i;
    for (i = sayi; i >=1 ; i--) {
        sonuc = sonuc*i;

    }

    return sonuc;
}
