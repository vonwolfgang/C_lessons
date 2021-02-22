#include<stdio.h>


/*  

  >  büyükmüdür
  
  < küçükmüdür
  
  >= büyük yada eþitmidir
  
  <= küçük yada eþitmidir
  
  == eþitmidir
  
  !=  eþit deðilmidir

---------------------------------------

MANTIKSAL BAÐLAYICILAR

&& veya and --> "ve" anlamýna gelir

|| veya or  -->  "ya da"  anlamýna gelir

! veya not --> "deðili"  anlamýna gelir
---------------------------------------

ÞARTLI CÜMLELER

a = x > y ? x: y;   ----> burdaki ifadede x büyük y ise (ise anlamýný "?" bu kattý) tüm sonuç 
x'e eþit deðil ise(deðil ise anlamýný ":" bu kattý) tüm sonuç y'e eþit.  
-----------------------------------------------------------------

NOT: C dilinde 0 hariç tüm sayýsal deðerler True'dur 0'ýn eþiti False'dur.
----------------------------------------------------

*/

int main(){
	
	
	int a,b=20,c=30;
	
	a = b < c ? b: c;
	
	printf("%d",a);
	
	
 	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
