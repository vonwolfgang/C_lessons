#include<stdio.h>

int main(){
	
	
	
	/*int y=4;
	y++; postfix burda y'yi kulland���m�z ilk i�lemde y nin ilk de�eri olan 4 � yazd�r�r sonraki i�lemlerde y'yi bir artt�rarak 5 yaz�drmaya ba�lar
	++y; prefix bu ise direk y'yi 1 artt�r�p yazar yani 5 yazd�r�r
	y--; postfix 'in eksi versiyonu
	--y; prefix 'in eksi versiyonu*/ 
	
	/*
	a+=b  -->  a=a+b
	a-=b  -->  a=a-b
	a*=b  -->  a=a*b
	a/=b  -->  a=a/b
	a%=b  -->  a=a%b
	
	bunlar b�le 
	*/
	
	/*int e=5,q; burda q diye bir int atad�k ama bi de�er vermedik ama i�i bo� deil pc kafas�na g�re bi�e verdi 
	
	q = e;
	
	q += e;
	printf("q=%d\n",q);
	
	q *= e;
	printf("q=%d\n",q);
	
	q -= e;
	printf("q=%d\n",q);
	
	q /= e;
	printf("q=%d\n",q);
	
	q %= e;
	printf("q=%d\n",q);*/
	
	/*
	i� i�e atamalar 
	
	int a=b=j=k=0;  bir�ok �eyi ayn� �eye atarken b�le �eyler kullanabilirsin
	*/
	
	int x=5 , y = 7 , a = 2;
	
	x=y; // atamalar sa�daki de�erin soldakine atanmas�yla ger�ekle�ir yani y 'nin de�eri x'e atand� burda
	y = x+a+1;
	printf("x:%d y:%d a:%d\n",x,y,a);
	
	x=4 , y=5 , a=6;
	
	printf("x:%d y:%d a:%d\n",--x,++y,a++); // a 'da postfix oldu�u i�in bu i�lemde de�erini art�rmadan yazd�rd�
	printf("%d\n",a);  // bu a i�in ikinci i�lem oldu�u i�in de�erini 1 artt�rarak yazd�rd�
	
	
	
	
	
	
	return 0;
}
