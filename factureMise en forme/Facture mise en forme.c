#include <stdio.h>

int main(void){
	
	double prixHT, TVA_amount, TotalHT, TotalTTC;
	
	int produit_quantite;
	
	const double TVA = 0.1;
	
	
	printf("Prix unitaire en DH:");
	
	scanf("%lf",&prixHT);
	
	printf("Quantite de produit:");
	
	scanf("%d",&produit_quantite);
	
	TotalHT=prixHT*produit_quantite,
	
	TVA_amount= TVA*TotalHT;
	
	TotalTTC= TVA_amount+TotalHT;
	
	printf(" Prix unitaire HT :%8.2f DH\n",prixHT);
	
	printf(" Quantite         :%8d\n",produit_quantite);
	
	printf(" Total HT         :%8.2f DH\n", TotalHT);
	
	printf(" TVA (20%%)        :%8.2f DH\n",TVA_amount);
	
	printf(" Total TTC        :%8.2f DH",TotalTTC);
	
	
	
	
	
	
	
	
	return 0;
}