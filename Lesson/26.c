#include<stdio.h>

int fact(x){
	
	int tut=1,i=1;	   // int bir fonksiyon tanýmdalýk
						
	for (i;i<x+1;i++){  // burda fonksiyonda faktoriyel iþlemi yaptýk
		
		tut = tut*i;    // eðer return demeseydik faktoriyel iþlemi sonucu aldýðýmýz þeyi gerçek dünyada
	}					// kullanamazdýk.
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
