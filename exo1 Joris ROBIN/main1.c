#include <stdlib.h>
#include <stdio.h>
#include "count.h"

int main () {
    int count; 
    unsigned char* b;
    b=malloc(100*sizeof(unsigned char));
    b[0]='H';
    b[1]='E';
    b[2]='L';
    b[3]='L';
    b[4]='O';
    b[5]='\0';
    print_tab(b);
    count=count_string(b);
    printf("%d : nbr caractères\n",count);
    free (b);
}


