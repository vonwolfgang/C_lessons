#include<stdio.h>


int main(){
	
	// �OK BOYUTLU D�Z�LER
	
	
	/*
	1 2 3   ----> 0. sat�r
	4 5 6   ----> 1. sat�r                          -------> matris b�yle bi�ey.
	7 8 9   ----> 2. sat�r
	
	*/
	
	// �ok boyutlu diziler matrislere benziyor.
	
	int matris[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	// 3 e 3 l�k bir �ok boyutlu dizi tan�mlad�k sonra o dizinin i�ine yukardaki de�erleri atad�k
	
	
	printf("%d\n\n",matris[0][1]); // s�f�r�nc� sat�rdaki 1. eleman� almak i�in yapt�k
	
	
	
	
	
	int i,j;
	
	for (i=0;i<3;i++) {
		
		for (j=0;j<3;j++){
			
			printf("%d\t",matris[i][j]);
		}
		
		printf("\n");	
	}
	
	// tan�mlad���m�z �ok boyutlu dizinin t�m elemanlar�n� yazd�rmak i�in yukar�daki gibi bir d�ng� yapt�k.
	
	
	
	
	
	
	int x,y;
	
	int matris_1[3][3]; // i�i bo� �ok boyutlu dizi b�yle tan�mlan�r.
	
		for (x=0;x<3;x++) {
		
	    	for (y=0;y<3;y++){
			
		    	scanf("%d",&matris_1[x][y]);
				}
			
	}
	
	// e�er bo� bir �ok boyutlu diziyi doldurmak istersen onu da b�yle yapars�n.
	
	return 0;
}
