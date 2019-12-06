#include <string.h>
#include <stdio.h>
#include "suprimer3.h"
void suprimer3(char name_car[])
{
 char NAME[100];
 char PRICE[100];
 char DESCRIPTION[100];
FILE *u=fopen("users3.txt","r");
FILE *t=fopen("tamp.txt","a+");
if (u!=NULL)
{
while(fscanf(u,"%s %s %s \n",NAME,PRICE,DESCRIPTION)!=EOF)
{
if (strcmp(NAME,name_car)!=0)
{
fprintf(t,"%s %s %s \n",NAME,PRICE,DESCRIPTION);
}
}
}
fclose(u);
fclose(t);
remove("users3.txt");
rename("tamp.txt","users3.txt");
}
  

