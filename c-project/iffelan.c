#include<stdio.h>
#include<locale.h> // t�rk�e karakter felan k�t�phane

int main(){



	setlocale(LC_ALL,"Turkish\n"); // bu fonksiyon sayesinde t�rk�e karkaterleri kullanabiliyoruz   
	
	
	
	
	/*int inp;
	printf("login a number:\n");
	scanf("%d",&inp);
	
	
	if(inp < 0){
		
		printf("this number is negative\n");// if kullan�m� 
	}
	
	
	printf("my program was the end\n");*/





// if ve else kullan�m� 
	/*int inp;
	printf("login a number\n");
	scanf("%d",&inp);
	
	if(inp % 2 == 0){
		
		printf("your number is dual\n");
	}
	else{
		
		printf("your number is single\n");
	}
	
	printf("my program was the end\n");*/
	
	
	
	
//	if , else if , else uses
	
/*	int inp1,inp2;
	printf("login two numbers\nlogin the first number\n");
	scanf("%d",&inp1);
	printf("login the second number\n");
	scanf("%d",&inp2);
	if(inp1 == inp2){
		
		printf("two number is equal\n");	
	}
	
	else if (inp1>inp2){
		printf("first number bigger than second number\n");
		
	}
	else if (inp1<inp2){
		printf("second number bigger than first number\n");
	}
	else {
		printf("your number is weird\n");
	}
	printf("the program was the end\n") */
	
	
	
	// switch-case
	
	double s1,s2;
	char operation;
	
	printf("choose the operation(+,-,/,x)\n");
	scanf("%s",&operation);
	printf("login two numbers\n");
	scanf("%lf %lf ",&s1,&s2);
	switch(operation){
		
		case '+' :
		printf("%lf + %lf = %lf\n",s1,s2,s1+s2);
		break;
		
		case '-' :
		printf("%lf-%lf = %lf\n",s1,s2,s1-s2);
		break;
		
		case 'x' :
		printf("%lfx%lf = %lf\n",s1,s2,s1*s2);
		break;
		
		case '/' :
		printf("%lf/%lf = %lf\n",s1,s2,s1/s2);
		break;
		
		default  :
		printf("your operation is not allow\n ");
			
	// burda yapt���m�z �ey scanf ile belirtti�imiz yere girdi�imiz de�i�kenleri at�yor sonra 
	// switche geliyo sonra bak�o switchin i�ine girdi�imiz de�i�kenin sahip oldu�u bi de�i�ken girilmi�se
	// switche giriyor sonra case lerden uygun olan� se�ip i�lemi yap�yor
	// default de�er ise belirtti�imiz �eylerden birini kullan�c� girmesse otomatik olarak defaultda belirtti�imiz �eyi yapar.
	// c dilinde char i�in ' '	kullan string i�in " "  kullan 
	
	}
	return 0;
}
