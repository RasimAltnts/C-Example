#include <stdlib.h>
#include <stdio.h>

int main() {

    int x;


    printf("Notunuzu Giriniz:");
    scanf("%d",&x);

    if (x<=100 && x>=90) {

        printf("%d notunu karşılıgı = AA",x);

    }


    else if (x<=89 && x>=80)  {

        printf("%d notunun karşıgı=BB",x);

    }

    else if (x<=79 && x>=70) {

        printf("%d notunun karşıgı = CC",x);


    }

    else if (x<=69 && x>=60) {

        printf("%d Notunun Karışıgı = DD",x);


    }


    else if (x<=59 && x>=0) {

        printf("%d Notu Karşılıgı= FF",x);
        printf("\nKaldınız");

    }

    else {


        printf("Girilen Nıot Aralıkta Degil");
    }


}
