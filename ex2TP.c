#include<stdio.h>
int main(void){
	int i,c,nbre_notes=0,result;
	double note=0.0,max=0,min=20,mean=0.0;
	
	printf("combien de notes aimeriez vous sortir?\n");
	result=scanf("%d",&nbre_notes);
	/*if(result==EOF) return -1;*/
	while((c=getchar())!='\n' && c!=EOF);
	for(i=0;i<nbre_notes;i++){
		do{
			printf("Note %d (0 a 20):\n",i+1);
			scanf("%lf",&note);
			while((c=getchar())!='\n' && c!=EOF);
		}while(note<0 || note >20);
		
		
		max=note>max?note:max;
		min=note<min?note:min;
		mean+=note;
	}
	mean=mean/nbre_notes;
	printf("\n");
	printf("Moyenne:%.2f\nMeilleure note:%.2f\nPlus faible note:%.2f",mean,max,min);
	
	return 0;
}