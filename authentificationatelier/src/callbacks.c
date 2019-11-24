#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif
#include <stdio.h>
#include <stdlib.h>
#include <gtk/gtk.h>
#include <string.h>
#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "callbacks.h"
#include <string.h>
#include "ajouter.h"
#include "afficher.h"
#include "verifier.h"



void on_connectinterfacebutton_clicked                 (GtkWidget       *objet_graphique,    gpointer         user_data)
{	
	


	GtkWidget *output ;
	GtkWidget *input ;
	GtkWidget *inputlogin;
	GtkWidget *inputpassword;
	GtkWidget *labelentryp;
	

	labelentryp=lookup_widget(objet_graphique,"erreurlabel");

	inputlogin=lookup_widget(objet_graphique, "userentry");
	inputpassword=lookup_widget(objet_graphique,"passwordentry");
	input = lookup_widget(objet_graphique,"authentification") ;
	char *username=gtk_entry_get_text(GTK_ENTRY(inputlogin));
	char *password=gtk_entry_get_text(GTK_ENTRY(inputpassword));
	
	if (verifier(username,password)==1){
		gtk_widget_destroy(input);
		output=create_Welcome();
		gtk_widget_show(output);
		
		 }
	else	gtk_label_set_text(GTK_LABEL(labelentryp),"Invalid information");
}





void on_addbutton_clicked                   (GtkWidget       *objet_graphique,
                                        gpointer         user_data)

{
	GtkWidget *inputlogin;
	GtkWidget *inputpassword;
	inputlogin=lookup_widget(objet_graphique, "userentry");
	inputpassword=lookup_widget(objet_graphique,"passwordentry");
	int role;
	char *username=gtk_entry_get_text(GTK_ENTRY(inputlogin));
	char *password=gtk_entry_get_text(GTK_ENTRY(inputpassword));
	role=1;
	ajouter(username,password,role);
}


void
on_buttonshowmembers_clicked           (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{	GtkWidget *windowmembers;
	GtkWidget *windowauthentification=lookup_widget(objet_graphique,"authentification");

	GtkWidget *treeviewmembers=lookup_widget(objet_graphique,"treeviewmembers");

	windowmembers=create_listwindow();
	gtk_widget_show(windowmembers);
	gtk_widget_destroy(windowauthentification);
	
	afficher(treeviewmembers);
	

}


void
on_returnbuttontoauthentification_clicked                                       				(GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

	GtkWidget *windowmembers=lookup_widget(objet_graphique,"listwindow");
	GtkWidget *windowauthentification;
	gtk_widget_destroy(windowmembers);
	windowauthentification=create_authentification();
	gtk_widget_show(windowauthentification);
}

