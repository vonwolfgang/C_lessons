#include<stdio.h>
#include<math.h>
//kök felan almak için matematik kütüphanesi


int main(){
	
	/*int a,b,c,d,e;
	
	scanf("%d\n %d\n %d\n %d\n %d\n",&a,&b,&c,&d,&e);
	
	printf("%d",(a+b+c+d+e)/5);*/
	
	
	
	// ax^2 + bx + c = 0 biçimindeki denklemin köklerini bulma.
	
	int a,b,c;
	float x1,x2;
	float delta,kokdel;
	
	printf("%s","ax^2+bx+c = 0\n");
	
	printf("%s","please login the a:\n");
	scanf("%d",&a);
	
	printf("%s","please login the b:\n");
	scanf("%d",&b);
	
	printf("%s","please login the c:\n");
	scanf("%d",&c);
	
	delta = b*b-4*a*c;
	kokdel = sqrt(delta);
	
	x1 = (-b + kokdel ) / (2*a);
	x2 = (-b - kokdel) / (2*a);
	
	printf("root1=%f, root2=%f\n",x1,x2);
	
	
	
	
	
	
	return 0;
}
