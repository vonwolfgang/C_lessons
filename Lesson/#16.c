#include<stdio.h>



int main(){
	
	
	int a,b;
	int i;
	int j;
	
	for(i=0,j=1; i<10,j<5; i++,j++){
		printf("%d\n",i);
		printf("%d\n",j);
			
	}
	
	//for d�ng�s�nde yukar�daki gibi yap�yoruz. Ayr�ca iki tane de�i�ken iki tane mant�k c�mlesi 
	//felanda tan�mlayabiliyoruz.
	
	for (a=0;a<5;a++){
		
		for(b=0;b<5;b++){
			
			printf("%d %d\n",a,b);
		}
		
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
