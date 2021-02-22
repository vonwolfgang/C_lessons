

#include<stdio.h>
#include<string.h>

int sitring_len(char *p){
	
	int lenght_1 = 0;
	
	int i = 0; 
	
	for ( ; p[i] != '\0' ; i++){
					
		
		lenght_1++;
		
		
		
	}
	
	
	return lenght_1;
	
}

// yukar�da str uzunlu�u d�nd�ren bir fonksiyon yaz�yoruz.
// bi tane pointer parametresi verdik sonra dedikki for d�ng�s�nde '\0' karakterine yani null karakterine
// e�it olana kadar for devam et dedik ve her devam etti�inde lenght_1 ekledik en son lenght_1 d�nd�rd�k
// ve uzunluk bulmu� olduk





int main(){
	
	// string ifadeler de ��yle bi�e vard� bu �nemli e�er sen bi string tan�mlad���n zaman
	// bu stringin bitti�ini anlamak i�in makine otomatik olarak null karkateri denen bi�ey koyuyor
	
	char name[] = "anonymous";
	// yukar�da bir char array'i tan�mlad�k.
	
	char *p = name;
	// yukar�da bir tane char pointer tan�mlad�k bu pointer name'in indexinin ba�lang�� adresini tuttu
	
		
	printf("%s \n", name);
	// biz bir array bast�r�rken string arrayi bu %s format� gidiyor bu arrayin ba�lang�� adresini buluyor
	// ve null karakterini g�rene kadar bast�rmaya devam ediyor.
	
	printf("%s \n",p);
	// yani asl�nda pointer'in yapt��� i�lemin ayn�s�n� yap�yor �imdi biz bunu bast�r�nca bu da ayn� �eyi yaparak
	// yukar�dan a�a��ya bast�r�cak
	 
	printf("%s \n",p+1);
	// b�yle yaparsak ise bir sonraki karakterinden ba�lar yani nonymous yazd�r�r gene null g�r�nce durur.
	
	printf("%d \n", strlen(name));
	// yukar�da yapt���m�z �ey name stringinin strlen ile uzunlu�unu bulduk bunu bulurkende strlen null g�rene kadar karakter sayd�.
	
	
	
		
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
