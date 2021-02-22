#include<stdio.h>

int main(){
	
	/*
	x+y = x ve y toplar
	x-y = x eksi y 
	x/y = x bölü y
	x*y = x çarpý y
	x%y = x'in y'ye bölümünden kalan
	-x = x 'i eksi ile çarpar
	+x = x'i artý ile çarpar
	*/
	
	printf("%d\n",12+9);
	
	printf("%d\n",12-9);
	
	printf("%d\n",12/9); // tam sayý olarak formatladýðýmýz için bölümün tam deðerini verdi 
		
	printf("%d\n",12*9);
	
	printf("%d\n",12%9);
	
	float x1=15,x2=4,x3=x1/x2;
	printf("%f\n",x3); 
	
	// sayýlarda bölümün kesir deðerini almak için yukarýdaki gibi yapmam gerekti nedenini bilmiyorum 
	
	printf("%f\n",12/9);
	// böle yapýnca sadece 0.0000 aldýk nedenin bilmiyorum 
	
	int x4=-1,x5=1;
	
	printf("%d\t",-x4);
	printf("%d\t",-x5);
	
	
	
	
	
	
	return 0;
}
