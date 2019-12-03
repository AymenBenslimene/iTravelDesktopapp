#include "ajouter.h"
#include <stdio.h>
#include <stdlib.h>

void ajouter(char name[],char prises[],char descib[]){

FILE *f;
f=fopen("users.txt","a+");
if(f!=NULL){

fprintf(f,"%s %s %s \n",name,prises,descib);
fclose(f);}
}

