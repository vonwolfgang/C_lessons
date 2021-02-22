


#include<stdio.h>


void value_1(int *a, int *b){   // burdaki fonksiyonda parametre olarak pointer verdik. Pointer verdi�imiz i�in
								// fonksiyonu �a��r�rken parametre verice�imiz yere at�ca��m�z de�i�kenlerin adresini atamam�z gerek.
								// yani & bu i�aretle koyar�z. 
	
	int tut=*a;
	
	*a = *b;
	*b = tut;
	
	printf("a = %d  b = %d",*a, *b);	
}





int main(){
	
	
	int x=5, y=10;
	
	value_1(&x,&y);
	printf("\n");
	printf("x = %d y = %d",x, y); // bu sefer x ve y nin de�erleri de�i�ti ��nk� biz pointer parametresi vererek 
	// adres de�i�imi yapt�k bunun ismide call by reference.  
	
	
	
	return 0;
}








