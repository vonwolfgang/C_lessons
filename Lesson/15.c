#include<stdio.h>


int main(){
	/*
	
	DO WHİLE DÖNGÜSÜ
	
	do {
	
	
	}
	while(kosul);
	
	do while döngüsünde yukarıdaki gibi bir iskelet var önce do 'nun içindeki işlemler yapılıyor 
	sonra while(kosul) geliyor eğer koşul dogru ise tekrar başa dönüyor ve do 'nun içindeki işlemleri
	yapıyor eğer sonuç yanlış ise aşağıya geçiyor.
	*/
	
	
	int y=20;
	
	do{
		
		printf("%d\n",y);
		y--;
		
	}
	while(y>15);
	// BU DO WHİLE DÖNGÜSÜNÜ PEK TERCİH EDİLMEZ.
	
	
	
	int hane=0,sum=0;
	int n;
	printf("please login a number: \n");
	scanf("%d",&n);
	
	do{
		
		sum += n%10;
		hane+=1;
		n = n/10;
	}
	while(n>0);
	
	printf("summary of numerals: %d \n", sum);
	printf("number of digits : %d \n", hane);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
