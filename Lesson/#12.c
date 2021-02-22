#include<stdio.h>

/*
öğrenciden içerik al vize1, vize2, vize3, dersort
hepsinin ortalamsını al 
ortalamaya göre öğrenciye tavsiyeler ver.


*/

int main(){
	
		
	int e1,e2,e3;
	
	float aver,s_aver;
	
	
	
	
	
	printf("please login the first exam:\n");
	scanf("%d",&e1);
	
	printf("please login the second exam:\n");
	scanf("%d",&e2);

	printf("please login the third exam:\n");
	scanf("%d",&e3);
	
	printf("%s","please login the school average:\n");
	scanf("%f",&s_aver);
	
	
	
	
	aver = e1*0.3+e2*0.3+e3*0.4;
	
	
	
	
	if (aver>=90){
		printf("your note is AA and your average of lesson: %f\n",aver);
	}
	
	
	else if (aver>=85 && aver<90) {
		printf("your note is BA and your average of lesson: %f\n",aver);
	}
	
	
	else if (aver>=80 && aver<85){
		printf("your note is BB and your average of lesson: %f\n",aver);
	}
	
	
	else if (aver>=75 && aver<80){
		printf("your note is CB and your average of lesson: %f\n",aver);
	}
	
	
	else if (aver>=70 && aver<75){
		printf("your note is CC and your average of lesson: %f\n",aver);
		if (s_aver < 2.5){
			printf("%s","I think, You should take lesson again");
		}
	}
	
	
	else if (aver>=65 && aver<70){
		printf("your note is DC and your average of lesson: %f\n",aver);
		if (s_aver < 2.5){
			printf("%s","I think, You should take lesson again");}
	}
	
	
	else if (aver>=60 && aver<65){
		printf("your note is DD and your average of lesson: %f\n",aver);
		if (s_aver < 2.5){
			printf("%s","I think, You should take lesson again");}
	}
	
	else {
		printf("your note is FF and your average of lesson: %f\n",aver);
		printf("you fail this lesson");
	}
	
	
	
	
	
	
	
	
	
	
		return 0;
}
