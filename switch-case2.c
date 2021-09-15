#include <stdio.h>

int main(int argc, const char * argv[]) {

    int gun = -1;
    printf("Lütfen Gun Degerini Giriniz Sayı Olarak [1-7] aralıgında giriniz:");
    scanf("%d",&gun);

    switch (gun) {

        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Hafta İçi \n");
            break;

        case 6:
        case 7:
            printf("Hafta Sonu\n");
            break;
        default:
            printf("Girilen Deger gecersiz!!!\n");
            break;
    }
    return 0;
}
