#include <stdlib.h>
#include <stdio.h>

void replace_arg(unsigned char* tab,unsigned char old,unsigned char new){
    int i;
    
    i=0;
    while (tab[i] != '\0'){       
        if (tab[i] == old){
            printf("%d \n",i);
            tab[i]=new;
        }
        i++;
    }

    }