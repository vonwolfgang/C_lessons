#include<stdio.h>



int main(){
	
	
	int a,b;
	int i;
	int j;
	
	for(i=0,j=1; i<10,j<5; i++,j++){
		printf("%d\n",i);
		printf("%d\n",j);
			
	}
	
	//for döngüsünde yukarıdaki gibi yapıyoruz. Ayrıca iki tane değişken iki tane mantık cümlesi 
	//felanda tanımlayabiliyoruz.
	
	for (a=0;a<5;a++){
		
		for(b=0;b<5;b++){
			
			printf("%d %d\n",a,b);
		}
		
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
