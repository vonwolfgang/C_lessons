#include<stdio.h>




int main(){
	
	
	int x=5, y=10;
	
	
	contr(x,y);  // burda fonksiyonumuzu �a��rd���m�zda fonksiyonun i�indeki a ve b de�erleri olu�turuluyor
	// ve olu�turulan de�erlere atad���m�z de�erler veriliyor ve fonksiyon i�lemini yap�yor fonksiyon i�lemini 
	// bitirdikten sonra ise olu�turulan a ve b de�erleri siliniyor. Bu i�leme call by value deniyor. O y�zden 
	// fonksiyonu �a��rd���m�zda fonksiyon g�revini yapt� ve x ve y nin de�erlerini de�i�tirdi. Ama sonrada x ve y 'yi 
	// �a��rd���m�zda ise fonksiyonun yapt��� de�i�iklikler silindi�i i�in tekrar dan eski yerlerine d�nd� x ve y.
	printf("\n");
	printf("value of x: %d value of y: %d",x,y);
	
	
	return 0;
}


void contr(int a, int b){
	
	int tut=a;
	
	a = b;
	
	b = tut;
	
	printf("a value: %d  b valuse: %d",a ,b);
	
	
	
}

