
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "pair.h"


int  main  (int argc,char* argv[]) {
int test = 7;
int res = test/2;
printf("test : %d\n",res);

int* tete;
tete=malloc(3*sizeof(int));
tete[0]=atoi(argv[1]);

tete[0]=tete[0]/3;

printf("arg: %d\n",tete[0]); 

free(tete);
return 0;
}
