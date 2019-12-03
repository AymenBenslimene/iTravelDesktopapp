#include "ajouter2.h"
#include <stdio.h>
#include <stdlib.h>

void ajouter2(char until[],char name[],char descib[]){

FILE *f;
f=fopen("users2.txt","a+");
if(f!=NULL){

fprintf(f,"%s %s %s \n",until,name,descib);
fclose(f);}
}

