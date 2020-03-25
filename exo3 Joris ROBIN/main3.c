#include <stdlib.h>
#include <stdio.h>
#include "replace_arg.h"

void print_tab(unsigned char* V){
    printf("%s \n",V);   
}




int main (int argc, char** argv) {
    int count; 
    unsigned char old;
    unsigned char new; 
    old = argv[1][0];
    new = argv[2][0];
    unsigned char* b;
    b=malloc(100*sizeof(unsigned char));
    b[0]='H';
    b[1]='E';
    b[2]='L';
    b[3]='L';
    b[4]='O';
    b[5]='\0';
    print_tab(b);
    replace_arg(b,old,new);
    print_tab(b);


    free(b);
    return 0;
}