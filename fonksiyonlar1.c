#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int topla(int x, int y);

int main () {
    int a;
    a = topla(5,6);
    printf("%d",a);
    printf("\n%d",topla(12,10));
    return 0;
}


int topla(int x, int y) {
    int sonuc;
    sonuc = x + y;

    return sonuc;
}


