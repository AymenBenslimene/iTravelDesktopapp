#include "functions.h"
#include "callbacks.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int SamePassword(char p1[], char p2[])
{
	if(strcmp(p1,p2)!=0)
            {
               return 0;
            }
	else
            {
              return 1;
            }
}




int verifier(char login[], char password[])
{
        FILE *f;
        char log[30] ;
        char pass[30] ; 
        int role; 
        int i;
        i=0;
        f=fopen("users.txt","r");
        if (f!=NULL)
              {
		   while(fscanf(f,"%s %s  \n",log,pass)!=EOF)

		          { 
                             if (strcmp(log,login)==0 && strcmp(pass,password)==0) i=1; 
                          }
	      }

        fclose(f);
        return i;

}




void add_users(MEMBER a)
{
	FILE *f;
	f=fopen("addusers.txt","a");
	fprintf(f," %s %s %s %s %s %d/%d/%d %s %s \n",a.emaiil, a.password, a.name, a.surname,a.adress, a.bdate.day,     a.bdate.month, a.bdate.year, a.number, a.identitycard);
	fclose(f);	
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


int valid_number(char number[])
{
        int n=strlen(number);
        int k=0;
        if (n>11)
           { k=0; }
           
        else if (n<11)
           { k=0; }
        else if (n==11)
           { k=1; }
        return k;
}


char find_hoteldesciption_by_name(char ch[]) // 0: if member dosnt exist
{
	FILE *f2;
        char hoteldescription[200];
        char hotelprice[200];
        char hotelname[200];
	int line;
        line=0;
	f2 = fopen("hotels.txt","r");
	while(fscanf(f2," %s %s %s",hotelname, hoteldescription, hotelprice)!=EOF)
	{
		++line;
		if(strcmp(hotelname,ch)==0)
		{
			fclose(f2);
			return hoteldescription;
		}
	}
	fclose(f2);
	return "0";
	
}


char find_hotelprice_by_name(char ch[]) // 0: if member dosnt exist
{
	FILE *f2;
        char hoteldescription[200];
        char hotelprice[200];
        char hotelname[200];
	int line;
        line=0;
	
	f2 = fopen("hotels.txt","r");
	while(fscanf(f2," %s %s %s",hotelname, hoteldescription, hotelprice)!=EOF)
	{
		++line;
		if(strcmp(hotelname,ch)==0)
		{
			fclose(f2);
			return hotelprice;
		}
	}
	fclose(f2);
	return "0";
	
}


int get_customer_password(char login[],char password[])
{
	FILE *f;
	f=fopen("users.txt","r");
        char pass[30];
        char logi[30];
	int i=0;
        int x=0;

       
        if (f!=NULL)
              {
		   while(fscanf(f,"%s %s  \n",logi,pass)!=EOF)

		          { 
                             if (strcmp(pass,password)==0) 
                             i=1; 
                          }
	      }

        fclose(f);
        return i;




/*
	while(fscanf(f," %s %s %s %s %s %d/%d/%d %s %s \n",a.emaiil, a.password, a.name, a.surname,a.adress, a.bdate.day,     a.bdate.month, a.bdate.year, a.number, a.identitycard)!=EOF)
	{
		x=strcmp(password[i],a.password);
		
	}
	fclose(f);
	return x;

*/	
} 






//pictures programm
/*
int main (int argc,char*argv[])
{
   gtk_init(&argc,&argv);
GtkWidget *window,*image;
window=gtk_window_new(GTK_WINDOW_TOPLEVEL);
g_signal_connect(window,"delete event",G_CALLBACK(gtk_main_quit),NULL);

image=gtk_image_new_from_file("/home/pictures/cata.jpg");
gtk_container_add((window),image);
gtk_Widget_show_all(window);
gtk_main();
return 0;
} */



//function next picture
//void next(char *img)

//if img=image9








