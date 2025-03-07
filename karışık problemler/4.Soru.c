/*
Girilen bir kelimedeki rakamlarý ayýrýp sayýya dönüþtürüp, hem sayýyý hem de sayýnýn yazý ile yazýlmýþ halini yazdýrýnýz.
Örnek:  kelime gir: xy5-3ty/8ab
	538 bes yuz otuz sekiz
*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void yaziyla(int sayi) {
    char *birler[] = {"", "bir", "iki", "uc", "dort", "bes", "alti", "yedi", "sekiz", "dokuz"};
    char *onlar[] = {"", "on", "yirmi", "otuz", "kirk", "elli", "altmis", "yetmis", "seksen", "doksan"};
    char *yuzler[] = {"", "yuz", "iki yuz", "uc yuz", "dort yuz", "bes yuz", "alti yuz", "yedi yuz", "sekiz yuz", "dokuz yuz"};

    if (sayi == 0) {
        printf("sifir");
        return;
    }

    int b = sayi % 10;
    int o = (sayi / 10) % 10;
    int y = (sayi / 100) % 10;

    if (y > 0) printf("%s ", yuzler[y]);
    if (o > 0) printf("%s ", onlar[o]);
    if (b > 0) printf("%s", birler[b]);

    printf("\n");
}

int main() {
    char metin[100], rakamlar[100];
    int i, j = 0, sayi;

    printf("Metni gir: ");
    fgets(metin, sizeof(metin), stdin);

    for (i = 0; metin[i] != '\0'; i++) {
        if (isdigit(metin[i])) {
            rakamlar[j++] = metin[i];
            printf("%c", metin[i]);
        }
    }

    rakamlar[j] = '\0'; // Stringin sonunu belirle
    sayi = atoi(rakamlar); // Rakamlarý sayýya çevir

    printf("\n%d ", sayi);
    yaziyla(sayi);

    return 0;
}

