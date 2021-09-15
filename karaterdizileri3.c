#include <stdio.h>
#include <stdlib.h>

int main () {

    int i;
    int j;
    char dizi2[10];
    printf("bir kelime giriniz");
    gets(dizi2);

    for (i = 0; i <10 ; ++i) {

        printf("%c",dizi2[i]);
        printf("\n");


    }

    return 0;

}
