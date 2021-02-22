#include<stdio.h>


int main(){
	
	// ÇOK BOYUTLU DÝZÝLER
	
	
	/*
	1 2 3   ----> 0. satýr
	4 5 6   ----> 1. satýr                          -------> matris böyle biþey.
	7 8 9   ----> 2. satýr
	
	*/
	
	// çok boyutlu diziler matrislere benziyor.
	
	int matris[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	// 3 e 3 lük bir çok boyutlu dizi tanýmladýk sonra o dizinin içine yukardaki deðerleri atadýk
	
	
	printf("%d\n\n",matris[0][1]); // sýfýrýncý satýrdaki 1. elemaný almak için yaptýk
	
	
	
	
	
	int i,j;
	
	for (i=0;i<3;i++) {
		
		for (j=0;j<3;j++){
			
			printf("%d\t",matris[i][j]);
		}
		
		printf("\n");	
	}
	
	// tanýmladýðýmýz çok boyutlu dizinin tüm elemanlarýný yazdýrmak için yukarýdaki gibi bir döngü yaptýk.
	
	
	
	
	
	
	int x,y;
	
	int matris_1[3][3]; // içi boþ çok boyutlu dizi böyle tanýmlanýr.
	
		for (x=0;x<3;x++) {
		
	    	for (y=0;y<3;y++){
			
		    	scanf("%d",&matris_1[x][y]);
				}
			
	}
	
	// eðer boþ bir çok boyutlu diziyi doldurmak istersen onu da böyle yaparsýn.
	
	return 0;
}
