#include <string.h>
#include <stdio.h>
#include "suprimer.h"
void suprimer2(char name_offre[])
{
 char UNTIL[100];
 char NAME[100];
 char DESCRIPTION[100];
FILE *u=fopen("users2.txt","r");
FILE *t=fopen("tamp.txt","a+");
if (u!=NULL)
{
while(fscanf(u,"%s %s %s \n",UNTIL,NAME,DESCRIPTION)!=EOF)
{
if (strcmp(NAME,name_offre)!=0)
{
fprintf(t,"%s %s %s \n",UNTIL,NAME,DESCRIPTION);
}
}
}
fclose(u);
fclose(t);
remove("users2.txt");
rename("tamp.txt","users2.txt");
}
  

