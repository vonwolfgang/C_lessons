#include<stdio.h>


int main(){
	
	
	int a = 5, *ap;
	float b = 3.2, *bp;
	double c = 3.3213, *cp;
	char d = 'a', *dp;
	
	int number[5] = {1,2,3,4,5}, *arrayp;
	
	
	ap = &a;
	bp = &b;
	cp = &c;
	dp = &d;
	arrayp = &number[1];
	
	printf(" %u adresideki int degeri %d \n ",ap,*ap);
	printf(" %u adresideki float degeri %f \n ",bp,*bp);
	printf(" %u adresideki double degeri %lf \n ",cp,*cp);
	printf(" %u adresideki char degeri %c \n ",dp,*dp);
	printf(" %u adresideki arrayin 1. indeks degeri %d \n ",arrayp,*arrayp);
	
	
	int i,j=1;
	int *jp1,*jp2=&j; // yanda jp1 ve jp2 iki �eklinde iki pointer tan�mlad�k sonra jp2 point�r�na j nin adres de�erini atad�k
	
	
	jp1=jp2; // jp2 ye atanan adres de�erini jp1'e de atad�k.
	
	i= ++(*jp2); // jp2 adrese sahipti *jp2 yaparak adrese git ve o de�eri kendine al dedik sonra o de�er 1 ekledik.
	// ve i ye e�itledik i art�k 2 olmu� oldu.
	// YUKARIDAK� �EYDE GAR�P B�R �EY OLUYOR VE NE OLDU�UNU ANLAYAMADIM O GAR�P �EYDEN DOLAYI J 3 DE��L 4 OLMU� OLUYO ONU ��REN.
	
	
	
	*jp2 = *jp1 + i; // jp1 j'nin adresine sahipti *jp1 deyip o adrese git ve o de�eri kendine al dedik
	// i de�eri ise ikiydi i ile toplad�k *jp1 deperini sonra jp2 j nin adresine sahipti *jp2' ye e�itleyerek 
	// bu ald���n de�eri j nin yerine ata dedik yani j art�k 3 olmu� oldu.
	
	
	printf("i=%d, j=%d, *jp1=%d, *jp2=%d\n", i, j, *jp1, *jp2);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
