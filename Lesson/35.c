#include<stdio.h>


int max(int *a, int lon){ // yandaki *a yerine a[] konulabilirdi pointer olarak kullandýðýmýzda da çalýþmasýnýn sebebi pointere
 						  // pointere adresi atandýr baþlangýç adresi dizinin sonrasýnda ci nin bize saðladýðý güzellik sayesinde de 	 
	int maks = a[0];	 // *(a+1) = a[1] güzelliði sayersinden pointer olarak tanýmladýðýmýz þey ile de yapabildik.
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
	// array tanýmladýk. 
	
	int *p = &numbers[0];
	// yukarýdaki gibi yaparak arrayin baþlangýç adresini *p 'ye atayabilirsin.
		
	int *p_1 = numbers;
	// yukarýdaki gibi yaparak da arrayin baþlangýç adresini *p_1 'ye atayabilirsin.
	
	printf("%u\n",p);
	
	printf("%u\n",p_1);
	printf("%u\n",p_1+1);
	printf("%u\n",p_1+2);
	printf("%u\n",p_1+3);
	printf("%u\n",p_1+4);
	// yukarýdaki gibi yaptýðýmýzda p_1+1 demek bu pointýra 1 yukarý taþý demek yani dizinin aslýnda
	// 1. index deki elemanýnýn adresini al demek gibi biþey.

	
	printf("%d\n",*p_1);
	printf("%d\n",*(p_1+1));
	printf("%d\n",*(p_1+2));
	printf("%d\n",*(p_1+3));
	printf("%d\n",*(p_1+4));
	// yukarýdaki gibi yazdýrdýðýmýz da bu pointerlara dizinin her bir elemanýnýn adresini atadýðýmýz için 
	// yukarýda yazýlacak deðerler dizinin her bir elemanýný yazdýrcaktýr.  
	
	
	printf("%d\n",p_1[0]);
	printf("%d\n",p_1[1]);
	printf("%d\n",p_1[2]);
	printf("%d\n",p_1[3]);
	printf("%d\n",p_1[4]);
	
	// *(p_1+1) bu iþlemin eþiti -------> p_1[1] 'dir c dili uzun uzun yazmayalým diye bize böyle bi kolaylýk saðlamýþ.
	
	int numbers_1[5]={100,23,321,1,3};
	
	int best = max(numbers_1,5);
	printf("max number of numbers_1 %d\n", best);
	
	return 0;
}
