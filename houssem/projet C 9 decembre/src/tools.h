#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// I dont need it for now , maybe for Agent Online Hours counter #include <time.h>

typedef GtkWidget;
typedef GtkCellRenderer;
typedef GtkTreeViewColumn;
typedef GtkTreeIter;
typedef GtkListStore;

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
	// int demandsdone;
	int status; // 1:Activated 0:Desactivated
	// int hours online; int demands done; int performance; or just calculate it when needed, m.demands/m.hours, default to 0 in declaration so u wont have to change every member declaration in code.
			
} MEMBER;


void add_member(MEMBER a);
int SamePassword(char p1[], char p2[]);
void desactivate_member_by_email(char email[]);
int get_members_mails(char emails[50][50]);
int get_agents_mails(char emails[50][50]);

int valid_email(char email[]); // checks for @ . and len >4
int valid_nb(char nb[], int len); // check a valid phonenumber/nationalid (only numbers) , len(nb) ==  len , 1:True , 0:False
int valid_fullname(char name[]); // checks for space, only characters, and len >5.
int valid_bdate(char bdate[]); // checks the existing of a 3x/ and 8 =< len =< 10
int valid_password(char password[]); // checks for nmbers only, len >3, checks for existing of both numbers and characters.

int count_members(int role);

int find_current_user(MEMBER *a); // returns 1:user found , 0:user not found
void generate_promotionalcode(char code[]);
void add_code_to_database(char code[]);
void display_text_from_file(char text[],char file[]); // only works for promotionalcodes.txt because I didnt use fgets, I used format fscanf (fgets didnt work for some reasons)
int IsCodeUnique(char code[]);
int get_promotionalcodes(char codes[50][50]);
int find_member_by_email(MEMBER *a, char ch[]);
void replace_line_infile(int line, char newline[], char filename[]);
void delete_line_infile(int line, char filename[]);
// CLAIMS
int get_claims(char claims[100][100]);


enum
{
	SERVICENAME,
	SERVICETYPE,
	DESCRIPTION,
	FROM,
	COLUMNS
};


void show_claimstree(GtkWidget *liste);



// PC
void send_msg(char msg[]);
int get_clients_mail(char clients[50][50]);
int find_line(char file[], char searchword[]);




typedef struct
{
	char name[50];
	char surname[50];
	char password[50];
	char email[50];
	char id[50];
	char number[50];
	char question[50];
	
} CLIENT;

