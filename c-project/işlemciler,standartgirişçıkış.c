#include<stdio.h>

int main(){
	
	int a=8,b=4;
	printf("a+b=%d\n",a+b); //toplama i�lemi yapt�k 
	int c;
	c = a+b;
	printf("c=%d\n",c); //fonksiyonu atama i�lemi yapt�k  
	
	
	
	printf("a-b=%d\n",a-b); //��karma i�lemi yapt�k 
	c = a-b;
	printf("c=%d\n",c); //fonksiyonu atama i�lemi yapt�k  
	
	
	
	printf("a*b=%d\n",a*b); //�arpma i�lemi yapt�k 
	c = a*b;
	printf("c=%d\n",c); //fonksiyonu atama i�lemi yapt�k  
	
	
	
		
	printf("a/b=%d\n",a/b); //b�lme i�lemi yapt�k 
	c = a/b;
	printf("c=%d\n",c); //fonksiyonu atama i�lemi yapt�k  
	
	
	printf("a%%b=%d\n",a%b); //mod alma i�lemi yapt�k iki tane %% koyduk ��nk� makina % � format almak i�in kullan�yor format sanmas�n % i�areti oldu�unu anlas�n diye iki tane koyduk 
	c = a%b;
	printf("c=%d\n",c); //fonksiyonu atama i�lemi yapt�k  
	
	
	int x=9,v=2;
	printf("x/v=%d\n",x/v); //bunu b�le yaparsak sonu� int ��kar 
	printf("x/v=%f\n",(float)x/v) ;//bunu b�le yaparsak sonu� float ��kar 
	
	
	int y=3,s=10;
	printf("y=%d s=%d\n\n",y,s);
	
	y++; //bir artt�rd�k 
	s--; //bir azaltt�k 
	printf("y=%d s=%d\n",y,s);
	
	/*
	a+=b  -->  a=a+b
	a-=b  -->  a=a-b
	a*=b  -->  a=a*b
	a/=b  -->  a=a/b
	a%=b  -->  a=a%b
	
	bunlar b�le 
	*/
	
	int e=5,q; //burda q diye bir int atad�k ama bi de�er vermedik ama i�i bo� deil pc kafas�na g�re bi�e verdi 
	
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
	�L��K�SEL ��LEMC�LER
	< --> k���kt�r
	<= --> k���k e�ittir
	> --> b�y�kt�r
	>=  --> b�y�k e�ittir
	== -->  e�itmidir i�in kullan�yoz 
	!= --> e�it deil ise
	
		*/
	
	int h=5,j=5,l=20;
	
	printf("h=j --> %d\n",h == j);
	printf("h>j --> %d\n",h > j);
	printf("h<j --> %d\n",h < j);
	printf("h!=j --> %d\n",h != j);
	printf("h<=j --> %d\n",h <= j);
	
	// yukar�daki ifadelerin sonu�lar� 1 ve s�f�r 0 �eklinde oldu 
	
	/* MANTIKSAL ��LEMC�LER
	
	!    NOT
	&&   AND
	||   OR   
	Anlam�na gelirler */
	
	int t=5,w=5,r=20,result;
	result = (t==w && r>q);
	printf("result = (t==w && r>q) --> %d\n",result); // = 1
	// yukar�da bilgisayar�m�z matematikteki mant�k ifadelerini kullanarak bunun sonucunu yazd�r�cak
	 
	result = (t==w && r<q);
	printf("result = (t==w && r<q) --> %d\n",result); // = 0
	// yukar�da da mant�k ifadelerini kulland�k 
	result = (t==w || r>q);
	printf("result = (t==w || r>q) --> %d\n",result); // = 1
	// yukar�da da veya anlam�na gelen || i�aretini kulland�k 
	result = (t==w || r<q);
	printf("result = (t==w || r<q) --> %d\n",result); // = 1
	// yukar�da da gene veya anlam�na gelen || i�aretiyle mant�ksal i�lem yapt�k 
	result = (t==w || r<q);
	printf("result = !((t==w || r<q))--> %d\n",!result); // = 0
	// yukar�da ise !result yaparak result�n de�ilini ald�k 
	
	
	/* �NPUT ALMA */
	
	int o,p=20,result_1;
	printf("p = %d\n",p);
	printf("p ile toplamak istedi�iniz say�y� yazd�r�n�z:\n");
	scanf("%d",&o);
	result_1 = o+p;
	printf("toplam = %d",result_1);
	return 0;
}
