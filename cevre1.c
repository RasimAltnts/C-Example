#include<stdio.h>
#define PI 3.14

int main ()
{

int yaricap;
float cevre;

printf("\nYarıcap Giriniz:");
scanf("%d", &yaricap);
cevre = 2 * PI * yaricap;

printf("Dairenin Çevresi;%.2f\n", cevre);

return 0;



}
