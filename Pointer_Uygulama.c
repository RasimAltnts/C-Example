#include <stdio.h>
#include <stdlib.h>


void f1(int );
void f2(int *);


int main () {

    int x = 55;
    int *p=&x;
    printf("X in Pointer Adresi:%p\n",p);
    printf("x in degeri,\n");
    printf("Foksiyonlar Çagırılmadan Önde : %d\n",x);
    f1(x);
    printf("f1 cagırıldıktan sonra      :%d\n",x);
    f2(&x);
    printf("f2 cagırıldıktan sonra      :%d\n",x);

    return 0;

}

void f1(int n) {
    n = 66;
    printf("f1 fonksiyonu içinde      :%d\n",n);
}

void f2(int *n){
    *n = 77;
    printf("f2 fonksiyonu içinde      :%d\n",*n);
}





