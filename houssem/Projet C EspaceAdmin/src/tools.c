#include "tools.h"

void add_member(MEMBER a)
{
	FILE *f;
	f=fopen("members.txt","a");
	fprintf(f,"%d %s %s %s %s %d/%d/%d %s %s %d\n",a.role, a.email, a.password, a.name, a.fname, a.bdate.day, a.bdate.month, a.bdate.year, a.phonenumber, a.nationalid, a.status);
	fclose(f);	
}

int SamePassword(char p1[], char p2[])
{
	if(strcmp(p1,p2)!=0){return 0;}
	else{return 1;}
}


int mails(char emails[50][10])
{
	FILE *f;
	f=fopen("members.txt","r");
	MEMBER a;
	int i=0;
	while(fscanf(f,"%d %s %s %s %s %d/%d/%d %s %s %d",&a.role, a.email, a.password, a.name, a.fname, &a.bdate.day, &a.bdate.month, &a.bdate.year, a.phonenumber, a.nationalid, &a.status)!=EOF)
	{
		strcpy(emails[i],a.email);
		++i;
	}
	fclose(f);
	return i;
	
}


