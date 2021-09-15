#include<stdio.h>
#include<math.h>


int ucgenalan(int h, int k)
{
int z;

z = h*k/2;

return z;
}

int main()
{

int kisa,yukseklik,alan;

printf("Kısa Kenar Uzunlugunu Giriniz:");
scanf("%d",&kisa);

printf("Yüksekligi Giriniz:");
scanf("%d",&yukseklik);

alan = ucgenalan(kisa,yukseklik);

printf("Üçgenin Alanı:%d",alan);

return 0;

}
