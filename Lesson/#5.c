#include<stdio.h>

int main(){
	
	
	
	/*int y=4;
	y++; postfix burda y'yi kullandýðýmýz ilk iþlemde y nin ilk deðeri olan 4 ü yazdýrýr sonraki iþlemlerde y'yi bir arttýrarak 5 yazýdrmaya baþlar
	++y; prefix bu ise direk y'yi 1 arttýrýp yazar yani 5 yazdýrýr
	y--; postfix 'in eksi versiyonu
	--y; prefix 'in eksi versiyonu*/ 
	
	/*
	a+=b  -->  a=a+b
	a-=b  -->  a=a-b
	a*=b  -->  a=a*b
	a/=b  -->  a=a/b
	a%=b  -->  a=a%b
	
	bunlar böle 
	*/
	
	/*int e=5,q; burda q diye bir int atadýk ama bi deðer vermedik ama içi boþ deil pc kafasýna göre biþe verdi 
	
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
	iç içe atamalar 
	
	int a=b=j=k=0;  birçok þeyi ayný þeye atarken böle þeyler kullanabilirsin
	*/
	
	int x=5 , y = 7 , a = 2;
	
	x=y; // atamalar saðdaki deðerin soldakine atanmasýyla gerçekleþir yani y 'nin deðeri x'e atandý burda
	y = x+a+1;
	printf("x:%d y:%d a:%d\n",x,y,a);
	
	x=4 , y=5 , a=6;
	
	printf("x:%d y:%d a:%d\n",--x,++y,a++); // a 'da postfix olduðu için bu iþlemde deðerini artýrmadan yazdýrdý
	printf("%d\n",a);  // bu a için ikinci iþlem olduðu için deðerini 1 arttýrarak yazdýrdý
	
	
	
	
	
	
	return 0;
}
