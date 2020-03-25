#include <stdlib.h>
#include <stdio.h>
#include "replace_maj.h"

void print_tab(unsigned char* V){
    printf("%s \n",V);   
}


int main (int argc, char** argv){
    int a =65;
    char c = a;
    printf("%c\n",c);
    int d = c;
    printf("%d\n",d);
    int count; 
    unsigned char* b;
    b=malloc(100*sizeof(unsigned char));
    b[0]='h';
    b[1]='e';
    b[2]='l';
    b[3]='l';
    b[4]='o';
    b[5]='\0';
    print_tab(b);
    replace_maj(b);
    print_tab(b);


    free(b);
    return 0;


}