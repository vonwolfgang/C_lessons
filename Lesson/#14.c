#include<stdio.h>



int main(){
	
	
	int x=0, n, z=1;


//--------------------------------------------------------------
	while (10>x) {
		printf("hello anonymous\n");
		x+=1;
	} 
	
	
//----------------------------------------------------------------	
	
	//FAKTOR�YEL UYGULAMASI
	printf("please login a number that you want to learn factoriel of the number\n");
	scanf("%d",&n);
	while (n>0){
		z*=n;
		n-=1;
	}
	printf("%d",z);
	//while d�ng�s�n�n kullan�m� i�te b�yle.
//-------------------------------------------------------------------
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
