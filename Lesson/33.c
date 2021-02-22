#include<stdio.h>




int main(){
	
	
	int x=5, y=10;
	
	
	contr(x,y);  // burda fonksiyonumuzu çaðýrdýðýmýzda fonksiyonun içindeki a ve b deðerleri oluþturuluyor
	// ve oluþturulan deðerlere atadýðýmýz deðerler veriliyor ve fonksiyon iþlemini yapýyor fonksiyon iþlemini 
	// bitirdikten sonra ise oluþturulan a ve b deðerleri siliniyor. Bu iþleme call by value deniyor. O yüzden 
	// fonksiyonu çaðýrdýðýmýzda fonksiyon görevini yaptý ve x ve y nin deðerlerini deðiþtirdi. Ama sonrada x ve y 'yi 
	// çaðýrdýðýmýzda ise fonksiyonun yaptýðý deðiþiklikler silindiði için tekrar dan eski yerlerine döndü x ve y.
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

