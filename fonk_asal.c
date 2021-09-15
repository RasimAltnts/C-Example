#include <stdio.h>

int asalSayiMi(int sayi);
int sayi;

int main () {
    printf("Lütfen Sayıyı Giriniz:");
    scanf("%d",&sayi);

    int sonuc = asalSayiMi(sayi);

    if (sonuc == 1)
        printf("%d sayıyısı asaldır",sayi);
    else
        printf("%d sayısı asal degildir",sayi);

    return 0;
}


int asalSayiMi(int sayi){
    int i = 0;

    for (i = 2; i < sayi; i++) {
        if (sayi%i==0)
            return 0;
    }


    if (sayi == i)
        return 1;
}
