#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "tools_maher.h"


void
on_nouveau1_activate                   (GtkMenuItem     *menuitem,
                                        gpointer         user_data)
{

}


void
on_ouvrir1_activate                    (GtkMenuItem     *menuitem,
                                        gpointer         user_data)
{

}


void
on_enregistrer1_activate               (GtkMenuItem     *menuitem,
                                        gpointer         user_data)
{

}


void
on_enregistrer_sous1_activate          (GtkMenuItem     *menuitem,
                                        gpointer         user_data)
{

}


void
on_quitter1_activate                   (GtkMenuItem     *menuitem,
                                        gpointer         user_data)
{

}


void
on_couper1_activate                    (GtkMenuItem     *menuitem,
                                        gpointer         user_data)
{

}


void
on_copier1_activate                    (GtkMenuItem     *menuitem,
                                        gpointer         user_data)
{

}


void
on_coller1_activate                    (GtkMenuItem     *menuitem,
                                        gpointer         user_data)
{

}


void
on_supprimer1_activate                 (GtkMenuItem     *menuitem,
                                        gpointer         user_data)
{

}


void
on____propos1_activate                 (GtkMenuItem     *menuitem,
                                        gpointer         user_data)
{

}


void
on_nouveau2_activate                   (GtkMenuItem     *menuitem,
                                        gpointer         user_data)
{

}


void
on_ouvrir2_activate                    (GtkMenuItem     *menuitem,
                                        gpointer         user_data)
{

}


void
on_enregistrer2_activate               (GtkMenuItem     *menuitem,
                                        gpointer         user_data)
{

}


void
on_enregistrer_sous2_activate          (GtkMenuItem     *menuitem,
                                        gpointer         user_data)
{

}


void
on_quitter2_activate                   (GtkMenuItem     *menuitem,
                                        gpointer         user_data)
{

}


void
on_couper2_activate                    (GtkMenuItem     *menuitem,
                                        gpointer         user_data)
{

}


void
on_copier2_activate                    (GtkMenuItem     *menuitem,
                                        gpointer         user_data)
{

}


void
on_coller2_activate                    (GtkMenuItem     *menuitem,
                                        gpointer         user_data)
{

}


void
on_supprimer2_activate                 (GtkMenuItem     *menuitem,
                                        gpointer         user_data)
{

}


void
on____propos2_activate                 (GtkMenuItem     *menuitem,
                                        gpointer         user_data)
{

}


void
on_calendar_dep_day_selected        (GtkWidget *objet_graphique ,
                                        gpointer         user_data)
{
GtkWidget *calendar,*date_text;
	date_text = lookup_widget(objet_graphique, "dep_date");
	calendar = lookup_widget(objet_graphique, "calendar_dep");
	int *year,*day,*month;
	gtk_calendar_get_date(GTK_CALENDAR(calendar),&year,&month,&day);
	int var = month;
	++var;
	char str[50];
	sprintf(str,"%d/%d/%d",day,var,year);
	gtk_label_set_text(GTK_LABEL(date_text),str);
}


void
on_calendar_ret_day_selected
                                          (GtkWidget *objet_graphique ,
                                        gpointer         user_data)
{
GtkWidget *calendar,*date_text;
	date_text = lookup_widget(objet_graphique, "ret_date");
	calendar = lookup_widget(objet_graphique, "calendar_ret");
	int *year,*day,*month;
	gtk_calendar_get_date(GTK_CALENDAR(calendar),&year,&month,&day);
	int var = month;
	++var;
	char str[50];
	sprintf(str,"%d/%d/%d",day,var,year);
	gtk_label_set_text(GTK_LABEL(date_text),str);
}


