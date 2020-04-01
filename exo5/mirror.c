#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void mirrorp (unsigned char* tab){
int fin = strlen(tab)-1;
int i;
int rep = fin;
unsigned char cache;
int len = strlen(tab)/2;
for (i=0 ; i<len ; i++){
rep = fin -i;
cache = tab[i];
tab[i] = tab[rep];
tab[rep] = cache;
}
return;
}


void mirrori(unsigned char* tab){
int fin=strlen(tab)-1;
printf("fin=%d\n",fin);
int i = 0;
unsigned char cache;
int len=strlen(tab);
int rep=fin;
while (i < rep){
rep = fin-i;
cache = tab[i];
tab[i]=tab[rep];
tab[rep]=cache;
i++;
}
return ;
}


