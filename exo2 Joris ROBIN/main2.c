#include <stdlib.h>
#include <stdio.h>
#include "replace.h"


void print_tab(unsigned char* V){
    printf("%s \n",V);   
}


int main () {
    int count; 
    unsigned char* b;
    b=malloc(100*sizeof(unsigned char));
    b[0]='H';
    b[1]=' ';
    b[2]='L';
    b[3]='L';
    b[4]='O';
    b[5]='\0';
    print_tab(b);
    replace(b);
    print_tab(b);


    free(b);
    return 0;
}