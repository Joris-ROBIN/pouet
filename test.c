
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "pair.h"


int  main  () {
unsigned char*  b;
b=malloc(100*sizeof(unsigned char));
sprintf( b,"toto");
int test;



test = pair(b);
if ( test == 0 )
printf(" la chaine est pair\n");

if (test == 1 )
printf("la chaine est impair"\n);


//printf("len =  %d\n",len);
printf( "ici %s\n",b );
printf("la %c\n",b[4] );
free(b);
return 0;
}
