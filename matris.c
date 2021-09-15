#include <stdlib.h>
#include <stdio.h>

int main ()  {

    int a,b,j,i;

    printf("Matris Satir Sayisini Giriniz:");
    scanf("%d",&a);
    printf("Matrisin Sütün Sayısını Giriniz:");
    scanf("%d",&b);

    int Matris[a][b];

    for (i=0;i<a;i++) {
        for (j = 0; j < b; j++) {
            printf("%dx%d elemanın giriniz:", i + 1, j + 1);
            scanf("%d", &Matris[i][j]);
        }
    }

    for (i=0;i<a;i++) {
        for (j = 0; j < b; j++) {
            printf("%4d", Matris[i][j]);


        }
        printf("\n");

    }




}
