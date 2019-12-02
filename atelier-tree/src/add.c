
#include <gtk/gtk.h>
#include <stdio.h>
#include <string.h>
#include "add.h"



void add(Personne p){

FILE *f;
f=fopen("utilisateur.txt","a+");
if (f!=NULL) 
{ fprintf(f,"%s %s %s %s %s \n",p.cin,p.nom,p.prenom,p.date,p.adresse);
fclose(f);}
}
