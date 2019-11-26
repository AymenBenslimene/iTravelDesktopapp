#include <stdio.h>
#include <string.h>



typedef struct
{
	int day;
	int month;
	int year;
} DATE;

typedef struct 
{
	int role; // 3:admin 2:agent
	char email[50];
	char password[50];
	char name[50];
	char fname[50];
	DATE bdate;
	char phonenumber[50];
	char nationalid[50];
	int status; // 1:Activated 0:Desactivated
			
} MEMBER;


void add_member(MEMBER a);
int SamePassword(char p1[], char p2[]);
void desactivate_member_by_email(char email[]);
int emails(char emails[50][10]);

int valid_email(char email[]); // @ exist ou nn