void
on_book_fl_clicked                     (GtkWidget     *objet_graphique,      gpointer user_data)
{
	GtkWidget *from, *to,*title, *name, *surname, *departing,*returning,*day,*month,*year,*country,*phone,*passport,*mail,*adress ;
	
	from = lookup_widget(objet_graphique, "flying_from");
	to = lookup_widget(objet_graphique, "flying_to");
	title = lookup_widget(objet_graphique, "title_fl");
	name = lookup_widget(objet_graphique, "name_fl");
	surname = lookup_widget(objet_graphique, "surname_fl");
	departing = lookup_widget(objet_graphique, "dep_date");
	returning = lookup_widget(objet_graphique, "ret_date");
	day = lookup_widget(objet_graphique, "day_fl");
	month = lookup_widget(objet_graphique, "month_fl");
	year = lookup_widget(objet_graphique, "year_fl");
	country = lookup_widget(objet_graphique, "country_fl");
	phone = lookup_widget(objet_graphique, "phone_fl");
	passport = lookup_widget(objet_graphique, "pass_fl");
	mail = lookup_widget(objet_graphique, "mail_fl");
	adress = lookup_widget(objet_graphique, "ad_fl");
	flight_info a;
	
	a.birthday.day = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(day));
	a.birthday.month = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(month));
	a.birthday.year = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(year));
	strcpy(a.title, gtk_combo_box_get_active_text(GTK_COMBO_BOX(title)));
	strcpy(a.from, gtk_combo_box_get_active_text(GTK_COMBO_BOX(from)));
	strcpy(a.to, gtk_combo_box_get_active_text(GTK_COMBO_BOX(to)));
	strcpy(a.name, gtk_entry_get_text(GTK_ENTRY(name)));
	strcpy(a.surname, gtk_entry_get_text(GTK_ENTRY(surname)));
	strcpy(a.adress, gtk_entry_get_text(GTK_ENTRY(adress)));
	strcpy(a.departing, gtk_label_get_text(GTK_LABEL(departing)));
	strcpy(a.phone, gtk_entry_get_text(GTK_ENTRY(phone)));
	strcpy(a.returning, gtk_label_get_text(GTK_LABEL(returning)));
	strcpy(a.mail, gtk_entry_get_text(GTK_ENTRY(mail)));
	strcpy(a.country, gtk_entry_get_text(GTK_ENTRY(country)));
	strcpy(a.passport, gtk_entry_get_text(GTK_ENTRY(passport)));
	res_flight(a);
	



}
 

