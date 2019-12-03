#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// I dont need it for now , maybe for Agent Online Hours counter #include <time.h>

typedef struct
{
	int day;
	int month;
	int year;
} DATE;

typedef struct 
{
	int role; // 3:admin 2:agent
	char email[200];
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
int get_members_mails(char emails[50][50]);

int valid_email(char email[]); // @ exist ou nn

int count_members(int role);

int find_current_user(MEMBER *a);
void generate_promotionalcode(char code[]);
void add_code_to_database(char code[]);
void display_text_from_file(char text[],char file[]); // only works for promotionalcodes.txt because I didnt use fgets, I used format fscanf (fgets didnt work for some reasons)
int IsCodeUnique(char code[]);
int get_promotionalcodes(char codes[50][50]);
int find_member_by_email(MEMBER *a, char ch[]);
void replace_line_infile(int line, char newline[], char filename[]);
void delete_line_infile(int line, char filename[]);

// int randint(int n);


/* struct agent 
add url champ to struct member */
