#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

#define Kirmizi  "\x1B[31m"
#define Beyaz  "\x1B[37m"


int main (int argumansayisi,char *argvek[]) {

    if(argumansayisi<3){
        printf("Eksik Parametre Girdiniz!");
        exit(1);
    }

    if (argumansayisi>3){
        printf("Fazla Parametre Girdiniz!");
        exit(1);
    }

    int toplam=0;
    toplam=atoi(argvek[1])+atoi(argvek[2]);
    printf("%s",Kirmizi);
    printf("Toplam = %d",toplam);
    printf("\n");
    printf("%s",Beyaz);
    return 0;
}

int minBul(int n,...){


}
