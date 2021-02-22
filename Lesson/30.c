#include <stdio.h>

#include <string.h>
// bu a�a��da bir char'�n uzunlu�unu bulmak i�in yazd���m�z fonksiyon yukar�da import etti�imiz
// string.h �n i�erisinde haz�r olarak yaz�lm��  strlen(isim) --> bu fonksiyonla bi karkater dizisinin
// uzunlu�unu alabilirsin.



// a�a��daki fonksiyonda ise fonksiyonun i�erisine parametre olarak char atad�k ve dedik ki 
// bu char de�i�keninin indexi "\0" de�erine e�it olmad��� s�re boyunca leng de�i�kenine 1 ekle dedik
// b�ylece bir char ifadenin uzunlu�unu bulmu� oluyoruz. 

int func(char nam[]){
	
	int i,leng=0;
	
	for(i=0; nam[i] != '\0';i++){
		
		
		leng++;
	}
	
	return leng;
}










// bi tane char lar� ters �eviren bir fonksiyon yazd�k.

void return_1(char name_1[]){
	
	int passed_1,leng_1=0,i;
	
	leng_1 = strlen(name_1);
	
	for (i=0;i<leng_1/2;i++){
		
		passed_1 = name_1[i];
		name_1[i]=name_1[leng_1-1-i];
		name_1[leng_1-1-i]=passed_1;
		
	}
	
	
}










int main(){
	
	char name[]="omer";
	
	// str karakterler pc haf�zas�nda 
	/*
	'o'     bu �ekilde tutulur ve str karakterleri bir fonksiyona parametre olarak vermek
	'm'     istedi�inde boyut belirtmene gerek yok ��nk� boyut kendi i�inde tan�mlanm�� oluyor
	'e'		ayr�ca en sondaki "\0" ifadesi c dilinin bu str'nin bitti�ini anlamak i�in kendi kendine
	'r'		otomatik olarak olu�turdu�u bir�ey. Yani haf�za da omer isminin uzunlu�u 5 olarak oluyor. 
	'\0'
	*/
	
	printf("%d\n",func(name));
	
	char text[200];
	// 200 harf alabilen bir char tan�mlad�k.
	
	scanf("%s",text);
	
	return_1(text);
	
	printf("%s",text,"\n");
	
	return 0;
	}
