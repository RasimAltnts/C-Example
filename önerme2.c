#include <stdio.h>
#include <stdlib.h>


int main (){

    int x;
    printf("Bir sayı Giriniz:=");
    scanf("%d",&x);

    if (x>0) {

        printf("%d sayısı Pozitiftir",x);


    }

    else if (x<0){

        printf("%d sayısı negatiftir",x);

    }

    else {

        printf("%d sayisi 0 a eşittir",x);
    }}

