#include<stdio.h>

int fact(x){
	
	int tut=1,i=1;	   // int bir fonksiyon tan�mdal�k
						
	for (i;i<x+1;i++){  // burda fonksiyonda faktoriyel i�lemi yapt�k
		
		tut = tut*i;    // e�er return demeseydik faktoriyel i�lemi sonucu ald���m�z �eyi ger�ek d�nyada
	}					// kullanamazd�k.
	return tut;
}




int main(){
	
	int n,fuct;
	
	printf("please login a number: ");
	
	scanf("%d",&n);
	
	fuct= fact(n);
	printf("%d",fuct);
	
	
	return 0;
}
