#include<stdio.h>//bunlar k�t�phane 
#include<limits.h>


int main(){
	
	/*  5 tane de�i�ken var char  int  double  float = double nin k�sa hali  void = bo� de�ersiz  */
	
	char a1 = 70;// burda 70 deilde F yazd�rd� ��nk� biz bunun cinsini char olarak se�tik ve oda harski tablosundan se�ti ve yazd�rd�
	char a2[] = "h";
	int a3 = 750;
	double a4 = 742.123;
	float a5 = 43.23;
	printf("a1 =  %c \n a2 = %s \n a3 = %d \n a4 = %0.3lf \na5 = %0.2f\n",a1,a2,a3,a4,a5);
	// yukar�da yapt���m�z 0.3 gibi �eyler �ey demek s�f�rdan sonra 3 basama�� g�ster 
	printf("char = %d\n",sizeof(char)); // burda char�n ne kadar yer kaplad���n� print ettircez
	printf("int = %d\n",sizeof(int)); // burda intin ne kadar yer kaplad���n� print ettircez
	printf("float = %d\n",sizeof(float)); // burda float�n ne kadar yer kaplad���n� print ettircez
	printf("double = %d\n",sizeof(double)); // burda doublenin ne kadar yer kaplad���n� print ettircez
	printf("void = %d\n",sizeof(void)); // burda voidin ne kadar yer kaplad���n� print ettircez
	// yukar�da g�sterdi�i b�y�kl�k birimi byte d�r		
	printf("%s", "hello world"); //burda ise yanda string tan�mlay�p i�eride %s ile formatlad�k
	
	
	
	return 0;
}
