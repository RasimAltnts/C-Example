#include <stdio.h>
#include <stdlib.h>

int main ()  {

    int i,sayi,faktoriyel=1;

    printf("Sayıyı Giriniz:");
    scanf("%d",&sayi);

    for(i=1;i<=sayi;i++) {

        faktoriyel*=i;

    }

    printf("%d sayısının faktoriyeli = %d",sayi,faktoriyel);

    return 0;

}
