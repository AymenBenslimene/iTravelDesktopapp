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


int get_members_mails(char emails[50][50])
{
	FILE *f;
	f=fopen("members.txt","r");
	MEMBER a;
	int i=0;
	while(fscanf(f,"%d %s %s %s %s %d/%d/%d %s %s %d",&a.role, a.email, a.password, a.name, a.fname, &a.bdate.day, &a.bdate.month, &a.bdate.year, a.phonenumber, a.nationalid, &a.status)!=EOF)
	{
		strcpy(emails[i],a.email);
		i++;
	}
	fclose(f);
	return i;
	
} 


int valid_email(char email[])
{
	int n = strlen(email);
	int flag=0;
	for(int i=0;i<n;i++)
	{
		if(email[i]=='@'){flag=1;}
	}
	return flag; // 1: valid; 0:invalid
}

int count_members(int role)
{
	FILE *f;
	MEMBER a;
	int counter=0;
	f=fopen("members.txt","r");
	while(fscanf(f,"%d %s %s %s %s %d/%d/%d %s %s %d",&a.role, a.email, a.password, a.name, a.fname, &a.bdate.day, &a.bdate.month, &a.bdate.year, a.phonenumber, a.nationalid, &a.status)!=EOF)
	{
		if(a.role==role){++counter;}
	}
	fclose(f);
	return counter;
}

//the idea: store email on login @currentuser.txt, delete on logout.

int find_current_user(MEMBER *a) // 1:user found , 0:user not found
{
	FILE *f1;
	f1=fopen("currentuser.txt","r");
	char ch[90];
	fscanf(f1,"%s",ch);
	fclose(f1);
	FILE *f2;
	f2 = fopen("members.txt","r");
	while(fscanf(f2,"%d %s %s %s %s %d/%d/%d %s %s %d",&a->role, a->email, a->password, a->name, a->fname, &a->bdate.day, &a->bdate.month, &a->bdate.year, a->phonenumber, a->nationalid, &a->status)!=EOF)
	{
		if(strcmp(a->email,ch)==0)
		{
			fclose(f2);
			return 1;
		}
	}
	fclose(f2);
	return 0;
	
}

/*#include <time.h>
#include <stdlib.h>

srand(time(NULL));   // Initialization, should only be called once.
int r = rand();      // Returns a pseudo-random integer between 0 and RAND_MAX. */

/* Returns an integer in the range [0, n).
 *
 * Uses rand(), and so is affected-by/affects the same seed.
 */
/*int randint(int n) {
  int RAND_MAX,end;
  if ((n - 1) == RAND_MAX) {
    return rand();
  } else {
    // Supporting larger values for n would requires an even more
    // elaborate implementation that combines multiple calls to rand()
    assert (n <= RAND_MAX);

    // Chop off all of the values that would cause skew...
    int end = RAND_MAX / n; // truncate skew
    assert (end > 0);
    end *= n;

    // ... and ignore results from rand() that fall above that limit.
    // (Worst case the loop condition should succeed 50% of the time,
    // so we can expect to bail out of this loop pretty quickly.)
    int r;
    while ((r = rand()) >= end);

    return r % n;
  }
} */


void generate_promotionalcode(char code[])
{
	srand(time(NULL));
	int r1 = rand() % 20,r2 = rand() % 20,r3 = rand() % 20,r4 = rand() % 20;
	char ch[50];
	sprintf(ch,"%d%dtunivisit%d%d",r1,r2,r3,r4);
	strcpy(code,ch);
}

void add_code_to_database(char code[]) // attention : there is a limit , if passed app crashes. maybe cuz of display text size or label size.
{
	FILE *f;
	f=fopen("promotionalcodes.txt","a");
	fprintf(f,"%s\n",code);
	fclose(f);
}

void display_text_from_file(char text[], char file[])
{
	FILE *f;
	f=fopen(file,"r");
	char ch[100];
	while(fscanf(f,"%s",ch)!=EOF)
	{
		strcat(text,ch);
		strcat(text,"\n");
	}
	fclose(f);
}


int IsCodeUnique(char code[])
{
	FILE *f;
	f=fopen("promotionalcodes.txt","r");
	char ch[50];
	int flag=0;
	while(fscanf(f,"%s",ch)!=EOF)
	{
		if(strcmp(code,ch)==0){flag = 1;}
	}
	fclose(f);
	return flag; // 1: code exist so non unique , 0: code dosnt exist
}


int get_promotionalcodes(char codes[50][50])
{
	FILE *f;
	int i=0;
	f=fopen("promotionalcodes.txt","r");
	while(fscanf(f,"%s",codes[i])!=EOF){++i;}
	fclose(f);
	return i;
}

int find_member_by_email(MEMBER *a, char ch[]) // returns member line in database, 0: if member dosnt exist
{
	FILE *f2;
	int line=0;
	f2 = fopen("members.txt","r");
	while(fscanf(f2,"%d %s %s %s %s %d/%d/%d %s %s %d",&a->role, a->email, a->password, a->name, a->fname, &a->bdate.day, &a->bdate.month, &a->bdate.year, a->phonenumber, a->nationalid, &a->status)!=EOF)
	{
		++line;
		if(strcmp(a->email,ch)==0)
		{
			fclose(f2);
			return line;
		}
	}
	fclose(f2);
	return 0;
	
}


void replace_line_infile(int line, char newline[], char filename[])
{
	FILE *f;
	FILE *ft;	
	int counter=0;
	char buffer[200];
	f=fopen(filename,"r");
	ft=fopen("tempo.txt","w");
	while ((fgets(buffer, 200, f)) != NULL)
	{
		counter++;
		if(counter==line)
		{
			fputs(newline, ft);
		}
		else
		{
			fputs(buffer, ft);
		}
	}
	fclose(f);
	fclose(ft);
	remove(filename);
	rename("tempo.txt",filename);
}


void delete_line_infile(int line, char filename[])
{
	FILE *f;
	FILE *ft;	
	int counter=0;
	char buffer[200];
	f=fopen(filename,"r");
	ft=fopen("tempo.txt","w");
	while ((fgets(buffer, 200, f)) != NULL)
	{
		counter++;
		if(counter==line)
		{
			counter++; // skip the line
		}
		else
		{
			fputs(buffer, ft);
		}
	}
	fclose(f);
	fclose(ft);
	remove(filename);
	rename("tempo.txt",filename);
}





