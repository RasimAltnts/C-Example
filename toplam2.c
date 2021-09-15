#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int main (int degerler,char *degeler_1[]) {

    printf("\n----------------------\n");
    printf("|  HESAPLAMA PROGRAMI    |");
    printf("\n----------------------\n");

    if (degerler != 4 ){
        printf("Fazla Deger Girdiniz!");
        exit(1);

    }

    float sayi_1,sayi_2;
    char islem_tipi[2];
    sayi_1 = atof(degeler_1[1]);
    strcpy(islem_tipi,degeler_1[2]);
    sayi_2 = atof(degeler_1[3]);


    switch (islem_tipi)
        case '+':printf("İşleminizin Sonucu = %f",sayi_1+sayi_2);



}
