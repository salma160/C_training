/*TP3

--fr : ici les exs de 1 à 4 sont regroupés(sauf l'ex 5 quoique la déclaration de ses variables aie été faite au début au même titre que celles des autres): les uns complétant les autres ainsi la déclaration des variables regroupe celles de tous ceux pré-mentionnés --
--eng : the exercises from 1 to 4 (also the 5th,eventhoug it doesn't directly match with them,it's var declaration is among the other's) cover the same problem, as each one completes the others; thus, the first declaration of variables gathers all the others  --
--DE: alle die übungen von 1 bis 4 (sonst die fünfte, obwohl ihre Variablendeklaration Bestandteil der Deklaration der anderen ist) sind komplementär und gehören zum selben Thema. Somit die erste Deklaration fasst alle die andern zusammen. --
*/


#include <stdio.h>
#define NMAX 30
#define NMAT 3

int main(void){
	

	int notes[NMAX],eff[5]={0},tri[NMAX]={0},nt[NMAX][NMAT];
	int n,i,result,c,taille,min=20,max=0,admis=0,iMin,iMax,som=0,k,j,indexMax,major=0,temp;
	
	
	do {
		printf("saisissez le nbre d'etudiants(30 maximum): ");
		result=scanf("%d",&n);
		while((c=getchar())!='\n' && c!=EOF);
 	}while(result!=1);
 	
 	if(n<1 || n>NMAX){
 		printf("ERREUR! de le nbre d'etudiants est hors plage acceptee.");
 		return 1;		
	 }
	
	printf("Veuillez saisir les %d notes:\n",n);
	
	for(i=0;i<n;i++){
		
		do{
			result=scanf("%d",&notes[i]);
			while((c=getchar())!='\n' && c!=EOF);
		}while(result!=1);
		
		if(notes[i]<0 || notes[i]>20){
			printf("ERREUR DE SAISIE DE NOTE");
			return 1;
		}
	}
	
	/*array's display */
	
	printf("Votre tab de notes:\n");
	
	for(i=0;i<n;i++) {
		
		printf("%d",notes[i]);
		if(i<n-1) printf("-");
		else printf("\n");
	}
	
	taille=sizeof(notes)/4 ;/* real size of notes*/
	
	printf("Le nbre d'elements reellement contenus dans votre tableau est: %d\nLe nombre d'elements reellement saisi est :%d\n",taille,n);
	
	/*ex2*/
	
	for(i=0;i<n;i++){
		if(notes[i]>=10) admis+=1;
		
		if(notes[i]<min){
			min=notes[i];
			iMin=i;
		}
		else if( notes[i]>max){
			max=notes[i];
			iMax=i;
		}
		som+=notes[i];
	}
	
	printf("-La moyenne  des notes:%.2f\n-La note min:%d;son indice:%d\n-La note max:%d;son indice:%d\n-Le nbre d'etudiants admis:%d\n-Leur pourcentage:%.1f %\n",
			(double)som/n,min,iMin,max,iMax,admis,(double)(admis*100)/n);
	/*ex3*/
	
	/*we have already verfied that all the notes are between 0 and 20*/
	
	for(k=0;k<n;k++){
		j=notes[k]/4;
		switch(j){
			case 0:eff[0]++ ; break;
			case 1:eff[1]++ ; break; 
			case 2:eff[2]++ ; break;
			case 3:eff[3]++ ; break;
			case 4:case 5: eff[4]++ ; break; /*notes[k]==20 hier included*/
		}
	}
	
	/*display the count of each grade range*/
	
	for(k=0;k<5;k++){
		switch(k){
			case 0:printf("\n0-3:");break;
			case 1:printf("\n4-7:");break;
			case 2:printf("\n8-11:");break;
			case 3:printf("\n12-15:");break;
			case 4:case 5:printf("\n16-20:");break;
		}
		for(j=0;j<eff[k];j++){
			printf("*");
			}
			if(k==4) printf("\n");
		
	}
	
	/*ex4*/
	
	for(j=0;j<n;j++)
		tri[j]=notes[j];
		
	/* sort by selection*/
		
	for(j=0;j<n;j++){
		max=tri[j];indexMax=j;
		for(k=j+1;k<n;k++){
			if(max<tri[k]){
				max=tri[k];
				tri[k]=tri[indexMax];
				tri[indexMax]=max;
			}
		}
	}
	
	for(k=0;k<n;k++) printf("note %d est:%d\n",k+1,tri[k]);
	
	if(n%2!=0) printf("La mediane est:%d\n",tri[n/2]);
	
	else printf("La mediane est:%.2f\n",(double)(tri[n/2]+tri[n/2-1])/2);
	
	printf("Tableau initiale:");
	
	for(k=0;k<n;k++){
		printf("%d",notes[k]);
		if(k<n-1) printf("-");
		else printf("\n");
	}
	
	/* hier begins the 5th exercise in witch we'll use the elements of the ones before - usufull to mention that it could've been included from the beginning in the ex 1 structure'*/	
	
	printf("#######Maintenant, passons aux notes matieres.#######\n");
	
	for(i=0;i<n;i++){
		for(j=0;j<3;j++){
			do{
				printf("Etudiant %d: note matiere %d:\n",i,j+1);
				result=scanf("%d",&nt[i][j]);
				while((c=getchar())!='\n' && c!=EOF);
			}while(nt[i][j]<0 || nt[i][j]>20 || result!=1);
		}
	}
	
	/*display*/
	
	for(i=0;i<n;i++)
		printf("Etudiant %d: %d , %d , %d\n",i+1,nt[i][0],nt[i][1],nt[i][2]);
		
	/*calculus of each subject's mean*/
	
	for(j=0;j<3;j++){
		som=0;
		for(i=0;i<n;i++){
			som+=nt[i][j];
		}
		printf("La moyenne de la matiere %d : %.2f\n",j+1,(double)som/n);
	}
	
	for(i=0;i<n;i++){
		temp=nt[i][0]+nt[i][1]+nt[i][2];
		
		if(som<temp){
			major=i;
			som=temp;
		}
	}
	
	printf("Meilleur etudiant(meilleur note) est le num: %d, avec une moyenne de : %.2f.",major,(double)som/3);
		
	
	return 0;

}
