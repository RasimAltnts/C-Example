#include <stdio.h>

void takas(int *,int *);

int main () {
    int a,b;

    a=22;
    b=33;
    printf("Takas Öncesi : a=%d    b=%d\n",a,b);
    takas(&a,&b);
    printf("takas sonrası : a=%d   b=%d\n",a,b);
    return 0;
}

void takas(int *x,int *y){
    int z;
    z =*x;
    *x=*y;
    *y=z;
    
}


