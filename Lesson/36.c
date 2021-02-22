

#include<stdio.h>
#include<string.h>

int sitring_len(char *p){
	
	int lenght_1 = 0;
	
	int i = 0; 
	
	for ( ; p[i] != '\0' ; i++){
					
		
		lenght_1++;
		
		
		
	}
	
	
	return lenght_1;
	
}

// yukarýda str uzunluðu döndüren bir fonksiyon yazýyoruz.
// bi tane pointer parametresi verdik sonra dedikki for döngüsünde '\0' karakterine yani null karakterine
// eþit olana kadar for devam et dedik ve her devam ettiðinde lenght_1 ekledik en son lenght_1 döndürdük
// ve uzunluk bulmuþ olduk





int main(){
	
	// string ifadeler de þöyle biþe vardý bu önemli eðer sen bi string tanýmladýðýn zaman
	// bu stringin bittiðini anlamak için makine otomatik olarak null karkateri denen biþey koyuyor
	
	char name[] = "anonymous";
	// yukarýda bir char array'i tanýmladýk.
	
	char *p = name;
	// yukarýda bir tane char pointer tanýmladýk bu pointer name'in indexinin baþlangýç adresini tuttu
	
		
	printf("%s \n", name);
	// biz bir array bastýrýrken string arrayi bu %s formatý gidiyor bu arrayin baþlangýç adresini buluyor
	// ve null karakterini görene kadar bastýrmaya devam ediyor.
	
	printf("%s \n",p);
	// yani aslýnda pointer'in yaptýðý iþlemin aynýsýný yapýyor þimdi biz bunu bastýrýnca bu da ayný þeyi yaparak
	// yukarýdan aþaðýya bastýrýcak
	 
	printf("%s \n",p+1);
	// böyle yaparsak ise bir sonraki karakterinden baþlar yani nonymous yazdýrýr gene null görünce durur.
	
	printf("%d \n", strlen(name));
	// yukarýda yaptýðýmýz þey name stringinin strlen ile uzunluðunu bulduk bunu bulurkende strlen null görene kadar karakter saydý.
	
	
	
		
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
