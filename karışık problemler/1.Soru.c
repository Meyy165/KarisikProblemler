/*int sayilar[]= { 1, 6, 5, 2, 1, 4, 2 }; dizisi için kullanýcý tarafýndan girilen sayýya denk gelen dizi içerisindeki sayýlarýn yerlerine -1 yerleþtiren ve bu iþlemi tüm dizideki elemanlar -1 olana kadar devam ettiren ve böylece dizide kaç farklý sayý olduðunu bulan program kodunu yazýnýz. (Her yerleþtirme sonrasý dizinin güncel hali yazdýrýlacaktýr. Dizi yazdýrma iþlemi için fonksiyon kullanýlacaktýr.)
Örnek:  2 girildi. Dizi: [1, 6, 5, -1, 1, 4, -1]
            4 girildi. Dizi: [1, 6, 5, -1, 1, -1, -1]
          		5 girildi. Dizi: [1, 6, -1, -1, 1, -1, -1]
…. 
Dizinin son hali: [-1, -1, -1, -1, 1, -1, -1]
Sonuç: dizide 5 farklý sayý bulunmaktadýr.

*/
#include <stdio.h>

void diziyazdir(int dizi[], int boyut) {
    int i;
    printf("Dizi: [");
    for (i = 0; i < boyut; i++) {
        if (i != 0) {
            printf(", ");
        }
        printf("%d", dizi[i]);
    }
    printf("]\n");
}

int main() {
    int dizi[] = {1, 6, 5, 2, 1, 4, 2};
    int i, aranan, farkliSayilar = 0;
    int boyut = sizeof(dizi) / sizeof(dizi[0]);

    for (i = 0; i < boyut; i++) {
        printf("Aranan sayiyi girin: ");
        scanf("%d", &aranan);

        int sayiBulundu = 0;
        for (int j = 0; j < boyut; j++) {
            if (dizi[j] == aranan && dizi[j] != -1) {
                dizi[j] = -1;  
                sayiBulundu = 1;
            }
        }

        if (sayiBulundu) {
            farkliSayilar++;
        }

        diziyazdir(dizi, boyut);  
    }

    printf("Dizide %d farklý sayi bulunmaktadýr.\n", farkliSayilar);

    return 0;
}

