#include<stdio.h>//bunlar kütüphane 
#include<limits.h>


int main(){
	
	/*  5 tane deðiþken var char  int  double  float = double nin kýsa hali  void = boþ deðersiz  */
	
	char a1 = 70;// burda 70 deilde F yazdýrdý çünkü biz bunun cinsini char olarak seçtik ve oda harski tablosundan seçti ve yazdýrdý
	char a2[] = "h";
	int a3 = 750;
	double a4 = 742.123;
	float a5 = 43.23;
	printf("a1 =  %c \n a2 = %s \n a3 = %d \n a4 = %0.3lf \na5 = %0.2f\n",a1,a2,a3,a4,a5);
	// yukarýda yaptýðýmýz 0.3 gibi þeyler þey demek sýfýrdan sonra 3 basamaðý göster 
	printf("char = %d\n",sizeof(char)); // burda charýn ne kadar yer kapladýðýný print ettircez
	printf("int = %d\n",sizeof(int)); // burda intin ne kadar yer kapladýðýný print ettircez
	printf("float = %d\n",sizeof(float)); // burda floatýn ne kadar yer kapladýðýný print ettircez
	printf("double = %d\n",sizeof(double)); // burda doublenin ne kadar yer kapladýðýný print ettircez
	printf("void = %d\n",sizeof(void)); // burda voidin ne kadar yer kapladýðýný print ettircez
	// yukarýda gösterdiði büyüklük birimi byte dýr		
	printf("%s", "hello world"); //burda ise yanda string tanýmlayýp içeride %s ile formatladýk
	
	
	
	return 0;
}
