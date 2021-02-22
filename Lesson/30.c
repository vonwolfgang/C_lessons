#include <stdio.h>

#include <string.h>
// bu aþaðýda bir char'ýn uzunluðunu bulmak için yazdýðýmýz fonksiyon yukarýda import ettiðimiz
// string.h ýn içerisinde hazýr olarak yazýlmýþ  strlen(isim) --> bu fonksiyonla bi karkater dizisinin
// uzunluðunu alabilirsin.



// aþaðýdaki fonksiyonda ise fonksiyonun içerisine parametre olarak char atadýk ve dedik ki 
// bu char deðiþkeninin indexi "\0" deðerine eþit olmadýðý süre boyunca leng deðiþkenine 1 ekle dedik
// böylece bir char ifadenin uzunluðunu bulmuþ oluyoruz. 

int func(char nam[]){
	
	int i,leng=0;
	
	for(i=0; nam[i] != '\0';i++){
		
		
		leng++;
	}
	
	return leng;
}










// bi tane char larý ters çeviren bir fonksiyon yazdýk.

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
	
	// str karakterler pc hafýzasýnda 
	/*
	'o'     bu þekilde tutulur ve str karakterleri bir fonksiyona parametre olarak vermek
	'm'     istediðinde boyut belirtmene gerek yok çünkü boyut kendi içinde tanýmlanmýþ oluyor
	'e'		ayrýca en sondaki "\0" ifadesi c dilinin bu str'nin bittiðini anlamak için kendi kendine
	'r'		otomatik olarak oluþturduðu birþey. Yani hafýza da omer isminin uzunluðu 5 olarak oluyor. 
	'\0'
	*/
	
	printf("%d\n",func(name));
	
	char text[200];
	// 200 harf alabilen bir char tanýmladýk.
	
	scanf("%s",text);
	
	return_1(text);
	
	printf("%s",text,"\n");
	
	return 0;
	}
