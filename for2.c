#include <stdio.h>

int main () {

    int id1, id2, id3=0, id4=0;

    for (id1=1;id1<10;id1++) {

        printf("%d Sayıyı Giriniz:",id1);
        scanf("%d",&id2);

        if (id2 == id1 * id1){

            printf("\nCevabınız Dogrudur");
            id3++;

        }

        else{

            printf("\nCevabınız Yanlıştır");
            printf("\nDogru Cevap %d sayısıdır",id1 * id1);
            id4++;

        }
    }

    printf("\n Dogru Cevap Sayısı :%d yanlış Cevap Sayısı:%d",id3,id4);
    

}


