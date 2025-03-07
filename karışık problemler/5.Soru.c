/*
Substring isimli bir fonksiyon yaz�lacakt�r. Bu fonksiyon kendisine g�nderilen bir metinde istenen ba�lang�� indeksinden ba�layarak istenen uzunluktaki kelimeyi d�nd�recektir.
�rnek:  kelime: yazilimcilar startIndex:3 uzunluk:4 olarak g�nderilmi�se d�necek de�er:ilim olmal�d�r.(3.indeksten ba�lay�p 4 karakter kadar�n� al�r.)
*/
#include <stdio.h>
#include <string.h>

void substring(char metin[], int startindex, int uzunluk, int son) {
    int i;
    if (startindex < 0 || startindex >= son || startindex + uzunluk > son) {
        printf("Hatal� indeks veya uzunluk!\n");
        return;
    }
    for (i = startindex; i < startindex + uzunluk; i++) {
        printf("%c", metin[i]);
    }
    printf("\n");
}

int main() {
    char metin[100];
    int startindex, uzunluk, son;

    printf("Metni girin: ");
    fgets(metin, sizeof(metin), stdin);
    

    if (metin[strlen(metin) - 1] == '\n') {
        metin[strlen(metin) - 1] = '\0';
    }

    printf("Baslangic indeksini girin: ");
    scanf("%d", &startindex);
    printf("Uzunlugu girin: ");
    scanf("%d", &uzunluk);

    son = strlen(metin);
    substring(metin, startindex, uzunluk, son);

    return 0;
}

