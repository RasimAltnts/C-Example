#include <stdio.h>
#define uzunluk 8

int main () {
    int dizi[uzunluk] = {1,2,3,4,5,6,7,8,};
    int *ptr=dizi;
    for (int i = 0; i <uzunluk ; ++i) {
        printf("Heximal adresi:%p",ptr+i);
        printf("----> degeri ---->");
        printf("%d",*(ptr+i));
        printf("\n");

    }
    return 0;
}
