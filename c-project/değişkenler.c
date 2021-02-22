#include<stdio.h>

int main(){
	
	printf("hello world");
	
	int number1=8;
	
	printf("  number1 = \t %d",number1);
	
	float number2=5.1;
	printf("  number2 = \t %f ",number2);
	
	float number3=5.15;
	printf("  number3 = \t %.1f ",number3);  //eğer böle .1 koyarsak . tadan sonra bir karakteri alır bu yüzden bunu yuvarlamak zorunda kalır 
	
	char isim[]="omer ozkan ";
	printf("isim = %s",isim);
	printf("isimin ilk harfi \t %c",isim[0]);
	// %c dedik çünkü harf alıyoz
	// \t koyduğumuz yerden 1 tab kadar boşluk bıraktı 
	
	
	
	return 0;
}