void
on_mr_activate                         (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_mrs_fl_activate                     (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_log_out1_clicked                  (GtkWidget *objet_graphique ,
                                        gpointer         user_data)
{
GtkWidget *principale,*book_hotel,*book_flight,*book_car,*History;
	principale = lookup_widget(objet_graphique, "principale");
	book_hotel = lookup_widget(objet_graphique, "book_hotel");
	book_flight = lookup_widget(objet_graphique, "book_flight");
	book_car = lookup_widget(objet_graphique, "book_car");
        History = lookup_widget(objet_graphique, "History");
	
        gtk_widget_destroy(principale);
	gtk_widget_destroy(book_hotel);
	gtk_widget_destroy(book_flight);
	gtk_widget_destroy(book_car);
        gtk_widget_destroy(History);
	
}


void
on_retour_home_pg_clicked               (GtkWidget *objet_graphique ,
                                        gpointer         user_data)
{
GtkWidget *principale,*book_hotel,*book_flight,*book_car,*History;
	principale = lookup_widget(objet_graphique, "principale");
	book_hotel = lookup_widget(objet_graphique, "book_hotel");
	book_flight = lookup_widget(objet_graphique, "book_flight");
	book_car = lookup_widget(objet_graphique, "book_car");
        History = lookup_widget(objet_graphique, "History");
	
        gtk_widget_destroy(History);
	gtk_widget_destroy(book_hotel);
	gtk_widget_destroy(book_flight);
        gtk_widget_destroy(book_car);
        principale = create_principale();
	gtk_widget_show(principale);
}


void
on_retour_home_pg_destroy              (GtkObject       *object,
                                        gpointer         user_data)
{

}


void
on_book_h_clicked                      (GtkWidget *objet_graphique ,
                                        gpointer         user_data)
{
GtkWidget *checkin, *checkout,*title, *name, *surname,*day,*month,*year,*country,*phone,*passport,*mail,*adress,*pension,*rooms ;
	
	checkin = lookup_widget(objet_graphique, "checkin_date");
	checkout = lookup_widget(objet_graphique, "checkout_date");
	title = lookup_widget(objet_graphique, "title_combo_h");
	name = lookup_widget(objet_graphique, "name_hotel");
	surname = lookup_widget(objet_graphique, "surname_hotel");
	pension = lookup_widget(objet_graphique, "pension_h");
	day = lookup_widget(objet_graphique, "day_h");
	month = lookup_widget(objet_graphique, "month_h");
	year = lookup_widget(objet_graphique, "year_h");
	country = lookup_widget(objet_graphique, "country_hotel");
	phone = lookup_widget(objet_graphique, "phone_hotel");
	passport = lookup_widget(objet_graphique, "passport_hotel");
	mail = lookup_widget(objet_graphique, "mail_hotel");
	adress = lookup_widget(objet_graphique, "adress_hotel");
	rooms = lookup_widget(objet_graphique, "rooms_hotel");
	hotel_info a;
	
	a.birthday.day = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(day));
	a.birthday.month = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(month));
	a.birthday.year = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(year));
	strcpy(a.title, gtk_combo_box_get_active_text(GTK_COMBO_BOX(title)));
	a.rooms = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(rooms));
	strcpy(a.name, gtk_entry_get_text(GTK_ENTRY(name)));
	strcpy(a.surname, gtk_entry_get_text(GTK_ENTRY(surname)));
	strcpy(a.adress, gtk_entry_get_text(GTK_ENTRY(adress)));
	strcpy(a.checkin, gtk_label_get_text(GTK_LABEL(checkin)));
	strcpy(a.phone, gtk_entry_get_text(GTK_ENTRY(phone)));
	strcpy(a.checkout, gtk_label_get_text(GTK_LABEL(checkout)));
	strcpy(a.mail, gtk_entry_get_text(GTK_ENTRY(mail)));
	strcpy(a.country, gtk_entry_get_text(GTK_ENTRY(country)));
	strcpy(a.passport, gtk_entry_get_text(GTK_ENTRY(passport)));
	strcpy(a.pension, gtk_combo_box_get_active_text(GTK_COMBO_BOX(pension)));
	res_hotel(a);
	
}


void
on_log_out2_clicked                   (GtkWidget *objet_graphique ,
                                        gpointer         user_data)
{
GtkWidget *principale,*book_hotel,*book_flight,*book_car,*History;
	principale = lookup_widget(objet_graphique, "principale");
	book_hotel = lookup_widget(objet_graphique, "book_hotel");
	book_flight = lookup_widget(objet_graphique, "book_flight");
	book_car = lookup_widget(objet_graphique, "book_car");
        History = lookup_widget(objet_graphique, "History");
	
        gtk_widget_destroy(principale);
	gtk_widget_destroy(book_hotel);
	gtk_widget_destroy(book_flight);
	gtk_widget_destroy(book_car);
        gtk_widget_destroy(History);
	
}


void
on_retour_hotel_clicked                (GtkWidget *objet_graphique ,
                                        gpointer         user_data)
{
GtkWidget *principale,*book_hotel,*book_flight,*book_car,*History;
	principale = lookup_widget(objet_graphique, "principale");
	book_hotel = lookup_widget(objet_graphique, "book_hotel");
	book_flight = lookup_widget(objet_graphique, "book_flight");
	book_car = lookup_widget(objet_graphique, "book_car");
        History = lookup_widget(objet_graphique, "History");
	
        gtk_widget_destroy(History);
	gtk_widget_destroy(book_hotel);
	gtk_widget_destroy(book_flight);
        gtk_widget_destroy(book_car);
        principale = create_principale();
	gtk_widget_show(principale);
}


