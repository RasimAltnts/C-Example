#include <stdio.h>

int main () {
    int tam=15;
    double ond=20.2;
    char krk='C';

    int *intPtr;
    double *doublePtr;
    char *charPtr;

    //int *intPtr;
    //double *doublePtr;
    // c/har *charPtr;

    intPtr = &tam;
    doublePtr = &ond;
    charPtr = &krk;

    printf("int degeri : %p",intPtr);//140727668528660(rastgele deger Heximal --> Decimal)
    printf("\ndouble degeri : %p",doublePtr);
    printf("\nchar degeri : %p",charPtr);

    printf("\n----------------------\n");

    intPtr+=2;
    doublePtr++;
    charPtr--;

    printf("int degeri : %p",intPtr);//140727668528668(int 4byte 4*2=8 olucagı için 8 byte ileri gitmiş hali)
    printf("\ndouble degeri : %p",doublePtr);
    printf("\nchar degeri : %p",charPtr);


    return 0;




}
