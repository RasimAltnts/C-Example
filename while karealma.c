#include <stdio.h>

int main () {

    int i=1;

    while (i!=0) {

        printf("Sayıyı Giriniz:");
        scanf("%d",&i);
        printf("%d sayısını karesi = %d\n",i,i*i);
        printf("-------------------------------\n");
    }

    return 0;

}
