#include<stdio.h>


int main(){
	
	float number[5], summary=0.0;
	
	int i,x;
	
	
	for(i=0; i<5; i++){
		
		printf("please login a number: ");// dizilerde içe atama işlemini döngüle yapıyoruz
		scanf("%f",&number[i]);
		
	}
	
	for (x=0;x<5;x++){
	
		printf("%f\n", number[x]); //yazdırma işleminide döngü ile yapıyoruz.
	}
	
	
	for(i=0;i<5;i++){ // dizilerle çalışırken görüldüğü gibi çoğunlukla döngü kullanıyoruz.
		
		summary+=number[i];
	}
	
	printf("arrange: %f", summary/5);
	
	
	
	
	return 0;
}
