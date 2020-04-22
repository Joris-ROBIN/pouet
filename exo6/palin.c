#include <stdlib.h>
#include <stdio.h>
#include <string.h>



int palin (unsigned char* b, int pair){
int len;
len = strlen(b);
int i;
int comp=0;
for (i=len/2;comp<i;comp++){
if (b[comp]!=b[len-1-comp])
return 0;
}
return 1;
}
