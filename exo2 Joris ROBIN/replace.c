#include <stdlib.h>
#include <stdio.h>

void replace (unsigned char* tab){
    int i;
    i=0;
    while (tab[i] != '\0'){       
        if (tab[i] == ' '){
            printf("%d \n",i);
            tab[i]='_';
        }
        i++;
    }

    }