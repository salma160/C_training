#include <stdio.h>

int main(void){
	
	int a,b;
	
	printf("Veuillez saisir deux nombres entiers tels que a/b avec b different de 0:");
	
	scanf("%d %d",&a, &b);
	
	printf("%d + %d = %d\n", a,b,a+b);
	printf("%d - %d = %d\n", a,b,a-b);
	printf("%d * %d = %d\n", a,b,a*b);
	
	if(b==0){
		printf("ERREUR! DIVISION PAR b IMPOSSIBLE CAR b==0");
	}
	
	else{
		
		printf("%d / %d = %f\n",a,b,(float)(a/b)); 
		printf("%d / %d = %f\n",a,b,(float)a/b); 
		printf("%d %% %d = %d\n",a,b,a%b); 
	}
	
	
	
	return 0;
}