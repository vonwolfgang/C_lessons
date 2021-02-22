#include<stdio.h>


int main(){
	
		
	
	int i,n;
	
	printf("if you want to stop this program, you have to touch 1\n");
	printf("if you want to keep going this program, you can touch anywhere\n");
	for(i=1;i<3;i++){
		
		printf("you are anonymous\n");
		i--;
		scanf("%d",&n);
		if (n==1){
			
			printf("Arrested\n");
			break;
		}
		
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
