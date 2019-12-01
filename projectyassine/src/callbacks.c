#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"


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

