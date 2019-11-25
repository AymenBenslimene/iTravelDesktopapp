#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>
#include <string.h>
#include "callbacks.h"
#include "interface.h"
#include "support.h"


void
on_buttonvalider_clicked               (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *Jour;
GtkWidget *Mois;
GtkWidget *Annee;
GtkWidget *Combobox1;
GtkWidget *Combobox2;
GtkWidget *Combobox3;

char bloc;
char Bloc[50];
char nom_salle[50][10];
Date dt_resr;
int i,n,hr_resr;

Jour=lookup_widget(objet_graphique,"jour");
Mois=lookup_widget(objet_graphique,"mois");
Annee=lookup_widget(objet_graphique,"annee");
Combobox1=lookup_widget(objet_graphique,"combobox3");
Combobox2=lookup_widget(objet_graphique,"combobox4");
Combobox3=lookup_widget(objet_graphique,"Combobox5");

dt_resr.jour=gtk_spin_button_get_value_as_int ( GTK_SPIN_BUTTON (Jour));
dt_resr.mois=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(Mois));
dt_resr.annee=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON (Annee));
if (strcmp("9h==>12h15",gtk_combo_box_get_active_text(GTK_COMBO_BOX(Combobox1)))==0)
hr_resr=1;
else hr_resr=2;
strcpy(Bloc,gtk_combo_box_get_active_text(GTK_COMBO_BOX(Combobox2)));
bloc=Bloc[0];
n=tableau_salle_disponible(nom_salle, bloc, dt_resr, hr_resr);
for(i=0;i<n;i++)
{
gtk_combo_box_append_text(GTK_COMBO_BOX(Combobox3),_(nom_salle[i]));
}
}





void
on_buttonconfirmer_clicked             (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *Combobox1;
GtkWidget *Jour=lookup_widget(objet_graphique,"jour");
GtkWidget *Mois=lookup_widget(objet_graphique,"mois");
GtkWidget *Annee=lookup_widget(objet_graphique,"annee");
GtkWidget *Combobox2=lookup_widget(objet_graphique,"combobox4");
GtkWidget *Combobox3=lookup_widget(objet_graphique," combobox5");
GtkWidget *sortie=lookup_widget(objet_graphique,"label12");
char Bloc[20];
ReservationSalle s;
Combobox1=lookup_widget(objet_graphique,"combobox3");
s.dt_res.jour=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(Jour));
s.dt_res.mois=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(Mois));
s.dt_res.annee=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(Annee));
if(strcmp("9h==>12h15",gtk_combo_box_get_active_text(GTK_COMBO_BOX(Combobox1)))==0) s.hr_resr=1;
else
s.hr_resr=2;
strcpy(Bloc,gtk_combo_box_get_active_text(GTK_COMBO_BOX(Combobox2)));
s.bloc=Bloc[0];
strcpy(s.num,gtk_combo_box_get_active_text(GTK_COMBO_BOX(Combobox3)));
reserver_salle( s);
gtk_label_set_text(GTK_LABEL(sortie),"Reservation reussite");
}





