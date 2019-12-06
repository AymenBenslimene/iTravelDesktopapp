#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "ajouter.h"
#include "afficher.h"
#include "ajouter2.h"
#include "afficher2.h"
#include "ajouter3.h"
#include "afficher3.h"
#include <string.h>
#include "suprimer.h"
#include "suprimer2.h"
#include "suprimer3.h"



void
on_fenetre_leasing_clicked             (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"window_hotels");
GtkWidget *win2=lookup_widget(objet,"window_name_of_leasing");


 win2=create_window_name_of_leasing();gtk_widget_show(win2);gtk_widget_destroy(win1);


}


void
on_fenetre_hotrels_clicked             (GtkWidget       *objet,
                                        gpointer         user_data)
{

}


void
on_fenetre_offre_of_the_day_clicked    (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"window_hotels");
GtkWidget *win2=lookup_widget(objet,"window_offre_of_the_days");


 win2=create_window_offre_of_the_days();gtk_widget_show(win2);gtk_widget_destroy(win1);


}


void
on_button_editing_content_clicked      (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"window1");
GtkWidget *win2=lookup_widget(objet,"window_hotels");


 win2=create_window_hotels();gtk_widget_show(win2);gtk_widget_destroy(win1);



}


void
on_logout_clicked                      (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"window_hotels");
GtkWidget *win2=lookup_widget(objet,"touchbord");


 win2=create_window1();gtk_widget_show(win2);gtk_widget_destroy(win1);


}


void
on_logout1_clicked                      (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"window_offre_of_the_days");
GtkWidget *win2=lookup_widget(objet,"touchbord");


 win2=create_window1();gtk_widget_show(win2);gtk_widget_destroy(win1);


}




void
on_buttonHotels_clicked                (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"window_offre_of_the_days");
GtkWidget *win2=lookup_widget(objet,"window_hotels");


 win2=create_window_hotels();gtk_widget_show(win2);gtk_widget_destroy(win1);


}


void
on_buttonLeasing_clicked               (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"window_offre_of_the_days");
GtkWidget *win2=lookup_widget(objet,"window_name_of_leasing");


 win2=create_window_name_of_leasing();gtk_widget_show(win2);gtk_widget_destroy(win1);
}


void
on_logout2_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"window_name_of_leasing");
GtkWidget *win2=lookup_widget(objet,"touchbord");


 win2=create_window1();gtk_widget_show(win2);gtk_widget_destroy(win1);


}


void
on_buttonhotels_clicked                (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"window_name_of_leasing");
GtkWidget *win2=lookup_widget(objet,"window_hotels");


 win2=create_window_hotels();gtk_widget_show(win2);gtk_widget_destroy(win1);

}


void
on_button_offree_clicked               (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"window_name_of_leasing");
GtkWidget *win2=lookup_widget(objet,"window_offre_of_the_days");


 win2=create_window_offre_of_the_days();gtk_widget_show(win2);gtk_widget_destroy(win1);


}


void
on_hotelsloul_clicked                  (GtkWidget       *objet,
                                        gpointer         user_data)
{

GtkWidget *win1=lookup_widget(objet,"window1");
GtkWidget *win2=lookup_widget(objet,"window_hotels");


 win2=create_window_hotels();gtk_widget_show(win2);gtk_widget_destroy(win1);

}


void
on_offreofthedays_clicked              (GtkWidget       *objet,
                                        gpointer         user_data)
{

GtkWidget *win1=lookup_widget(objet,"window1");
GtkWidget *win2=lookup_widget(objet,"window_offre_of_the_days");


 win2=create_window_offre_of_the_days();gtk_widget_show(win2);gtk_widget_destroy(win1);


}


void
on_leasingloul_clicked                 (GtkWidget       *objet,
                                        gpointer         user_data)
{

GtkWidget *win1=lookup_widget(objet,"window1");
GtkWidget *win2=lookup_widget(objet,"window_name_of_leasing");


 win2=create_window_name_of_leasing();gtk_widget_show(win2);gtk_widget_destroy(win1);




}


void
on_saved_hotels_to_treeview_add_clicked
                                        (GtkWidget       *objet,
                                        gpointer         user_data)
{


	GtkWidget *inputname;
	GtkWidget *inputdescription;
        GtkWidget *inputprice;
	inputname=lookup_widget(objet, "entry156");
	inputdescription=lookup_widget(objet,"entry157");
        inputprice=lookup_widget(objet,"entry158");
	char  *prices=gtk_entry_get_text(GTK_ENTRY(inputprice));
	char *name=gtk_entry_get_text(GTK_ENTRY(inputname));
	char *descib=gtk_entry_get_text(GTK_ENTRY(inputdescription));
	
	ajouter(name,prices,descib);
  // jcp 

GtkWidget *win1=lookup_widget(objet,"window_hotels");
gtk_widget_destroy(win1); win1=create_window_hotels();gtk_widget_show(win1);
GtkWidget *treeview1 ;
treeview1=lookup_widget(win1,"treeviewmembers");
afficher(treeview1);





}


