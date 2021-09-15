#include <stdio.h>

int main() {

    long int uzunTamsayi = 8888888;
    unsigned long int isaretsizUzunTamsayi= 5436756;
    long double uzunOndalikSayi= 123456.231;

    printf("UzunTamsayi[ld gösterimi]=%ld\n", uzunTamsayi);
    printf("uzunTamsayi [li gösterimi]=%ld\n", uzunTamsayi);

    printf("işaretsiz uzun Tamsayi [lu gösterimi] = %lu\n", isaretsizUzunTamsayi);

    printf("uzunondalıkSayi [Lf gösterimi]= %Lf\n",uzunOndalikSayi);
    printf("uzunOndalıksayi [Le] gösterimi = %Le\n",uzunOndalikSayi);
    printf("uzunOnsalıkSayi [LE] gösterimi= %LE\n",uzunOndalikSayi);

    return 0;

}
