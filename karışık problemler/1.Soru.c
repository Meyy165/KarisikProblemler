/*int sayilar[]= { 1, 6, 5, 2, 1, 4, 2 }; dizisi i�in kullan�c� taraf�ndan girilen say�ya denk gelen dizi i�erisindeki say�lar�n yerlerine -1 yerle�tiren ve bu i�lemi t�m dizideki elemanlar -1 olana kadar devam ettiren ve b�ylece dizide ka� farkl� say� oldu�unu bulan program kodunu yaz�n�z. (Her yerle�tirme sonras� dizinin g�ncel hali yazd�r�lacakt�r. Dizi yazd�rma i�lemi i�in fonksiyon kullan�lacakt�r.)
�rnek:  2 girildi. Dizi: [1, 6, 5, -1, 1, 4, -1]
            4 girildi. Dizi: [1, 6, 5, -1, 1, -1, -1]
          		5 girildi. Dizi: [1, 6, -1, -1, 1, -1, -1]
�. 
Dizinin son hali: [-1, -1, -1, -1, 1, -1, -1]
Sonu�: dizide 5 farkl� say� bulunmaktad�r.

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

    printf("Dizide %d farkl� sayi bulunmaktad�r.\n", farkliSayilar);

    return 0;
}

