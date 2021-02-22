#include<stdio.h>


int main(){
	
//  BURDA ARRAYLERLE BÝR PROGRAM YAPTIK. BU KULLANICIDAN ALINARAK OLUÞTURULAN MATRÝKSÝN 
// HER SÜTUNUNDAKÝ SAYILARI TOPLAYIP YAZDIRDI.
	
	int arrey[3][5];
	int i,j;
	int sumup=0;
	
	
	
	for (i=0;i<3;i++){
		
		for (j=0;j<5;j++){
		
			scanf("%d",&arrey[i][j]);
		}
	}
	
	
	
	printf("\n");
	
	
	
	
	for (i=0;i<3;i++){
		
		for (j=0;j<5;j++){
		
			printf("%d\t",arrey[i][j]);}
		
		printf("\n");
	}
	
	
	
	
	printf("\n");
	
	
	
	
	for (j=0;j<5;j++){
	
		sumup=0;
		
		for (i=0;i<3;i++){
		
			sumup = sumup + arrey[i][j];}
	
		printf("%d\t",sumup);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
