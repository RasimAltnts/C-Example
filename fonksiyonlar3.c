#include <stdio.h>

char harfnotu(int x);

int main () {

    int notdeger;
    printf("Not Degerini Giriniz:");
    scanf("%d",&notdeger);
    printf("\nNotunuz= %c",harfnotu(notdeger));

    return 0;
}


char harfnotu(int x) {

    if (x >= 0 && x < 50) { return 'F'; }
    else if (x >= 50 && x < 70) { return 'D'; }
    else if (x >= 70 && x < 80) { return 'C'; }
    else if (x >= 80 && x < 90) { return 'B'; }
    else if (x >= 90 && x <= 100) { return 'A'; }

    else { return 'E';}
}

