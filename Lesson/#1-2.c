#include<stdio.h>



int main(){
	
	printf("hello anonymous\n");
	
	printf("welcome to the house of hacking \t My house is your house\n");
	
	// \n --> newline , \t --> bir tab boþluk , "//" --> tek satýrlýk yorum , "/* */" --> çoklu yorum satýrý 
	
	// char , int , float , double , short , long  --> deðiþkenler
 	
	//  char --> 1 byte(8 bit) 0 dan 255(2^8) e kadar deðer alýr. Her bir deðer ASCII tablosundaki bir deðere denk gelir,%c format tipi kullanýlýr
	// int --> 4 byte(32 bit)   -2^16  dan 2^16 a kadar deðer alýr , tam deðerlerdir, %d format tipi kullanýlýr
	// short int --> int in küçük hali gibi, 2 byte(16 bit), -2^8 2^8 arasý deðer alýr, tam sayýdýr
	// long int --> intin büyük hali, 8 byte(64 bit), -2^32  2^32 kadar deðer alýr, tam sayýdýr
	// float --> kesirli sayýlar içindir, byte'ý iþletim sistemine göre deðiþebilir,%f format tipi kullanýlýr
	// double --> kesirli sayýlar içindir ama floatýn daha büyük hali, byte'ý iþletim sistemine göre deðiþebilir, %f format tipi kullanýlýr
	
	/*
	char c1 = 'a'
	printf("%d",c1) --> eðer böle yaparsak a'nýn ASCII tablosudaki sayýsal deðerini yazdýrýr		 
	*/ 
	// %s --> karakter dizileri için kullanýlýr örnek: printf("%s","anonymous")
	
	int a1=42;
	char a2=66;
	char a3= 'A';
	float c1=4.2;
	double d1=0.21;
	// NOT CHAR DA KARAKTER TANIMLARKEN '' BU TIRNAÐI KULLAN
	
	printf("%d %c %10c %.1f %.2f %s\n",a1,a2,a3,c1,d1,"hello again");
	
	// NOT EÐER %.1f gibi yazarsak nokta dan sonraki kadar deðeri gösterir
	//NOT %10c gibi yazarsak ise bundan önce baya bi boþluk atar
	
	printf("%d byte\n",sizeof(char));
	
	printf("%d byte\n",sizeof(int));
	
	printf("%d byte\n",sizeof(short int));
	
	printf("%d byte\n",sizeof(long int));
	
	printf("%d byte\n",sizeof(float));
	
	printf("%d byte\n",sizeof(double));
	
	// yukarýda deðiþkenlerin boyutunu öðrendik 
	// NOT C dilinde girinti den biþe olmuyo burdaki alanlar süslü parentezle belirleniyor
	
	
	
 	return 0;
}
