#include<stdio.h>

int main(){
	
	int a=8,b=4;
	printf("a+b=%d\n",a+b); //toplama iþlemi yaptýk 
	int c;
	c = a+b;
	printf("c=%d\n",c); //fonksiyonu atama iþlemi yaptýk  
	
	
	
	printf("a-b=%d\n",a-b); //çýkarma iþlemi yaptýk 
	c = a-b;
	printf("c=%d\n",c); //fonksiyonu atama iþlemi yaptýk  
	
	
	
	printf("a*b=%d\n",a*b); //çarpma iþlemi yaptýk 
	c = a*b;
	printf("c=%d\n",c); //fonksiyonu atama iþlemi yaptýk  
	
	
	
		
	printf("a/b=%d\n",a/b); //bölme iþlemi yaptýk 
	c = a/b;
	printf("c=%d\n",c); //fonksiyonu atama iþlemi yaptýk  
	
	
	printf("a%%b=%d\n",a%b); //mod alma iþlemi yaptýk iki tane %% koyduk çünkü makina % ü format almak için kullanýyor format sanmasýn % iþareti olduðunu anlasýn diye iki tane koyduk 
	c = a%b;
	printf("c=%d\n",c); //fonksiyonu atama iþlemi yaptýk  
	
	
	int x=9,v=2;
	printf("x/v=%d\n",x/v); //bunu böle yaparsak sonuç int çýkar 
	printf("x/v=%f\n",(float)x/v) ;//bunu böle yaparsak sonuç float çýkar 
	
	
	int y=3,s=10;
	printf("y=%d s=%d\n\n",y,s);
	
	y++; //bir arttýrdýk 
	s--; //bir azalttýk 
	printf("y=%d s=%d\n",y,s);
	
	/*
	a+=b  -->  a=a+b
	a-=b  -->  a=a-b
	a*=b  -->  a=a*b
	a/=b  -->  a=a/b
	a%=b  -->  a=a%b
	
	bunlar böle 
	*/
	
	int e=5,q; //burda q diye bir int atadýk ama bi deðer vermedik ama içi boþ deil pc kafasýna göre biþe verdi 
	
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
	printf("q=%d\n",q);
	
	
	/* 
	ÝLÝÞKÝSEL ÝÞLEMCÝLER
	< --> küçüktür
	<= --> küçük eþittir
	> --> büyüktür
	>=  --> büyük eþittir
	== -->  eþitmidir için kullanýyoz 
	!= --> eþit deil ise
	
		*/
	
	int h=5,j=5,l=20;
	
	printf("h=j --> %d\n",h == j);
	printf("h>j --> %d\n",h > j);
	printf("h<j --> %d\n",h < j);
	printf("h!=j --> %d\n",h != j);
	printf("h<=j --> %d\n",h <= j);
	
	// yukarýdaki ifadelerin sonuçlarý 1 ve sýfýr 0 þeklinde oldu 
	
	/* MANTIKSAL ÝÞLEMCÝLER
	
	!    NOT
	&&   AND
	||   OR   
	Anlamýna gelirler */
	
	int t=5,w=5,r=20,result;
	result = (t==w && r>q);
	printf("result = (t==w && r>q) --> %d\n",result); // = 1
	// yukarýda bilgisayarýmýz matematikteki mantýk ifadelerini kullanarak bunun sonucunu yazdýrýcak
	 
	result = (t==w && r<q);
	printf("result = (t==w && r<q) --> %d\n",result); // = 0
	// yukarýda da mantýk ifadelerini kullandýk 
	result = (t==w || r>q);
	printf("result = (t==w || r>q) --> %d\n",result); // = 1
	// yukarýda da veya anlamýna gelen || iþaretini kullandýk 
	result = (t==w || r<q);
	printf("result = (t==w || r<q) --> %d\n",result); // = 1
	// yukarýda da gene veya anlamýna gelen || iþaretiyle mantýksal iþlem yaptýk 
	result = (t==w || r<q);
	printf("result = !((t==w || r<q))--> %d\n",!result); // = 0
	// yukarýda ise !result yaparak resultýn deðilini aldýk 
	
	
	/* ÝNPUT ALMA */
	
	int o,p=20,result_1;
	printf("p = %d\n",p);
	printf("p ile toplamak istediðiniz sayýyý yazdýrýnýz:\n");
	scanf("%d",&o);
	result_1 = o+p;
	printf("toplam = %d",result_1);
	return 0;
}