void
on_calendar_pickup_day_selected    (GtkWidget *objet_graphique ,
                                        gpointer         user_data)
{

GtkWidget *calendar,*date_text;
	date_text = lookup_widget(objet_graphique, "pickup_date");
	calendar = lookup_widget(objet_graphique, "calendar_pickup");
	int *year,*day,*month;
	gtk_calendar_get_date(GTK_CALENDAR(calendar),&year,&month,&day);
	int var = month;
	++var;
	char str[50];
	sprintf(str,"%d/%d/%d",day,var,year);
	gtk_label_set_text(GTK_LABEL(date_text),str);
}


void
on_calendar_dropoff_day_selected       (GtkWidget *objet_graphique ,
                                        gpointer         user_data)
{
  GtkWidget *calendar,*date_text;
	date_text = lookup_widget(objet_graphique, "dropoff_date");
	calendar = lookup_widget(objet_graphique, "calendar_dropoff");
	int *year,*day,*month;
	gtk_calendar_get_date(GTK_CALENDAR(calendar),&year,&month,&day);
	int var = month;
	++var;
	char str[50];
	sprintf(str,"%d/%d/%d",day,var,year);
	gtk_label_set_text(GTK_LABEL(date_text),str);
}


void
on_book_car_button_clicked             (GtkWidget *objet_graphique ,
                                        gpointer         user_data)
{
GtkWidget *pickup, *dropoff,*title, *name, *surname,*day,*month,*year,*country,*phone,*passport,*mail,*adress ;
	
	pickup = lookup_widget(objet_graphique, "pickup_date");
	dropoff = lookup_widget(objet_graphique, "dropoff_date");
	title = lookup_widget(objet_graphique, "title_car");
	name = lookup_widget(objet_graphique, "name_car");
	surname = lookup_widget(objet_graphique, "surname_car");
	
	day = lookup_widget(objet_graphique, "day_car");
	month = lookup_widget(objet_graphique, "month_car");
	year = lookup_widget(objet_graphique, "year_car");
	country = lookup_widget(objet_graphique, "country_car");
	phone = lookup_widget(objet_graphique, "phone_car");
	passport = lookup_widget(objet_graphique, "passport_car");
	mail = lookup_widget(objet_graphique, "mail_car");
	adress = lookup_widget(objet_graphique, "adress_car");
	
	car_info a;
	
	a.birthday.day = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(day));
	a.birthday.month = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(month));
	a.birthday.year = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(year));
	strcpy(a.title, gtk_combo_box_get_active_text(GTK_COMBO_BOX(title)));
	
	strcpy(a.name, gtk_entry_get_text(GTK_ENTRY(name)));
	strcpy(a.surname, gtk_entry_get_text(GTK_ENTRY(surname)));
	strcpy(a.adress, gtk_entry_get_text(GTK_ENTRY(adress)));
	strcpy(a.pickup, gtk_label_get_text(GTK_LABEL(pickup)));
	strcpy(a.phone, gtk_entry_get_text(GTK_ENTRY(phone)));
	strcpy(a.dropoff, gtk_label_get_text(GTK_LABEL(dropoff)));
	strcpy(a.mail, gtk_entry_get_text(GTK_ENTRY(mail)));
	strcpy(a.country, gtk_entry_get_text(GTK_ENTRY(country)));
	strcpy(a.passport, gtk_entry_get_text(GTK_ENTRY(passport)));
	
	res_car(a);
}


void
on_log_out3_clicked                    (GtkWidget *objet_graphique ,
                                        gpointer         user_data)
{
GtkWidget *principale,*book_hotel,*book_flight,*book_car,*History;
	principale = lookup_widget(objet_graphique, "principale");
	book_hotel = lookup_widget(objet_graphique, "book_hotel");
	book_flight = lookup_widget(objet_graphique, "book_flight");
	book_car = lookup_widget(objet_graphique, "book_car");
        History = lookup_widget(objet_graphique, "History");
	
        gtk_widget_destroy(principale);
	gtk_widget_destroy(book_hotel);
	gtk_widget_destroy(book_flight);
	gtk_widget_destroy(book_car);
        gtk_widget_destroy(History);
	
}


