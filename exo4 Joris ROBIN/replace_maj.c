#include <stdlib.h>
#include <stdio.h>

void replace_maj(unsigned char* tab){
    int i;
    int ascii_old;
    int ascii_new;
    char new;
    i=0;
    while (tab[i] != '\0'){  
        ascii_old=tab[i];
        if (ascii_old > 96){           
            ascii_new=ascii_old -32;
            new = ascii_new;
            tab[i]=new;
        }
        i++;
    }

    }