#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "functions.h"


void on_Login_clicked (GtkWidget *objet_graphique, gpointer user_data)
{

	GtkWidget *input1;
	GtkWidget *input2;
	GtkWidget *output;
	GtkWidget *window1;
	GtkWidget *window2;
	input1 = lookup_widget(objet_graphique, "usernametext");
	input2 = lookup_widget(objet_graphique, "passwordtext");
	output = lookup_widget(objet_graphique, "error");
	window1 = lookup_widget(objet_graphique, "window1");
	char *username = gtk_entry_get_text(GTK_ENTRY(input1));
	char *password = gtk_entry_get_text(GTK_ENTRY(input2));
	if(verifier(username,password)==(-1))
	{
		gtk_label_set_text(GTK_LABEL(output), "user dosnt exist");
	}
	else
	{
		gtk_widget_destroy(window1);
		window2 = create_window2();
		gtk_widget_show(window2);
	}
	

}


void on_afficher_clicked (GtkWidget *objet_graphique, gpointer user_data)
{
	GtkWidget *output;
	output = lookup_widget(objet_graphique, "affichertext");
	char textpourafficher[100];
	afficher(textpourafficher);
	gtk_label_set_text(GTK_LABEL(output), textpourafficher);
	
}




void on_ajouter_clicked (GtkWidget *objet_graphique, gpointer user_data)
{
	GtkWidget *usernameobject,*passwordobject,*roleobject;
	usernameobject = lookup_widget(objet_graphique, "usernameajouter");
	passwordobject = lookup_widget(objet_graphique, "passwordajouter");
	roleobject = lookup_widget(objet_graphique, "roleajouter");
	char username[20],password[20],role[20];
	strcpy(username,gtk_entry_get_text(GTK_ENTRY(usernameobject)));
	strcpy(password,gtk_entry_get_text(GTK_ENTRY(passwordobject)));
	strcpy(role,gtk_entry_get_text(GTK_ENTRY(roleobject)));	
	ajouter(username,password,role);
}