void
on_retour_book_car_clicked               (GtkWidget *objet_graphique ,
                                        gpointer         user_data)
{
GtkWidget *principale,*book_hotel,*book_flight,*book_car,*History;
	principale = lookup_widget(objet_graphique, "principale");
	book_hotel = lookup_widget(objet_graphique, "book_hotel");
	book_flight = lookup_widget(objet_graphique, "book_flight");
	book_car = lookup_widget(objet_graphique, "book_car");
        History = lookup_widget(objet_graphique, "History");
	
        gtk_widget_destroy(History);
	gtk_widget_destroy(book_hotel);
	gtk_widget_destroy(book_flight);
        gtk_widget_destroy(book_car);
        principale = create_principale();
	gtk_widget_show(principale);
}


void
on_retour_book_car_destroy             (GtkObject       *object,
                                        gpointer         user_data)
{

}


void
on_select1_activate                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_log_out5_clicked                    (GtkWidget *objet_graphique ,
                                        gpointer         user_data)
{
GtkWidget *principale,*book_hotel,*book_flight,*book_car,*History;
	principale = lookup_widget(objet_graphique, "principale");
	book_hotel = lookup_widget(objet_graphique, "book_hotel");
	book_flight = lookup_widget(objet_graphique, "book_flight");
	book_car = lookup_widget(objet_graphique, "book_car");
        History = lookup_widget(objet_graphique, "History");
	
        gtk_widget_destroy(principale);
	gtk_widget_destroy(book_hotel);
	gtk_widget_destroy(book_flight);
	gtk_widget_destroy(book_car);
        gtk_widget_destroy(History);
	
}


void
on_update_his_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_delete_his_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_retour_home_history_clicked         (GtkWidget *objet_graphique ,
                                        gpointer         user_data)
{
GtkWidget *principale,*book_hotel,*book_flight,*book_car,*History;
	principale = lookup_widget(objet_graphique, "principale");
	book_hotel = lookup_widget(objet_graphique, "book_hotel");
	book_flight = lookup_widget(objet_graphique, "book_flight");
	book_car = lookup_widget(objet_graphique, "book_car");
        History = lookup_widget(objet_graphique, "History");
	
        gtk_widget_destroy(History);
	gtk_widget_destroy(book_hotel);
	gtk_widget_destroy(book_flight);
        gtk_widget_destroy(book_car);
        principale = create_principale();
	gtk_widget_show(principale);
}


void
on_retour_home_history_destroy         (GtkObject       *object,
                                        gpointer         user_data)
{

}


void
on_book_flight_p_clicked               (GtkWidget *objet_graphique ,
                                        gpointer         user_data)
{
GtkWidget *principale,*book_hotel,*book_flight,*book_car,*History;
	principale = lookup_widget(objet_graphique, "principale");
	book_hotel = lookup_widget(objet_graphique, "book_hotel");
	book_flight = lookup_widget(objet_graphique, "book_flight");
	book_car = lookup_widget(objet_graphique, "book_car");
        History = lookup_widget(objet_graphique, "History");
	
        gtk_widget_destroy(principale);
	gtk_widget_destroy(book_hotel);
	gtk_widget_destroy(book_car);
        gtk_widget_destroy(History);
        book_flight = create_book_flight();
	gtk_widget_show(book_flight);
}


void
on_book_flight_p_destroy               (GtkObject       *object,
                                        gpointer         user_data)
{

}


void
on_book_hotel_p_clicked                (GtkWidget *objet_graphique ,
                                        gpointer         user_data)
{
GtkWidget *principale,*book_hotel,*book_flight,*book_car,*History;
	principale = lookup_widget(objet_graphique, "principale");
	book_hotel = lookup_widget(objet_graphique, "book_hotel");
	book_flight = lookup_widget(objet_graphique, "book_flight");
	book_car = lookup_widget(objet_graphique, "book_car");
        History = lookup_widget(objet_graphique, "History");
	
        gtk_widget_destroy(principale);
	gtk_widget_destroy(book_flight);
	gtk_widget_destroy(book_car);
        gtk_widget_destroy(History);
        book_hotel = create_book_hotel();
	gtk_widget_show(book_hotel);
}


