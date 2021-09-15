#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    srand(time(NULL));

    unsigned int sayi1 = rand();
    unsigned int sayi2 = rand();
    unsigned int sayi3 = rand();

    printf("[sayi1=%u, sayi2=%u, sayi3=%u]",sayi1,sayi2,sayi3);

    return 0;
}
