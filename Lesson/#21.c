#include<stdio.h>


int main(){
	
	float number[5], summary=0.0;
	
	int i,x;
	
	
	for(i=0; i<5; i++){
		
		printf("please login a number: ");// dizilerde i�e atama i�lemini d�ng�le yap�yoruz
		scanf("%f",&number[i]);
		
	}
	
	for (x=0;x<5;x++){
	
		printf("%f\n", number[x]); //yazd�rma i�leminide d�ng� ile yap�yoruz.
	}
	
	
	for(i=0;i<5;i++){ // dizilerle �al���rken g�r�ld��� gibi �o�unlukla d�ng� kullan�yoruz.
		
		summary+=number[i];
	}
	
	printf("arrange: %f", summary/5);
	
	
	
	
	return 0;
}
