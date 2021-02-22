#include<stdio.h>


void hata_pri(int error){
	
	printf("Error %d",error);
	
}

// Yukarýda fonksiyon tanýmladýk.


int main(){
	
	// FONKSÝYONLAR
	
	
	// fonksiyonun dönüþ tipi, ismi, parametreleri(isteðe baðlý) olur.
	
	// eðer fonksiyon hiç birþey dönmüyorsa bu fonksiyon void 'dir

	
	int number;
	printf("please login a positive number: ");
	
	scanf("%d",&number);
	
	if (number<0){	
	hata_pri(404); //fonksiyonu çaðýrdýk
}

	else{
		printf("Weldone");
	}


	
	return 0;
}

