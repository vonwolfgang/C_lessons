#include<stdio.h>

int main(){
	
	
	char name[]="anonymous"; // b�le karakter dizileri tan�malayabilirsin ama �a��r�rken
							// index index �a��rman gerekiyor.
							
	char name1[20]; // burda ise name1 isimli bir char de�i�keni tan�mlad�k.
				    // ama c dilinde char lar bellekte otomatik olarak yer ayr�lm�yor bu y�zden biz manuel olarak 20 karakterlik yer verdik.
				    
	
	printf("please login your name: ");			    
	
	scanf("%s", name1); // scanf le karakter dizisini b�yle kullan�c�dan alabilirsin.
	
	printf("%s",name1); // scanf bo�luk g�rene kadar al�r bo�luktan sonras�n� alm�yor.
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
