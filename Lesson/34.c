


#include<stdio.h>


void value_1(int *a, int *b){   // burdaki fonksiyonda parametre olarak pointer verdik. Pointer verdiðimiz için
								// fonksiyonu çaðýrýrken parametre vericeðimiz yere atýcaðýmýz deðiþkenlerin adresini atamamýz gerek.
								// yani & bu iþaretle koyarýz. 
	
	int tut=*a;
	
	*a = *b;
	*b = tut;
	
	printf("a = %d  b = %d",*a, *b);	
}





int main(){
	
	
	int x=5, y=10;
	
	value_1(&x,&y);
	printf("\n");
	printf("x = %d y = %d",x, y); // bu sefer x ve y nin deðerleri deðiþti çünkü biz pointer parametresi vererek 
	// adres deðiþimi yaptýk bunun ismide call by reference.  
	
	
	
	return 0;
}








