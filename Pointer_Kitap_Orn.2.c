#include <stdlib.h>
#include <stdio.h>

int main () {
    int sayi = 100;
    int *referans;

    referans = &sayi;
    int sayi2=*referans;
    *referans = 150;
    printf("%d",sayi);
    printf("\n");
    printf("%d",sayi2);

}
