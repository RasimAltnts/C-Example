#include <stdio.h>
#include <string.h>

int main () {

    char str1[] = "Deneme";
    char str2[15],str3[15];
    int i;

    strcpy(str2,str1);

    for (i = 0; str1[i] ; ++i)
        str3[i] = str1[i];

    str3[i] = '\0';


    printf("str1 : %s\n",str1);
    printf("str2 : %s\n",str2);
    printf("str3 : %s\n",str3);

    return 0;

}
