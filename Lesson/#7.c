#include<stdio.h>
#define PI 3.14
// yukar�da PI de�erini 3.14 olarak atad�k 
/*
1- kullan�c�dan de�er al
2- kullan�c�n�n girdi�i de�er ile dairenin �evresini hesapla
3- kullan�c�n�n girdi�i de�er ile dairenin alan�n� hesapla
4 - bu de�erleri yazd�r

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
