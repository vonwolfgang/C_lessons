#include<stdio.h>


int kont(number){
	
	int i;
	
	for (i=2;i<number;i++){
		
		if(number%i==0){
			
			return 0; // eðer bir fonksiyonda return 0 yaparsan o fonksiyon aþaðýdaki hiçbir þeyi kontrol etmez direk fonkdan çýkar
		}
		
		else{
			
			return 1; 
		}
	
	
	}
	


}





int main(){
	
	
	int number_1;
	
	printf("please login a number: ");
	scanf("%d",&number_1);
	
	if (kont(number_1)==0){
		
		printf("this is not asal");
	}
	
	else{
		printf("this is asal");
	}
	
	
	
	
	return 0;
}
