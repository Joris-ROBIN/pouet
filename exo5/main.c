#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "pair.h"
#include "mirror.h"

int  main  () {
unsigned char*  b;
b=malloc(20*sizeof(unsigned char));
sprintf( b,"tuarf");
printf("ceci est l'ancienne chaine : %s\n",b);
int test;



test = pair(b);
if ( test == 0 ){
printf(" la chaine est pair\n");
mirrorp(b);
}


if (test == 1 ){
printf("la chaine est impair\n");
printf("la chaine est : %s\n");
mirrori(b);
}



printf("Ceci est la nouvelle chaine : %s\n",b);









free(b);
return 0;
}
