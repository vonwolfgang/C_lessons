#include<stdio.h>


int max(int *a, int lon){ // yandaki *a yerine a[] konulabilirdi pointer olarak kulland���m�zda da �al��mas�n�n sebebi pointere
 						  // pointere adresi atand�r ba�lang�� adresi dizinin sonras�nda ci nin bize sa�lad��� g�zellik sayesinde de 	 
	int maks = a[0];	 // *(a+1) = a[1] g�zelli�i sayersinden pointer olarak tan�mlad���m�z �ey ile de yapabildik.
	int i;
	
	for (i=1;i<lon; i++){
		
		if (a[i]>maks){
			
			maks = a[i];
			
		}	
	}
	
	return maks;
	
	
}


int main() {
	
	int numbers[5] = {1,2,3,4,5};
	// array tan�mlad�k. 
	
	int *p = &numbers[0];
	// yukar�daki gibi yaparak arrayin ba�lang�� adresini *p 'ye atayabilirsin.
		
	int *p_1 = numbers;
	// yukar�daki gibi yaparak da arrayin ba�lang�� adresini *p_1 'ye atayabilirsin.
	
	printf("%u\n",p);
	
	printf("%u\n",p_1);
	printf("%u\n",p_1+1);
	printf("%u\n",p_1+2);
	printf("%u\n",p_1+3);
	printf("%u\n",p_1+4);
	// yukar�daki gibi yapt���m�zda p_1+1 demek bu point�ra 1 yukar� ta�� demek yani dizinin asl�nda
	// 1. index deki eleman�n�n adresini al demek gibi bi�ey.

	
	printf("%d\n",*p_1);
	printf("%d\n",*(p_1+1));
	printf("%d\n",*(p_1+2));
	printf("%d\n",*(p_1+3));
	printf("%d\n",*(p_1+4));
	// yukar�daki gibi yazd�rd���m�z da bu pointerlara dizinin her bir eleman�n�n adresini atad���m�z i�in 
	// yukar�da yaz�lacak de�erler dizinin her bir eleman�n� yazd�rcakt�r.  
	
	
	printf("%d\n",p_1[0]);
	printf("%d\n",p_1[1]);
	printf("%d\n",p_1[2]);
	printf("%d\n",p_1[3]);
	printf("%d\n",p_1[4]);
	
	// *(p_1+1) bu i�lemin e�iti -------> p_1[1] 'dir c dili uzun uzun yazmayal�m diye bize b�yle bi kolayl�k sa�lam��.
	
	int numbers_1[5]={100,23,321,1,3};
	
	int best = max(numbers_1,5);
	printf("max number of numbers_1 %d\n", best);
	
	return 0;
}
