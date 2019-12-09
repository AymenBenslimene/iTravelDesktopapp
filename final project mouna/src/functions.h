#include <stdio.h>
#include <string.h>
#include <stdlib.h>



typedef struct
{
	int day;
	int month;
	int year;
} DATE;


typedef struct 
{
	char name[100];
	char surname[200];
	char password[50];
	char confirmpassword[50];
	char identitycard[50];
	char adress[100];
        char emaiil[100];
        DATE bdate;
	char number[50];
	
			
} MEMBER;

/*
typedef struct
{
       char hotelname[100];
       char hoteldesription[200];
       char hotelprice[100];
     
}HOTEL;

*/



int SamePassword(char p1[], char p2[]);

int verifier(char email[],char password[]);

void add_users(MEMBER a);

int valid_email(char email[]);

int valid_number(char number[]);

char find_hoteldesciption_by_name(char ch[]);

char find_hotelprice_by_name(char ch[]);

int get_customer_password(char login[],char password[]);

