#include<stdio.h>



int main(){
	
// Ram de birs�r� k���k kutucuk vard�r.T�m bu kutucuklar�n birer adresi vard�r. Pointerler ise
// bu adresleri tutar.	
	
	
	int i = 5;
	// �rne�in biz yukar�da bir i de�eri tan�mlad�k biz derle dedi�imiz zaman bilgisayar yukardan 
	// a�a��ya do�ru kodlar� okumaya ba�l�yor ve bellekte i i�in ne kadar yer gerekiyorsa o kadar yer 
	// ay�r�p i de�i�keninin i�ine 5 de�erini at�yor. ��te bu i de�erinin bellekde bir adresi var.
	
	int j;
	
	scanf("%d",&j);
	// yukar�da yapt���m�z ise gene bellekte bilgisayar j de�i�keni i�in bir yer ay�rd�.
	// sonra scanf fonksiyonu geldi burda & i�areti j nin bellekteki adresini ver demek.
	// sonra kullan�c�dan ald��� de�eri o adrese yerle�tirdi.
	
	
	int m =6;
	// biz �imdi  bellekte m ad�nda bir de�i�ken olu�turduk ve i�ine 6 de�erini atad�k
	
	int *p = &m ;
	// yukar�da ise bir p de�i�kenini pointer olarak tan�mlad�k. Pointerler adres tutard�.
	// & i�areti ise adres ver demekti, biz yukar�da p de�i�kenine m de�i�keninin adresini ata deik.
	// ve ayr�ca e�er bir int de�i�keninin adresini tutturmak istiyorsak int pointer olu�turmam�z gerek
	// di�erlerine de uyarlayacak olursak bir char de�i�keni i�in char pointer float de�i�keni i�in float pointer
	// ve benzeri gibi olu�turulmas� gerek.
	
	printf("%p\n",p); 
	printf("%u\n",p);
	// yukar�daki �ey ise pointer adres bast�rmak i�in b�yle yapar�z %p ve %u farkl� cinslerden pointer
	// format belirleyicileri.
	
	//NOT: & i�areti bir de�i�kenin bellekdeki adresini verir.
	//NOT: * i�areti ise bir pointerin ba��na konuldu�unda pointer�n tuttu�u adrese git
	// ve o adresteki de�eri kendine al diyo.
	
	printf("%d",*p);
	
	
	
	
	
	
	
	
	return 0;
}
