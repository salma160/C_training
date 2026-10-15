#include <stdio.h>
#include <ctype.h>

int main(void){
	
	int c;
	
	printf("Tapez une lettre minuscule :");
	
	c=getchar();
	
	printf("\nCaractere lu :");
	
	putchar(c);
	
	printf("\nCode ASCII :%d",c);
	
	printf("\nSuivant :%c",c+1);
	
	printf("\nMajuscule :%c",toupper(c));
	
	
	
	
	
	return 0;	
}