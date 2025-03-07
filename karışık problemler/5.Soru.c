/*
Substring isimli bir fonksiyon yazýlacaktýr. Bu fonksiyon kendisine gönderilen bir metinde istenen baþlangýç indeksinden baþlayarak istenen uzunluktaki kelimeyi döndürecektir.
Örnek:  kelime: yazilimcilar startIndex:3 uzunluk:4 olarak gönderilmiþse dönecek deðer:ilim olmalýdýr.(3.indeksten baþlayýp 4 karakter kadarýný alýr.)
*/
#include <stdio.h>
#include <string.h>

void substring(char metin[], int startindex, int uzunluk, int son) {
    int i;
    if (startindex < 0 || startindex >= son || startindex + uzunluk > son) {
        printf("Hatalý indeks veya uzunluk!\n");
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

