
#include<stdio.h>






// int arrayi göndermek için yukarýdaki gibi tanýmladýk 
// eðer int matris deseydik sadece tek bir öðe olarak alýrdý 
// ama matris[] tüm þeyleri alýyor matris deðiþken ismi gibi biþe
// int size ise array boyut tanýmladýk c dilinde otomatik olarak boyut
// tanýmlanmýyor.


int func(int matris[], int size){ 
	
	int i,hit_1=1;
	
	for (i=0;i<size;i++){
		
		
		hit_1 *= matris[i];
	}								
 	
return hit_1;
}







// çift boyutlu arrayleri fonksiyona yerleþtirip sonra almak için
// aþaðýdaki gibi ikinci boyutuna biz aþaðýdaki ana fonksiyonumuzda kaçlý almýþ isek 
// burda da ikinci boyutunu belirtmemiz gerekiyor int size ise birinci boyutu tanýmlýyor.
// döndürceðimiz bir deðer olmadýðý için yani dýþ dünyaya atýcaðýmýz biþey yok o yüzden void olarak tanýmladýk.


void push(int array_1[][4], int size ) {
	
	int x,y;
	
	for (x=0;x<size;x++){
		
		for(y=0;y<4;y++){
			
			printf("%d\t",array_1[x][y]);
			
		}
		
		printf("\n");

	}
	
		
}








int main(){
	
	
	
	int number[5] = {1,2,3,4,5};
	
	printf("%d\n",func(number,5));
	// func'ýn içine number arrayini verdik ve 5 bouytlu olduðunu söyledik.
	
	
	
	
	int matris_1[3][4];
	printf("please complete the matrix \n");
	
	int i,j;
	
	for (i=0;i<3;i++){
		
		for(j=0;j<4;j++){
			
			scanf("%d",&matris_1[i][j]);
			
		}
	}
	
	push(matris_1, 3);
	// matrix li tanýmladýðmýz fonksiyonu çaðýrýrken böyle çaðýrýyoruz.
	
	
	
	
	
return 0;	
	
}


