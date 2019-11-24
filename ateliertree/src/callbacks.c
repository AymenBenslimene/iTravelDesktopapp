#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include <string.h>



void
on_addmemberbutton_clicked             (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

Personne p ;
GtkWidget *entrycin=lookup_widget(objet_graphique,"input1");
GtkWidget *entryprenom=lookup_widget(objet_graphique,"input2");
GtkWidget *entrynom=lookup_widget(objet_graphique,"input3");
GtkWidget *entrydate=lookup_widget(objet_graphique,"input4");
GtkWidget *entryadresse=lookup_widget(objet_graphique,"input5");
GtkWidget *labeladd=lookup_widget(objet_graphique,"labelmemberadd");
strcpy(p.cin,gtk_entry_get_text(GTK_ENTRY(entrycin)));
strcpy(p.prenom,gtk_entry_get_text(GTK_ENTRY(entryprenom)));
strcpy(p.nom,gtk_entry_get_text(GTK_ENTRY(entrynom)));
strcpy(p.date,gtk_entry_get_text(GTK_ENTRY(entrydate)));
strcpy(p.adresse,gtk_entry_get_text(GTK_ENTRY(entryadresse)));
add(p);
gtk_label_set_text(GTK_LABEL(labeladd),"Member Added");
}


void on_showmemberbutton_clicked(GtkWidget       *objet_graphique,gpointer         user_data)
{
GtkWidget *interfacewelcome=lookup_widget(objet_graphique,"welcome");
GtkWidget *interfacetreeviewwindow=lookup_widget(objet_graphique,"treeviewwindow");
GtkWidget *treeviewmember=lookup_widget(objet_graphique,"treeviewmember");
interfacetreeviewwindow=create_treeviewwindow();
gtk_widget_destroy(interfacewelcome);
gtk_widget_show(interfacetreeviewwindow);
show(treeviewmember);

}


void on_returnbutton_clicked (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *interfacewelcome=lookup_widget(objet_graphique,"welcome");
GtkWidget *interfacetreeviewwindow=lookup_widget(objet_graphique,"treeviewwindow");

interfacetreeviewwindow=create_welcome();
gtk_widget_show(interfacewelcome);
gtk_widget_destroy(interfacetreeviewwindow);


}

