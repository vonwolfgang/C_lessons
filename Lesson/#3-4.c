#include<stdio.h>

int main(){
	
	/*
	x+y = x ve y toplar
	x-y = x eksi y 
	x/y = x b�l� y
	x*y = x �arp� y
	x%y = x'in y'ye b�l�m�nden kalan
	-x = x 'i eksi ile �arpar
	+x = x'i art� ile �arpar
	*/
	
	printf("%d\n",12+9);
	
	printf("%d\n",12-9);
	
	printf("%d\n",12/9); // tam say� olarak formatlad���m�z i�in b�l�m�n tam de�erini verdi 
		
	printf("%d\n",12*9);
	
	printf("%d\n",12%9);
	
	float x1=15,x2=4,x3=x1/x2;
	printf("%f\n",x3); 
	
	// say�larda b�l�m�n kesir de�erini almak i�in yukar�daki gibi yapmam gerekti nedenini bilmiyorum 
	
	printf("%f\n",12/9);
	// b�le yap�nca sadece 0.0000 ald�k nedenin bilmiyorum 
	
	int x4=-1,x5=1;
	
	printf("%d\t",-x4);
	printf("%d\t",-x5);
	
	
	
	
	
	
	return 0;
}
