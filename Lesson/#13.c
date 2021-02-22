#include<stdio.h>


int main(){
	
	
	/*
	switch case  biraz if'e benzer bişey ama tam olarak değil switch'in içine kullanıcıdan aldığımız bi değer koyduk
	bu değere göre case'ler belirledik kullanıcı hangi değeri basarsa o case çalışıyor ama eğer case'in sonuna break koymassak
	o case'den itibaren diğer case 'lerde çalışır bu yüzden sonuna break koyduk böylece işlemlerimizi gerçekleştirdik. 
	*/
	
	
	int islem, bakiye=1000, tutar;
	
	printf("funcitons\n 1:get money\n 2:enter money\n 3:Transfer\n 4:show remainder\n 5:return card\n\n\n");
	printf("choose the functions: ");
	scanf("%d",&islem);


	
	switch(islem){
		
		case 1:
			printf("your remainder : %d\n",bakiye);
			printf("login quantity of money for get money:  ");
			scanf("%d",&tutar);
			if (tutar >bakiye){
				printf("your money is not enough\n");
				break;
			}
			bakiye -= tutar;
			printf("your remainder: %d\n",bakiye);
			break;
			
			
		case 2:
			printf("your remainder : %d\n",bakiye);
			printf("login quantity of money for entry:  ");
			scanf("%d",&tutar);
			bakiye += tutar;
			printf("your remainder: %d\n",bakiye);
			break;
			
			
		case 3:	
			printf("your remainder : %d\n",bakiye);
			printf("login quantity of money for transfer :  ");
			scanf("%d",&tutar);
			if (tutar >bakiye){
				printf("your money is not enough\n");
				break;
			}
			bakiye -= tutar;
			printf("your remainder: %d\n",bakiye);
			break;
			
			
		case 4:
			printf("your remainder : %d\n",bakiye);
			break;
			
			
		case 5:	
			printf("your card returned\n");
			break;
		
		default: 
			printf("unknown functions\n");
			break;
	}
	
	
	
	
	return 0;
}
