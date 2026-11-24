#include <stdio.h>

int main(void){
	
	double prixHT, TVA_amount, TotalHT, TotalTTC;
	
	int produit_quantite;
	
	double const TVA = 0.2;
	
	
	printf("Prix unitaire en DH:");
	
	scanf("%lf",&prixHT);
	
	printf("Quantite de produit:");
	
	scanf("%d",&produit_quantite);
	
	TotalHT=prixHT*produit_quantite,
	
	TVA_amount= TVA*TotalHT;
	
	TotalTTC= TVA_amount+TotalHT;
	
	printf("%-17s %c%8.2f %s\n","Prix unitaire HT",':',prixHT,"DH");
	
	printf("%-17s %c%8d\n","Quantite", ':' ,produit_quantite);
	
	printf("%-17s %c%8.2f %s","Total HT",':',TotalHT, "DH\n");
	
	printf("%-17s %c%8.2f %s","Total TTC", ':',TVA_amount, "DH\n");
	
	printf("%-17s %c%8.2f %s","Total TTC",':',TotalTTC, "DH\n");
	
	
	
	
	
	
	
	
	return 0;
}