
#include<stdio.h>






// int arrayi g�ndermek i�in yukar�daki gibi tan�mlad�k 
// e�er int matris deseydik sadece tek bir ��e olarak al�rd� 
// ama matris[] t�m �eyleri al�yor matris de�i�ken ismi gibi bi�e
// int size ise array boyut tan�mlad�k c dilinde otomatik olarak boyut
// tan�mlanm�yor.


int func(int matris[], int size){ 
	
	int i,hit_1=1;
	
	for (i=0;i<size;i++){
		
		
		hit_1 *= matris[i];
	}								
 	
return hit_1;
}







// �ift boyutlu arrayleri fonksiyona yerle�tirip sonra almak i�in
// a�a��daki gibi ikinci boyutuna biz a�a��daki ana fonksiyonumuzda ka�l� alm�� isek 
// burda da ikinci boyutunu belirtmemiz gerekiyor int size ise birinci boyutu tan�ml�yor.
// d�nd�rce�imiz bir de�er olmad��� i�in yani d�� d�nyaya at�ca��m�z bi�ey yok o y�zden void olarak tan�mlad�k.


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
	// func'�n i�ine number arrayini verdik ve 5 bouytlu oldu�unu s�yledik.
	
	
	
	
	int matris_1[3][4];
	printf("please complete the matrix \n");
	
	int i,j;
	
	for (i=0;i<3;i++){
		
		for(j=0;j<4;j++){
			
			scanf("%d",&matris_1[i][j]);
			
		}
	}
	
	push(matris_1, 3);
	// matrix li tan�mlad��m�z fonksiyonu �a��r�rken b�yle �a��r�yoruz.
	
	
	
	
	
return 0;	
	
}


