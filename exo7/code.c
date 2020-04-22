#include <stdlib.h>
#include <stdio.h>
#include<string.h>

void codage(unsigned char* b,int code){
int i=0;
int old;
int newb;
char nchar;
while (b[i] != '\0'){
old=b[i];
if  (old != 32){
	if (old+code>122){
		newb=old+code-26;
	}
	else{
		newb=old+code;
	}
	nchar=newb;
	b[i]=nchar;
}
i++;
}}


void decodage(unsigned char* b,int code){
int i=0;
int old;
int newb;
char nchar;
while (b[i] != '\0'){
old=b[i];
if  (old != 32){
        if (old-code<97){
                newb=old-code+26;
        }
        else{
                newb=old-code;
        }
        nchar=newb;
        b[i]=nchar;
}
i++;
}}
