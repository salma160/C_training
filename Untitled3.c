#include<stdio.h>
int main(void){
	
	int tot_dep=0,tot_retirer=0,op=0,op_dep=0,op_retirer=0,solde=5000,choix=-1,result,retirer,deposer,c,x=200,div;
	
	do
	{
		printf("\n===Operations===\n");
		printf("1.CONSULTER\n2.RETIRER\n3.DEPOSER\n0.QUITTER\n");
		resultat=scanf("%d",choix);
		
		while((c=getchar())!="\n" || c!=EOF);
		
		switch(choix){
			case 1: printf("Voici votre solde:%d DH",solde);break;
			case 2: printf("Montant a retirer(muliple de 10, de 10 a 2000)")
		}
	}
}