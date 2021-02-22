#include<stdio.h>
#define PI 3.14
// yukarýda PI deðerini 3.14 olarak atadýk 
/*
1- kullanýcýdan deðer al
2- kullanýcýnýn girdiði deðer ile dairenin çevresini hesapla
3- kullanýcýnýn girdiði deðer ile dairenin alanýný hesapla
4 - bu deðerleri yazdýr

*/




int main(){
	
	double v;
	float r, c, a;
	printf("%s","please login a number:\n");
	scanf("%f",&r);
	c = 2*PI*r;
	a = PI*r*r;
	v = (4/3)*PI*(r*r*r);
	printf("around of the circle: %f\narea of the circle: %f\nvolume of the circle: %f",c,a,v);
	
	return 0;
}
