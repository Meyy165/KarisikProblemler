/*Girilen bir cümlede istenen bir karakterden sonra istenen bir kelimeyi ekleyen programý yazýnýz.
Örnek:  cümle gir: xyz xty xyzt abcx
 hangi karakterden sonra eklensin: t
eklenecek kelime: ab 
ekleme sonrasý: xyz xtaby xyztab abcx
*/
int main(){
	char metin[100],yerlestirilen[30],ekharf;//ek harh yani hangi harften sonra eklem olcak demek
	int i,sayac=0;
	printf("metini girin: ");
	gets(metin);

	printf("hangi karakterden sonra ekleme olsun: ");
	scanf(" %c", &ekharf);//hangi harf yerine yazýlcak yani konumu
	
	printf("%c den sonra ne yazmak istersiniz: ",ekharf);
	scanf("%s",yerlestirilen);//o konumda yazýlcak harf
	
		for(i=0;metin[i]!='\0';i++){//metinde kac harf var
			if(metin[i]!=' ')
			sayac++;
		}	
/*Eðer sayacý kullanmazsanýz, ekleme iþlemi düzgün çalýþmayabilir ve hatalý sonuçlar elde 
edebilirsiniz.*/
			for(i=0;metin[i]!='\0';i++){
			if(metin[i]==ekharf){//girilen harfin indexini buluyor
				
			int boyut=strlen(yerlestirilen);//eklencek kelimenin harflerini sayýyor
			int j;
			
	        for (j=sayac;j>i;j--) {
	            metin[j+boyut]=metin[j];
	        }
	        for(j=0;j<boyut;j++){
	        	metin[i+j+1]=yerlestirilen[j];//j deki indexi metindeki j ye atýyor
				//i: "e" harfinin indeksi,i + j + 1: Eklemenin yapýlacaðý konumun indeksi
		// belli bir harften sonra ekleme yapýcagým için i+1 kullanýldý
			/*yerlestirilen[0] ifadesi "x" karakterini,
			yerlestirilen[1] ifadesi "y" karakterini temsil eder.*/
			}
	       sayac+=boyut;
			}
	}
	printf("ekleme sonrasi: %s\n",metin);	
	printf("%d tane harf var\n",sayac);
}