void
on_book_hotel_p_destroy                (GtkObject       *object,
                                        gpointer         user_data)
{

}


void
on_whats_new_p_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_whats_new_p_destroy                 (GtkObject       *object,
                                        gpointer         user_data)
{

}
void
on_history_p_destroy                 (GtkObject       *object,
                                        gpointer         user_data)
{

}
void
on_log_out_p_destroy                 (GtkObject       *object,
                                        gpointer         user_data)
{

}


void
on_history_p_clicked                   (GtkWidget *objet_graphique ,
                                        gpointer         user_data)
{
GtkWidget *principale,*book_hotel,*book_flight,*book_car,*History;
	principale = lookup_widget(objet_graphique, "principale");
	book_hotel = lookup_widget(objet_graphique, "book_hotel");
	book_flight = lookup_widget(objet_graphique, "book_flight");
	book_car = lookup_widget(objet_graphique, "book_car");
        History = lookup_widget(objet_graphique, "History");
	
        gtk_widget_destroy(principale);
	gtk_widget_destroy(book_hotel);
	gtk_widget_destroy(book_flight);
        gtk_widget_destroy(book_car);
        History = create_History();
	gtk_widget_show(History);
}





void
on_log_out_p_clicked                  (GtkWidget *objet_graphique ,
                                        gpointer         user_data)
{
GtkWidget *principale,*book_hotel,*book_flight,*book_car,*History;
	principale = lookup_widget(objet_graphique, "principale");
	book_hotel = lookup_widget(objet_graphique, "book_hotel");
	book_flight = lookup_widget(objet_graphique, "book_flight");
	book_car = lookup_widget(objet_graphique, "book_car");
        History = lookup_widget(objet_graphique, "History");
	
        gtk_widget_destroy(principale);
	gtk_widget_destroy(book_hotel);
	gtk_widget_destroy(book_flight);
	gtk_widget_destroy(book_car);
        gtk_widget_destroy(History);
	
	
}






void
on_book_car_p_clicked                   (GtkWidget *objet_graphique ,
                                        gpointer         user_data)
{
GtkWidget *principale,*book_hotel,*book_flight,*book_car,*History;
	principale = lookup_widget(objet_graphique, "principale");
	book_hotel = lookup_widget(objet_graphique, "book_hotel");
	book_flight = lookup_widget(objet_graphique, "book_flight");
	book_car = lookup_widget(objet_graphique, "book_car");
        History = lookup_widget(objet_graphique, "History");
	
        gtk_widget_destroy(principale);
	gtk_widget_destroy(book_hotel);
	gtk_widget_destroy(book_flight);
        gtk_widget_destroy(History);
        book_car = create_book_car();
	gtk_widget_show(book_car);
}


void
on_calendar_checkin_day_selected     (GtkWidget *objet_graphique ,
                                        gpointer         user_data)
{
GtkWidget *calendar,*date_text;
	date_text = lookup_widget(objet_graphique, "checkin_date");
	calendar = lookup_widget(objet_graphique, "calendar_checkin");
	int *year,*day,*month;
	gtk_calendar_get_date(GTK_CALENDAR(calendar),&year,&month,&day);
	int var = month;
	++var;
	char str[50];
	sprintf(str,"%d/%d/%d",day,var,year);
	gtk_label_set_text(GTK_LABEL(date_text),str);
}


void
on_calendar_chekout_day_selected      (GtkWidget *objet_graphique ,
                                        gpointer         user_data)
{
GtkWidget *calendar,*date_text;
	date_text = lookup_widget(objet_graphique, "checkout_date");
	calendar = lookup_widget(objet_graphique, "calendar_chekout");
	int *year,*day,*month;
	gtk_calendar_get_date(GTK_CALENDAR(calendar),&year,&month,&day);
	int var = month;
	++var;
	char str[50];
	sprintf(str,"%d/%d/%d",day,var,year);
	gtk_label_set_text(GTK_LABEL(date_text),str);
}

