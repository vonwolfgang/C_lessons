#include<stdio.h>



int main(){
	
	int summary=0, i;
	
	
	/*
	for (i;i<11;i++) {
		
		
		if (i%2==1){
			continue;}

		summary+=i;
	}
	printf("%d", summary);
	*/
	
	i=0;
	while(i<11){	
		i++;
		if (i%2==1){
			continue;
		}
		summary +=i;	 
}
	
	printf("%d", summary);
	
	//CONTÝNUE ALTINDAKÝ HÝÇ BÝ SATIRI GÖRMEZ DÝREK DÖNGÜNÜN BAÞINA GEÇER.
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
