#include <string.h>
#include <stdio.h>
#include "suprimer.h"
void suprimer(char name_hotel[])
{
 char NAME[100];
 char PRICE[100];
 char DESCRIPTION[100];
FILE *u=fopen("users.txt","r");
FILE *t=fopen("tamp.txt","a+");
if (u!=NULL)
{
while(fscanf(u,"%s %s %s \n",NAME,PRICE,DESCRIPTION)!=EOF)
{
if (strcmp(NAME,name_hotel)!=0)
{
fprintf(t,"%s %s %s \n",NAME,PRICE,DESCRIPTION);
}
}
}
fclose(u);
fclose(t);
remove("users.txt");
rename("tamp.txt","users.txt");
}
  


 
