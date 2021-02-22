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
	int *jp1,*jp2=&j; // yanda jp1 ve jp2 iki þeklinde iki pointer tanýmladýk sonra jp2 pointýrýna j nin adres deðerini atadýk
	
	
	jp1=jp2; // jp2 ye atanan adres deðerini jp1'e de atadýk.
	
	i= ++(*jp2); // jp2 adrese sahipti *jp2 yaparak adrese git ve o deðeri kendine al dedik sonra o deðer 1 ekledik.
	// ve i ye eþitledik i artýk 2 olmuþ oldu.
	// YUKARIDAKÝ ÞEYDE GARÝP BÝR ÞEY OLUYOR VE NE OLDUÐUNU ANLAYAMADIM O GARÝP ÞEYDEN DOLAYI J 3 DEÐÝL 4 OLMUÞ OLUYO ONU ÖÐREN.
	
	
	
	*jp2 = *jp1 + i; // jp1 j'nin adresine sahipti *jp1 deyip o adrese git ve o deðeri kendine al dedik
	// i deðeri ise ikiydi i ile topladýk *jp1 deperini sonra jp2 j nin adresine sahipti *jp2' ye eþitleyerek 
	// bu aldýðýn deðeri j nin yerine ata dedik yani j artýk 3 olmuþ oldu.
	
	
	printf("i=%d, j=%d, *jp1=%d, *jp2=%d\n", i, j, *jp1, *jp2);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
