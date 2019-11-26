#include "functions.h"


int verifier (char login[], char password[])
{
	FILE *f;
	char username[50];
	char passwordd[50];
	int role;
	f=fopen("users.txt","r");
	while(fscanf(f,"%s %s %d \n",username,passwordd,&role)!=EOF)
	{
		if(strcmp(login,username)==0 && strcmp(password,passwordd)==0)
		{
			return role;
		}
		else
		{
			return -1;
		}
	}
	fclose(f);
}

void afficher(char textpourafficher[])
{
	FILE *f;
	f=fopen("users.txt","r");
	char username[20],password[20],role[20]; // its better to use strings(chars) while manipulating files/functions to avoid pointers
	while(fscanf(f,"%s %s %s",username,password,role)!=EOF)
	{
		strcat(textpourafficher,username);
		strcat(textpourafficher," "); // ajout d'un espace entre les variables dans l'affichage
		strcat(textpourafficher,password);
		strcat(textpourafficher," "); // ajout d'un espace entre les variables dans l'affichage
		strcat(textpourafficher,role);
		strcat(textpourafficher,"\n");
	}
	fclose(f);
}

void ajouter (char login[], char password[],char role[])
{
	FILE *f;
	f=fopen("users.txt","a");
	fprintf(f,"%s %s %s\n",login,password,role);
	fclose(f);
}









