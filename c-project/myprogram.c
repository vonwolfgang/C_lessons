#include<stdio.h>

int main(){
	
	int a,b,c,result;
	printf("please login the three notes : \n");
	printf("after login the notes , please write the result\n");
	scanf("%d\n",&a) , scanf("%d\n",&b) , scanf("%d\n",&c);
	result = (a+b+c)/3;
	printf("your avarage is = %d",result);
	
	
	
	
	
	return 0;
}
