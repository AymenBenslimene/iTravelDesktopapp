#include "ajouter.h"
#include <stdio.h>
#include <stdlib.h>

void ajouter(char login[],char password[],int role){

FILE *f;
f=fopen("users.txt","a+");
if(f!=NULL){
/*fwrite (&login, sizeof(char), 1, f);
fwrite (&password, sizeof(char), 1, f);
fwrite (&role, sizeof(char), 1, f);*/
fprintf(f,"%s %s %d \n",login,password,role);
fclose(f);}





}
