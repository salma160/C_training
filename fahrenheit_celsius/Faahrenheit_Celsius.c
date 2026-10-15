#include <stdio.h>
#include <string.h>

void celsius_F(){
	
	char agree[4]="";
	
	printf("Voulez vous saisir une temperature en celsius(YES/NO)\?");
	
	scanf("%s",agree);
	
	while(strcmp(agree,"YES")==0){
		
	double celsius;
	
	printf("Saisir votre temperature en Celsius:");
	
	scanf("%lf",&celsius);
	
	printf("%.1f C = %.1f F\n",celsius,celsius*9/5+32);
	
	printf("Voulez vous saisir une temperature en celsius(YES/NO)\?");
	
	scanf("%s",agree);
	
	
	}
		
}

int main(void){
	/*

	sans fonction

	double celsius;

	printf("Saisir une temperature en Celsius:");

	scanf("%lf",&celsius);

	printf("%.1f C = %.1f F",celsius,celsius*9/5+32);

	*/
	



/*avec fonction*/
	
	celsius_F();
	
	 
	
	
	
	
	
	return 0;
}