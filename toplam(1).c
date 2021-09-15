#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main( int argc, char *arg[] )
{
    // Eger eksik arguman soz konusuysa,
    // program calismamalidir.
    if( argc < 4 ) {
        printf( "Hata: Eksik argüman!\n");
        exit(1);
    }

    float sayi_1, sayi_2;
    char islem_tipi[2];
    sayi_1 = atof( arg[1] );
    strcpy(	islem_tipi, arg[2] );
    sayi_2 = atof( arg[3] );

    // Verilen sembolun neye esit oldugu asagidaki
    // if-else if merdiveniyle saptaniyor.
    if( !strcmp( islem_tipi, "+" ) )
        printf( "Toplam: %.2f\n", sayi_1 + sayi_2 );
    else if( !strcmp( islem_tipi, "-" ) )
        printf( "Fark: %.2f\n", sayi_1 - sayi_2 );
    else
        printf( "Hatalı işlem!\n" );
    return 0;
}
