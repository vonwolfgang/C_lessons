#include<stdio.h>


int main(){
	
	
	/*
	switch case  biraz if'e benzer bi�ey ama tam olarak de�il switch'in i�ine kullan�c�dan ald���m�z bi de�er koyduk
	bu de�ere g�re case'ler belirledik kullan�c� hangi de�eri basarsa o case �al���yor ama e�er case'in sonuna break koymassak
	o case'den itibaren di�er case 'lerde �al���r bu y�zden sonuna break koyduk b�ylece i�lemlerimizi ger�ekle�tirdik. 
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
