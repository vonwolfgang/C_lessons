#include<stdio.h>


int main(){
	/*
	
	DO WH�LE D�NG�S�
	
	do {
	
	
	}
	while(kosul);
	
	do while d�ng�s�nde yukar�daki gibi bir iskelet var �nce do 'nun i�indeki i�lemler yap�l�yor 
	sonra while(kosul) geliyor e�er ko�ul dogru ise tekrar ba�a d�n�yor ve do 'nun i�indeki i�lemleri
	yap�yor e�er sonu� yanl�� ise a�a��ya ge�iyor.
	*/
	
	
	int y=20;
	
	do{
		
		printf("%d\n",y);
		y--;
		
	}
	while(y>15);
	// BU DO WH�LE D�NG�S�N� PEK TERC�H ED�LMEZ.
	
	
	
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
