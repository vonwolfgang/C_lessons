#include<stdio.h>

int main(){
	
	
	printf("hello world\n");
	
	int score,absenteeism ;
	printf("login the student's score\n ");
	scanf("%d",&score);   // yandaki �ey sayesinde kullan�c�dan input edebiliyoz
	printf("login the student's absenteeism (1:absteneeism)\n");
	scanf("%d",&absenteeism);
	
	if(score >= 50 && absenteeism != 1 ){
		
		printf("the student pass the class");
		
	}  // biz burda if ko�ulunu inceledik
	
	else{
		
		
		printf("the students miss the class");
	} // burdada else inceledik
	
	
	
	
	
	
	
	return 0; 

}
