#include <stdlib.h>
#include <stdio.h>
#include<string.h>
#include "pair.h"
#include "palin.h"

int main (){
unsigned char* b;
b=malloc(20*sizeof(unsigned char));
sprintf(b,"neven");
printf("ceci est la chaine : %s\n",b);
int test;

test=pair(b);
int res;
res = palin(b,test);

if (res == 0)
printf ("la chaine n'est pas un palindrome\n");

if (res==1)
printf("la chaine est un palindrome\n");

return 0;
}
