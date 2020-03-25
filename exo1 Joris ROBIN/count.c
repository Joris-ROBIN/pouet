#include <stdlib.h>
#include <stdio.h>


void print_tab(unsigned char* V){
    printf("%s \n",V);   
}

int count_string (unsigned char* v){ 
    int i;
    i=0;
    while (v[i] != '\0'){
        i++;
    }
    return i;
 }