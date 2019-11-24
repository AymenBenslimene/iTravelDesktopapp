#include "verifier.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int verifier(char login[], char password[])
{
FILE *f;
char log[30] ;char pass[30] ; int role; int i;
i=0;
f=fopen("utilisateur.txt","r");
if (f!=NULL){
		while(fscanf(f,"%s %s %d \n",log,pass,&role)!=EOF)

		{ if (strcmp(log,login)==0 && strcmp(pass,password)==0) i=1; }
	    }

fclose(f);
return i;

}
