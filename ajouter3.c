#include "ajouter3.h"
#include <stdio.h>
#include <stdlib.h>

void ajouter3(char name[],char prises[],char descib[]){

FILE *f;
f=fopen("users3.txt","a+");
if(f!=NULL){

fprintf(f,"%s %s %s \n",name,prises,descib);
fclose(f);}
}
