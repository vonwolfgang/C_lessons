#include<stdio.h>

int main(){
	
	printf("hello world");
	
	int number1=8;
	
	printf("  number1 = \t %d",number1);
	
	float number2=5.1;
	printf("  number2 = \t %f ",number2);
	
	float number3=5.15;
	printf("  number3 = \t %.1f ",number3);  //e�er b�le .1 koyarsak . tadan sonra bir karakteri al�r bu y�zden bunu yuvarlamak zorunda kal�r 
	
	char isim[]="omer ozkan ";
	printf("isim = %s",isim);
	printf("isimin ilk harfi \t %c",isim[0]);
	// %c dedik ��nk� harf al�yoz
	// \t koydu�umuz yerden 1 tab kadar bo�luk b�rakt� 
	
	
	
	return 0;
}
