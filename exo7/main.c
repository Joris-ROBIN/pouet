#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "code.h"

int main(){
unsigned char* b;
b=malloc(20*sizeof(unsigned char));
sprintf(b,"bonjour du monde xyz");
int code=1;
codage(b,code);

printf("voici le mot codé %s\n",b);

decodage(b,code);

printf("voici le mo décodé %s\n",b);







free(b);
return 0;}
