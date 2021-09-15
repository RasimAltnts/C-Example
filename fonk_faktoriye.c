#include <stdio.h>


long faktoriyelHesaplaRecursif(long sayi);
long faktoriyelHesaplaalternatif(long sayi);

int main (int argc , char *argv[]) {

    int i;

    printf("Dongu Yontemiyle ilk 10 sayının Faktoriyeli\n");
    for (i = 0; i < 10; ++i) {
        printf("%d!=%d" , i, faktoriyelHesaplaRecursif(i));
        printf("\n");
    }

    printf("\nÖzyineleme ile faktoriyel ilk 10 sayının faktoriyeli\n");
    for (i = 0; i < 10; ++i) {
        printf("%d!=%d", i, faktoriyelHesaplaRecursif(i));
        printf("\n");
    }
}




long faktoriyelHesaplaalternatif(long sayi){

    if (sayi == 0 || sayi == 1)
        return 1;

    long i,sonuc=1;

    for (i = 0; i <10 ; ++i) {
        sonuc *=i;

        return sonuc;

    }



}




long faktoriyelHesaplaRecursif(long sayi) {

    if (sayi == 1 || sayi ==0)
        return 1;

    long sonuc = sayi * faktoriyelHesaplaRecursif(sayi-1);
    return sonuc;
}



