#include<stdio.h>

int main(){
	
	
	char name[]="anonymous"; // böle karakter dizileri tanýmalayabilirsin ama çaðýrýrken
							// index index çaðýrman gerekiyor.
							
	char name1[20]; // burda ise name1 isimli bir char deðiþkeni tanýmladýk.
				    // ama c dilinde char lar bellekte otomatik olarak yer ayrýlmýyor bu yüzden biz manuel olarak 20 karakterlik yer verdik.
				    
	
	printf("please login your name: ");			    
	
	scanf("%s", name1); // scanf le karakter dizisini böyle kullanýcýdan alabilirsin.
	
	printf("%s",name1); // scanf boþluk görene kadar alýr boþluktan sonrasýný almýyor.
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
