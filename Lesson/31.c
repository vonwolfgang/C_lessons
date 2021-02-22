#include<stdio.h>



int main(){
	
// Ram de birsürü küçük kutucuk vardýr.Tüm bu kutucuklarýn birer adresi vardýr. Pointerler ise
// bu adresleri tutar.	
	
	
	int i = 5;
	// örneðin biz yukarýda bir i deðeri tanýmladýk biz derle dediðimiz zaman bilgisayar yukardan 
	// aþaðýya doðru kodlarý okumaya baþlýyor ve bellekte i için ne kadar yer gerekiyorsa o kadar yer 
	// ayýrýp i deðiþkeninin içine 5 deðerini atýyor. Ýþte bu i deðerinin bellekde bir adresi var.
	
	int j;
	
	scanf("%d",&j);
	// yukarýda yaptýðýmýz ise gene bellekte bilgisayar j deðiþkeni için bir yer ayýrdý.
	// sonra scanf fonksiyonu geldi burda & iþareti j nin bellekteki adresini ver demek.
	// sonra kullanýcýdan aldýðý deðeri o adrese yerleþtirdi.
	
	
	int m =6;
	// biz þimdi  bellekte m adýnda bir deðiþken oluþturduk ve içine 6 deðerini atadýk
	
	int *p = &m ;
	// yukarýda ise bir p deðiþkenini pointer olarak tanýmladýk. Pointerler adres tutardý.
	// & iþareti ise adres ver demekti, biz yukarýda p deðiþkenine m deðiþkeninin adresini ata deik.
	// ve ayrýca eðer bir int deðiþkeninin adresini tutturmak istiyorsak int pointer oluþturmamýz gerek
	// diðerlerine de uyarlayacak olursak bir char deðiþkeni için char pointer float deðiþkeni için float pointer
	// ve benzeri gibi oluþturulmasý gerek.
	
	printf("%p\n",p); 
	printf("%u\n",p);
	// yukarýdaki þey ise pointer adres bastýrmak için böyle yaparýz %p ve %u farklý cinslerden pointer
	// format belirleyicileri.
	
	//NOT: & iþareti bir deðiþkenin bellekdeki adresini verir.
	//NOT: * iþareti ise bir pointerin baþýna konulduðunda pointerýn tuttuðu adrese git
	// ve o adresteki deðeri kendine al diyo.
	
	printf("%d",*p);
	
	
	
	
	
	
	
	
	return 0;
}
