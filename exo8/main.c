#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "pair.h"

int main(int argc,char *argv[]){
	int* tete;
	tete=malloc(1*sizeof(int));
	tete[0]=atoi(argv[1]);
	int cache;
	int i=0;
	int fin=0;
	int test;
	int coupe;
	printf("l'hydre a %d têtes !\n",tete[0]);
	while (fin != 1){
		i++;
		cache=tete[0];
		tete[0]=tete[0]/2;
		coupe=cache-tete[0];
		printf("Au %de coup d'épée, Hercule coupe %d têtes,",i,coupe);
		test=pair(tete[0]);
		if (tete[0]==1){
			printf(" Il n'en reste plus qu'une.");
			fin=1;
		}
		else{
			printf(" Il en reste %d.",tete[0]);
		}
		if(fin !=1){
			if (test==0){
				printf(" Rien ne repousse.\n");
			}
			else{
				tete[0]=tete[0]*3;
				printf(" Des têtes repoussent, il y en a maintenant %d\n",tete[0]);
			}
		}
	}
	i++;
	printf(" Le %de coup d'épée permet d'achever l'hydre.\n",i);
	printf("Si l'hydre a %d têtes, Hercule doit donc donner %d coups d'épée pour la vaincre.\n",atoi(argv[1]),i);

free(tete);
return 0;
}
