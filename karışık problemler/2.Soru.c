/*Girilen bir c�mlede istenen bir kelimenin ka� defa ge�ti�ini bulan program� yaz�n�z.
�rnek: c�mle gir: xyz xty xyzt abcxydef
	 kelime gir: xyz
	 xyz kelimesi 2 defa gecmektedir.
	 */
	 //int main(){
	 
	char cumle[100];
	printf("cumleyi gitiniz: ");
	gets(cumle);
	int i;
	char aranan[100],sayac=0;

	printf("aranan kelimeyi girin: ");
	scanf("%s",&aranan);
	int eslesme;
	int boyut=strlen(aranan);
	for(i=0;cumle[i]!='\0';i++){
			if(cumle[i]==aranan[0]){// E�er ilk karakter uyu�uyorsa devam edelim
			 eslesme=1;
				}
				int j;
				for(j=1;j<boyut;j++){
					if(cumle[i+j]!=aranan[j]){
						eslesme=0;
						break;
					}		
				}	
			if(eslesme==1){
				sayac++;
			}
		 }
	printf("%s kelimesi %d defa gecmektedir.",aranan,sayac);
}
