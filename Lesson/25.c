#include<stdio.h>


void hata_pri(int error){
	
	printf("Error %d",error);
	
}

// Yukar�da fonksiyon tan�mlad�k.


int main(){
	
	// FONKS�YONLAR
	
	
	// fonksiyonun d�n�� tipi, ismi, parametreleri(iste�e ba�l�) olur.
	
	// e�er fonksiyon hi� bir�ey d�nm�yorsa bu fonksiyon void 'dir

	
	int number;
	printf("please login a positive number: ");
	
	scanf("%d",&number);
	
	if (number<0){	
	hata_pri(404); //fonksiyonu �a��rd�k
}

	else{
		printf("Weldone");
	}


	
	return 0;
}

