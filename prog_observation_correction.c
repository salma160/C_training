#include <stdio.h>

int main(void){
	
	int recu,age = -1;
	char initiale;
	
	printf("Age : ");
	recu=scanf("%d", &age);
	printf("Initiale : ");
	getchar(); /*pour récupérer le \n de trop dû à l'entrée de age ( le buffer contient \n d'abord)*/
	scanf("%c",&initiale);
	printf("nombre d'elements recus=%d, age = %d, code de initiale et son symbole = %d,%c\n ", recu,age, initiale,initiale);	
	
	
	return 0;
}