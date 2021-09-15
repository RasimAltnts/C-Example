#include <stdio.h>
#include <stdlib.h>

int main () {

    int i;

    int dizi[5]={};

    for(i=0;i<5;i++)
    {

        printf("Lütfen Dizinin %d degeri giriniz:",i);
        scanf("%d",&dizi[i]);
    }

    printf("\n------------------------\n");

    for (i=0;i<5;i++) {
        printf("%d",dizi[i]);
        printf("\t");

    }
    printf("\n----------------------------\n");


    for (i=0;i<5;i++) {

        if (dizi[i] % 2 == 0)
            printf("%d ÇİFT SAYIDIR\n",dizi[i]);

        else
            printf("%d TEK SAYIDIR\n",dizi[i]);

    }


    return 0;
}