void
on_afficher_clicked                    (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *treeviewmembers=lookup_widget(objet,"treeviewmembers");
afficher(treeviewmembers);


}


void
on_afficher2_clicked                   (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *treeviewmembers=lookup_widget(objet,"treeview_offre_of_the_day");
afficher2(treeviewmembers);


}


void
on_saved_to_text_offre_clicked         (GtkWidget       *objet,
                                        gpointer         user_data)
{
        GtkWidget *inputvalid_until;
	GtkWidget *inputname_of_the_offre;
        GtkWidget *inputdescriptions;
	inputvalid_until=lookup_widget(objet, "entry159");
	inputname_of_the_offre=lookup_widget(objet,"entry160");
        inputdescriptions=lookup_widget(objet,"entry161");
	char  *until=gtk_entry_get_text(GTK_ENTRY(inputvalid_until));
	char *name=gtk_entry_get_text(GTK_ENTRY(inputname_of_the_offre));
	char *descib=gtk_entry_get_text(GTK_ENTRY(inputdescriptions));
	
	ajouter2(until,name,descib);


GtkWidget *win1=lookup_widget(objet,"window_offre_of_the_days");
gtk_widget_destroy(win1); win1=create_window_offre_of_the_days();gtk_widget_show(win1);

GtkWidget *treeview1 ;
treeview1=lookup_widget(win1,"treeview_offre_of_the_day");
afficher2(treeview1);





}


void
on_afficher3_clicked                   (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *treeview2=lookup_widget(objet,"treeview2");
afficher3(treeview2);



}


void
on_saved3_to_users3_clicked            (GtkWidget       *objet,
                                        gpointer         user_data)
{
        GtkWidget *inputname;
	GtkWidget *inputdescription;
        GtkWidget *inputprice;
	inputname=lookup_widget(objet, "entry60");
	inputdescription=lookup_widget(objet,"entry162");
        inputprice=lookup_widget(objet,"entry163");
	char  *prices=gtk_entry_get_text(GTK_ENTRY(inputprice));
	char *name=gtk_entry_get_text(GTK_ENTRY(inputname));
	char *descib=gtk_entry_get_text(GTK_ENTRY(inputdescription));
	
	ajouter3(name,prices,descib);

GtkWidget *win1=lookup_widget(objet,"window_name_of_leasing");
gtk_widget_destroy(win1); win1=create_window_name_of_leasing();gtk_widget_show(win1);

GtkWidget *treeview1 ;
treeview1=lookup_widget(win1,"treeview2");
afficher3(treeview1);




}


void
on_delet_hotel_clicked                 (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *input=lookup_widget(objet,"entry164");
GtkWidget *win1=lookup_widget(objet,"window_hotels");
GtkWidget *treeview1 ;
char name_hotel[100];

strcpy(name_hotel,gtk_entry_get_text(GTK_ENTRY(input)));

suprimer(name_hotel);


gtk_widget_destroy(win1); win1=create_window_hotels();gtk_widget_show(win1);

treeview1=lookup_widget(win1,"treeviewmembers");
afficher(treeview1);







}


void
on_ya_delet_offre_clicked              (GtkWidget       *objet,
                                        gpointer         user_data)
{

GtkWidget *input=lookup_widget(objet,"entry165");
GtkWidget *win1=lookup_widget(objet,"window_offre_of_the_days");
GtkWidget *treeview1 ;
char name_offre[100];

strcpy(name_offre,gtk_entry_get_text(GTK_ENTRY(input)));

suprimer2(name_offre);


gtk_widget_destroy(win1); win1=create_window_offre_of_the_days();gtk_widget_show(win1);

treeview1=lookup_widget(win1,"treeview_offre_of_the_day");
afficher2(treeview1);





}


void
on_ya_delet_car_clicked                (GtkWidget       *objet,
                                        gpointer         user_data)
{

GtkWidget *input=lookup_widget(objet,"entry166");
GtkWidget *win1=lookup_widget(objet,"window_name_of_leasing");
GtkWidget *treeview1 ;
char name_car[100];

strcpy(name_car,gtk_entry_get_text(GTK_ENTRY(input)));

suprimer3(name_car);


gtk_widget_destroy(win1); win1=create_window_name_of_leasing();gtk_widget_show(win1);

treeview1=lookup_widget(win1,"treeview2");
afficher3(treeview1);



}

