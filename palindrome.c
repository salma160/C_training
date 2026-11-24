#include<stdio.h>
/*#include<math.h>*/

int main(void){
	int n,n_temp,nbre=0,inverse=0,som=0;
	
	printf("Entrez votre nbre entre 0 et 99999\n");
	scanf("%d",&n); 
	
	while(n<0 || n>99999)
	{
		printf("Veuillez entrer un nbre entre 0 et 99999");
		scanf("%d",&n);
	}
	n_temp=n;
	
	do {
		som+=n_temp%10;
		inverse=inverse * 10 +(n_temp%10);
		/*printf("som= %d\n",som);*/
		n_temp=n_temp/10;
		nbre+=1;
		/*printf("nbre d'elements= %d\n",nbre);*/
	}
	while(n_temp!=0);
	
	printf("%d contient %d nbres \nLa somme des nbres est :%d\n",n,nbre,som);
		
	if(inverse == n) printf("%d est un palindrome.",n);
	else printf("%d n'est pas un palindrome.",n);
	
	return 0;
}
