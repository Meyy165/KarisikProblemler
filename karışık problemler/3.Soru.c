/*Girilen bir c�mlede istenen bir karakterden sonra istenen bir kelimeyi ekleyen program� yaz�n�z.
�rnek:  c�mle gir: xyz xty xyzt abcx
 hangi karakterden sonra eklensin: t
eklenecek kelime: ab 
ekleme sonras�: xyz xtaby xyztab abcx
*/
int main(){
	char metin[100],yerlestirilen[30],ekharf;//ek harh yani hangi harften sonra eklem olcak demek
	int i,sayac=0;
	printf("metini girin: ");
	gets(metin);

	printf("hangi karakterden sonra ekleme olsun: ");
	scanf(" %c", &ekharf);//hangi harf yerine yaz�lcak yani konumu
	
	printf("%c den sonra ne yazmak istersiniz: ",ekharf);
	scanf("%s",yerlestirilen);//o konumda yaz�lcak harf
	
		for(i=0;metin[i]!='\0';i++){//metinde kac harf var
			if(metin[i]!=' ')
			sayac++;
		}	
/*E�er sayac� kullanmazsan�z, ekleme i�lemi d�zg�n �al��mayabilir ve hatal� sonu�lar elde 
edebilirsiniz.*/
			for(i=0;metin[i]!='\0';i++){
			if(metin[i]==ekharf){//girilen harfin indexini buluyor
				
			int boyut=strlen(yerlestirilen);//eklencek kelimenin harflerini say�yor
			int j;
			
	        for (j=sayac;j>i;j--) {
	            metin[j+boyut]=metin[j];
	        }
	        for(j=0;j<boyut;j++){
	        	metin[i+j+1]=yerlestirilen[j];//j deki indexi metindeki j ye at�yor
				//i: "e" harfinin indeksi,i + j + 1: Eklemenin yap�laca�� konumun indeksi
		// belli bir harften sonra ekleme yap�cag�m i�in i+1 kullan�ld�
			/*yerlestirilen[0] ifadesi "x" karakterini,
			yerlestirilen[1] ifadesi "y" karakterini temsil eder.*/
			}
	       sayac+=boyut;
			}
	}
	printf("ekleme sonrasi: %s\n",metin);	
	printf("%d tane harf var\n",sayac);
}
