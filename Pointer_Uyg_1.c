#include <stdio.h>

double *maxAdr(double a[], int boyut){

    double ebd = a[0];
    double *eba = &a[0];

    int i;

    for (i = 1; i < boyut ; ++i) {
        if (a[i] > ebd){
            ebd = a[i];
            eba = &a[i];

        }

    }

    return eba;
}


int main () {

    double x[6] = {1.1,3.3,7.1,5.4,0.2,-1.5};
    double *p;
    int k;

    for (k = 0; k <6 ; ++k) {
        printf("%d %1f %p\n",k,x[k],&x[k]);
    }
    printf("---------------------\n");

    p = maxAdr(x,6);

    printf("En Büyük Deger : %1f\n",*p);
    printf("En Büyük Adres : %p\n",p);
    printf("En Büyük Konum : %d\n",(int)(p-&x[0]));
    return 0;
}
