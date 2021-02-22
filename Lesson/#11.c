#include<stdio.h>





int main(){
	
	
	int ex1,ex2,ex3,average,uniaverage;
	
	printf("%s","please login the exam 1:\n");
	scanf("%d",&ex1);
	
	printf("%s","please login the exam 2:\n");
	scanf("%d",&ex2);
	
	printf("%s","please login the exam 3:\n");
	scanf("%d",&ex3);
	
	average = (ex1 + ex2 + ex3)/3;
	
	printf("%s","please login the universty average:\n");
	
	scanf("%f",&uniaverage);
	
	if (average > 60){
		printf("%s","you passed");
	}
	
	else if (average == 60 && uniaverage > 2.5 ){ // && OPERATÖRÜ NEDEN ÝÞE YARAMIYOR ANLAMADIM
		
		printf("%s","you lucky you passed the test");
	}
	
	else if (average==50){ // eðer buraya else if deðilde if yazsaydýk bunu da ayrýca bi if olarak aldýðý için önce ilk ife sonra ikinci ife girerdi.
		
		printf("%s","you have a chance\n");
		
		if (uniaverage > 3.5 ){  // UNÝAVERAGE Ý NEDNE KONTROL ETMÝYOR ANLAMADIM
			printf("%s","You lucky, You don't have to take this lesson");
	}
		else {	
			printf("%s","Oh no, You have to take this lesson");
		}
			
		
	}
	
	else {
		
		printf("%s","you fail");
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
