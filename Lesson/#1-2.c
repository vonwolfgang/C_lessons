#include<stdio.h>



int main(){
	
	printf("hello anonymous\n");
	
	printf("welcome to the house of hacking \t My house is your house\n");
	
	// \n --> newline , \t --> bir tab bo�luk , "//" --> tek sat�rl�k yorum , "/* */" --> �oklu yorum sat�r� 
	
	// char , int , float , double , short , long  --> de�i�kenler
 	
	//  char --> 1 byte(8 bit) 0 dan 255(2^8) e kadar de�er al�r. Her bir de�er ASCII tablosundaki bir de�ere denk gelir,%c format tipi kullan�l�r
	// int --> 4 byte(32 bit)   -2^16  dan 2^16 a kadar de�er al�r , tam de�erlerdir, %d format tipi kullan�l�r
	// short int --> int in k���k hali gibi, 2 byte(16 bit), -2^8 2^8 aras� de�er al�r, tam say�d�r
	// long int --> intin b�y�k hali, 8 byte(64 bit), -2^32  2^32 kadar de�er al�r, tam say�d�r
	// float --> kesirli say�lar i�indir, byte'� i�letim sistemine g�re de�i�ebilir,%f format tipi kullan�l�r
	// double --> kesirli say�lar i�indir ama float�n daha b�y�k hali, byte'� i�letim sistemine g�re de�i�ebilir, %f format tipi kullan�l�r
	
	/*
	char c1 = 'a'
	printf("%d",c1) --> e�er b�le yaparsak a'n�n ASCII tablosudaki say�sal de�erini yazd�r�r		 
	*/ 
	// %s --> karakter dizileri i�in kullan�l�r �rnek: printf("%s","anonymous")
	
	int a1=42;
	char a2=66;
	char a3= 'A';
	float c1=4.2;
	double d1=0.21;
	// NOT CHAR DA KARAKTER TANIMLARKEN '' BU TIRNA�I KULLAN
	
	printf("%d %c %10c %.1f %.2f %s\n",a1,a2,a3,c1,d1,"hello again");
	
	// NOT E�ER %.1f gibi yazarsak nokta dan sonraki kadar de�eri g�sterir
	//NOT %10c gibi yazarsak ise bundan �nce baya bi bo�luk atar
	
	printf("%d byte\n",sizeof(char));
	
	printf("%d byte\n",sizeof(int));
	
	printf("%d byte\n",sizeof(short int));
	
	printf("%d byte\n",sizeof(long int));
	
	printf("%d byte\n",sizeof(float));
	
	printf("%d byte\n",sizeof(double));
	
	// yukar�da de�i�kenlerin boyutunu ��rendik 
	// NOT C dilinde girinti den bi�e olmuyo burdaki alanlar s�sl� parentezle belirleniyor
	
	
	
 	return 0;
}
