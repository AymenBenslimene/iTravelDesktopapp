#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "functions.h"





void
on_buttonjoinnow_clicked               (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"catalogue_customer");
GtkWidget *win2=lookup_widget(objet,"email_pswd");


 win2=create_email_pswd();gtk_widget_show(win2);gtk_widget_destroy(win1);



}


void
on_buttonsignupnow_clicked             (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"email_pswd");
GtkWidget *win2=lookup_widget(objet,"sign_up");


 win2=create_sign_up();gtk_widget_show(win2);gtk_widget_destroy(win1);
}

void
on_buttonok_clicked                    (GtkWidget       *objet,
                                        gpointer         user_data)
{
        GtkWidget *name;
        GtkWidget *surname;
        GtkWidget *password;
        GtkWidget *confirmpassword;
        GtkWidget *identitycard;
        GtkWidget *adress;
        GtkWidget *number;
        GtkWidget *emaiil;
        GtkWidget *day;
        GtkWidget *month;
        GtkWidget *year;
	GtkWidget *win1;
        GtkWidget *win2;
        GtkWidget *failed;
        GtkWidget *failedmaiil;
        GtkWidget *failednumber;


        failednumber=lookup_widget(objet,"labelerreurnumber");
        failedmaiil=lookup_widget(objet,"labelerreurmail");
        failed=lookup_widget(objet,"labelerreur");
	name = lookup_widget(objet, "entryname");
	surname = lookup_widget(objet, "entrysurname");
	password = lookup_widget(objet, "entrypassword");
	confirmpassword = lookup_widget(objet, "entryconfirmpassword");
	identitycard = lookup_widget(objet, "entryidentitycard");
	adress = lookup_widget(objet, "entryadress");
	number = lookup_widget(objet, "entrynumber");
        emaiil  = lookup_widget(objet, "entryemaiil");
        day = lookup_widget(objet, "spinbuttonday");
	month = lookup_widget(objet, "spinbuttonmonth");
	year = lookup_widget(objet, "spinbuttonyear");
        win1=lookup_widget(objet,"sign_up");
        win2=lookup_widget(objet,"menu_customer");



        MEMBER m;
	
        m.bdate.day = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(day));
	m.bdate.month = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(month));
	m.bdate.year = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(year));
	strcpy(m.name, gtk_entry_get_text(GTK_ENTRY(name)));
	strcpy(m.surname, gtk_entry_get_text(GTK_ENTRY(surname)));
	strcpy(m.password, gtk_entry_get_text(GTK_ENTRY(password)));
	strcpy(m.confirmpassword, gtk_entry_get_text(GTK_ENTRY(confirmpassword)));
	strcpy(m.identitycard, gtk_entry_get_text(GTK_ENTRY(identitycard)));
	strcpy(m.adress, gtk_entry_get_text(GTK_ENTRY(adress)));
        strcpy(m.number, gtk_entry_get_text(GTK_ENTRY(number)));
        strcpy(m.emaiil, gtk_entry_get_text(GTK_ENTRY(emaiil)));
        
        add_users(m);
	
	if((SamePassword(gtk_entry_get_text(GTK_ENTRY(password)),gtk_entry_get_text(GTK_ENTRY(confirmpassword)))) && (valid_email(gtk_entry_get_text(GTK_ENTRY(emaiil)))==1) && (valid_number(gtk_entry_get_text(GTK_ENTRY(number)))==1))
	    {
		
		
                win2=create_menu_customer();
                gtk_widget_show(win2);
                gtk_widget_destroy(win1);
                
	    }

       else if(valid_email(gtk_entry_get_text(GTK_ENTRY(emaiil)))==0)
           {

              gtk_label_set_text(GTK_LABEL(failedmaiil),"@ is obligatory");

           }

       else if(valid_number(gtk_entry_get_text(GTK_ENTRY(number)))==0)
           {

              gtk_label_set_text(GTK_LABEL(failednumber)," 11 chiffres !!");

           }




	else 
	   {	
		gtk_label_set_text(GTK_LABEL(failed),"failed.");
	   }
	
        

     /*  GtkWidget *win1=lookup_widget(objet,"sign_up");
       GtkWidget *win2=lookup_widget(objet,"menu_customer");
       win2=create_menu_customer();
       gtk_widget_show(win2);
       gtk_widget_destroy(win1);
     */
}


void
on_buttonlogin_clicked                 (GtkWidget       *objet,
                                        gpointer         user_data)
{


        GtkWidget *win2 ;
	GtkWidget *win1 ;
	GtkWidget *inputemail;
	GtkWidget *inputpassword;
	GtkWidget *error;
	
	error=lookup_widget(objet,"labelerror");
       
	inputemail=lookup_widget(objet, "entryemail");
	inputpassword=lookup_widget(objet,"entrypassword");
	win1 = lookup_widget(objet,"email_pswd") ;
        win2=lookup_widget(objet,"menu_customer");
	char *email=gtk_entry_get_text(GTK_ENTRY(inputemail));
	char *password=gtk_entry_get_text(GTK_ENTRY(inputpassword));
	
	if (verifier(email,password)==1)
              {
		gtk_widget_destroy(win1);
		win2=create_menu_customer();
		gtk_widget_show(win2);
		
	      }
	else 	
              {
                 gtk_label_set_text(GTK_LABEL(error),"Invalid information");
              }

       /* GtkWidget *win1 = lookup_widget(objet,"email_pswd") ;
        GtkWidget *win2=lookup_widget(objet,"menu_customer");
        gtk_widget_destroy(win1);
        win2=create_menu_customer();
	gtk_widget_show(win2);*/
}


void
on_buttonreturn_clicked                (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"sign_up");
GtkWidget *win2=lookup_widget(objet,"email_pswd");


 win2=create_email_pswd();gtk_widget_show(win2);gtk_widget_destroy(win1);
}










void
on_buttonforgotpswd_clicked            (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"email_pswd");
GtkWidget *win2=lookup_widget(objet,"forgot_psswd");


 win2=create_forgot_psswd();gtk_widget_show(win2);gtk_widget_destroy(win1);
}


void
on_buttonsent_clicked                  (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"forgot_psswd");
GtkWidget *win2=lookup_widget(objet,"menu_customer");


 win2=create_menu_customer();gtk_widget_show(win2);gtk_widget_destroy(win1);
}


void
on_buttonlogout_clicked                (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"settings");
GtkWidget *win2=lookup_widget(objet,"email_pswd");


 win2=create_email_pswd();gtk_widget_show(win2);gtk_widget_destroy(win1);
}


void
on_buttonsettings_clicked              (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"menu_customer");
GtkWidget *win2=lookup_widget(objet,"settings");


 win2=create_settings();gtk_widget_show(win2);gtk_widget_destroy(win1);
}


void
on_buttonhotels_clicked                (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"menu_customer");
GtkWidget *win2=lookup_widget(objet,"Hotel");


 win2=create_Hotel();gtk_widget_show(win2);gtk_widget_destroy(win1);
}





void
on_buttonleasing_clicked               (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"menu_customer");
GtkWidget *win2=lookup_widget(objet,"leasing");


 win2=create_leasing();gtk_widget_show(win2);gtk_widget_destroy(win1);
}


void
on_buttonofferoftheday_clicked         (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"menu_customer");
GtkWidget *win2=lookup_widget(objet,"offer_of_the_day");


 win2=create_offer_of_the_day();gtk_widget_show(win2);gtk_widget_destroy(win1);
}


void
on_buttonprotectyouraccount_clicked    (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"settings");
GtkWidget *win2=lookup_widget(objet,"protect_your_account");


 win2=create_protect_your_account();gtk_widget_show(win2);gtk_widget_destroy(win1);
}





void
on_buttonchangeyourprofilepicture_clicked
                                        (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"settings");
GtkWidget *win2=lookup_widget(objet,"change_your_picture");


 win2=create_change_your_picture();gtk_widget_show(win2);gtk_widget_destroy(win1);
}


void
on_buttondeleteyouraccount_clicked     (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"settings");
GtkWidget *win2=lookup_widget(objet,"deleteyouraccount");


 win2=create_deleteyouraccount();gtk_widget_show(win2);gtk_widget_destroy(win1);
}



void
on_buttonreturn1_clicked               (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"deleteyouraccount");
GtkWidget *win2=lookup_widget(objet,"settings");


 win2=create_settings();gtk_widget_show(win2);gtk_widget_destroy(win1);
}


void
on_buttonreturn2_clicked               (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"catalogue_customer_view");
GtkWidget *win2=lookup_widget(objet,"catalogue_customer");


 win2=create_catalogue_customer();gtk_widget_show(win2);gtk_widget_destroy(win1);
}


void
on_buttonview_clicked                  (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"catalogue_customer");
GtkWidget *win2=lookup_widget(objet,"catalogue_customer_view");


 win2=create_catalogue_customer_view();gtk_widget_show(win2);gtk_widget_destroy(win1);
}


void
on_buttonreturn3_clicked               (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"catalogue_customer_download");
GtkWidget *win2=lookup_widget(objet,"catalogue_customer");


 win2=create_catalogue_customer();gtk_widget_show(win2);gtk_widget_destroy(win1);
}


void
on_buttondawnload_clicked              (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"catalogue_customer");
GtkWidget *win2=lookup_widget(objet,"catalogue_customer_download");


 win2=create_catalogue_customer_download();gtk_widget_show(win2);gtk_widget_destroy(win1);
}


/*void
on_buttonreturn4_clicked               (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"login");
GtkWidget *win2=lookup_widget(objet,"catalogue_customer");


 win2=create_catalogue_customer();gtk_widget_show(win2);gtk_widget_destroy(win1);
}*/


void
on_buttonreturn5_clicked               (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"Hotel");
GtkWidget *win2=lookup_widget(objet,"menu_customer");


 win2=create_menu_customer();gtk_widget_show(win2);gtk_widget_destroy(win1);
}





void
on_buttonreturn6_clicked               (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"leasing");
GtkWidget *win2=lookup_widget(objet,"menu_customer");


 win2=create_menu_customer();gtk_widget_show(win2);gtk_widget_destroy(win1);
}


void
on_buttonreturn7_clicked               (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"offer_of_the_day");
GtkWidget *win2=lookup_widget(objet,"menu_customer");


 win2=create_menu_customer();gtk_widget_show(win2);gtk_widget_destroy(win1);
}


void
on_buttonreturn8_clicked               (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"change_your_picture");
GtkWidget *win2=lookup_widget(objet,"settings");


 win2=create_settings();gtk_widget_show(win2);gtk_widget_destroy(win1);
}


void
on_buttonreturn9_clicked               (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"email_pswd");
GtkWidget *win2=lookup_widget(objet,"catalogue_customer");


 win2=create_catalogue_customer();gtk_widget_show(win2);gtk_widget_destroy(win1);
}


void
on_buttonreturn10_clicked              (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"forgot_psswd");
GtkWidget *win2=lookup_widget(objet,"email_pswd");


 win2=create_email_pswd();gtk_widget_show(win2);gtk_widget_destroy(win1);
}





void
on_buttonlogout1_clicked               (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"menu_customer");
GtkWidget *win2=lookup_widget(objet,"email_pswd");


 win2=create_email_pswd();gtk_widget_show(win2);gtk_widget_destroy(win1);
}


void
on_buttonreturn12_clicked              (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"protect_your_account");
GtkWidget *win2=lookup_widget(objet,"settings");


 win2=create_settings();gtk_widget_show(win2);gtk_widget_destroy(win1);
}


void
on_buttonreturn13_clicked              (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"settings");
GtkWidget *win2=lookup_widget(objet,"menu_customer");


 win2=create_menu_customer();gtk_widget_show(win2);gtk_widget_destroy(win1);
}


void
on_buttonok1_clicked                   (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"protect_your_account");
GtkWidget *win2=lookup_widget(objet,"email_pswd");


 win2=create_email_pswd();gtk_widget_show(win2);gtk_widget_destroy(win1);
}








/*void
on_buttonnext_clicked                  (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"hotel");
GtkWidget *win2=lookup_widget(objet,"image2");


 win2=create_image2();gtk_widget_show(win2);gtk_widget_destroy(win1);
}
*/

//*******************************************

/* void on_image12_button_press_event (GtkWidget       *objet,
                                        gpointer         user_data)
{



}*/












void
on_buttonnext_clicked                  (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *win1=lookup_widget(objet,"hotel");
GtkWidget *win2=lookup_widget(objet,"image1");


 win2=create_image1();gtk_widget_show(win2);gtk_widget_destroy(win1);
}

/*
void
on_buttonsearch_clicked                (GtkWidget       *objet,
                                        gpointer         user_data)
{


        GtkWidget *donnezname;
	//GtkWidget *win1;
        //GtkWidget *win2;
        GtkWidget *name;
        GtkWidget *description;
        GtkWidget *price;

        //win1=lookup_widget(objet,"hotel");
        //win2=lookup_widget(objet,"hotel");
        
        name=lookup_widget(objet,"labelhotelnamee");
        description=lookup_widget(objet,"labeldescription");
        price=lookup_widget(objet,"labelprice");
	donnezname = lookup_widget(objet, "entrynamehotel");
     
        
             gtk_label_set_text(GTK_LABEL(name),"the palace");
             gtk_label_set_text(GTK_LABEL(description),"hotel luxe, location: al Marsa ");
             gtk_label_set_text(GTK_LABEL(price),"710 dt");


    
        if(strcmp(donnezname,"the palace")==0)
        {      
 
             gtk_label_set_text(GTK_LABEL(name),"the palace");
             gtk_label_set_text(GTK_LABEL(description),"hotel luxe, location: al Marsa ");
             gtk_label_set_text(GTK_LABEL(price),"710 dt");

                
        }

        if (strcmp(donnezname,"La Badira")==0)
        {


             gtk_label_set_text(GTK_LABEL(name),"La Badira");
             gtk_label_set_text(GTK_LABEL(description),"only for adult, lacation:Hammamet  ");
             gtk_label_set_text(GTK_LABEL(price),"570 dt");
       
        }


        
         if (strcmp(donnezname,"Palais Bayram")==0)
        {


             gtk_label_set_text(GTK_LABEL(name),"Palais Bayram");
             gtk_label_set_text(GTK_LABEL(description),"located in the medina of tunisie, the staff speak english ");
             gtk_label_set_text(GTK_LABEL(price),"350 dt");
       
        }
}

*/
        




void
on_buttonhotel_palais_bayram_clicked   (GtkWidget      *objet,
                                        gpointer         user_data)
{

            
             GtkWidget *name;
             GtkWidget *description;
             GtkWidget *price;
        
             name=lookup_widget(objet,"labelhotelnamee");
             description=lookup_widget(objet,"labeldescription");
             price=lookup_widget(objet,"labelprice");
	     
        
             gtk_label_set_text(GTK_LABEL(name),"Palais Bayram");
             gtk_label_set_text(GTK_LABEL(description),"located in the medina of tunisie,\nthe staff speak english ");
             gtk_label_set_text(GTK_LABEL(price),"350 dt");




}


void
on_buttonhotel_the_palaca_clicked      (GtkWidget       *objet,
                                        gpointer         user_data)
{


             GtkWidget *name;
             GtkWidget *description;
             GtkWidget *price;
        
             name=lookup_widget(objet,"labelhotelnamee");
             description=lookup_widget(objet,"labeldescription");
             price=lookup_widget(objet,"labelprice");
	     
        
             gtk_label_set_text(GTK_LABEL(name),"The palace");
             gtk_label_set_text(GTK_LABEL(description),"hotel luxe\nlocation: al Marsa");
             gtk_label_set_text(GTK_LABEL(price),"710 dt");
}


void
on_buttonhotel_la_badira_clicked       (GtkWidget       *objet,
                                        gpointer         user_data)
{


             GtkWidget *name;
             GtkWidget *description;
             GtkWidget *price;
        
             name=lookup_widget(objet,"labelhotelnamee");
             description=lookup_widget(objet,"labeldescription");
             price=lookup_widget(objet,"labelprice");
	     
        
             gtk_label_set_text(GTK_LABEL(name),"La Badira");
             gtk_label_set_text(GTK_LABEL(description),"only for adult\nlacation:Hammamet");
             gtk_label_set_text(GTK_LABEL(price),"570 dt");
}


void
on_buttonmercedes_clicked              (GtkWidget       *objet,
                                        gpointer         user_data)
{
             GtkWidget *name;
             GtkWidget *description;
             GtkWidget *price;
        
             name=lookup_widget(objet,"labelcarname1");
             description=lookup_widget(objet,"labelcardescription1");
             price=lookup_widget(objet,"labelcarprice1");
	     
        
             gtk_label_set_text(GTK_LABEL(name),"Mercedes");
             gtk_label_set_text(GTK_LABEL(description),"four doors\n colors:red,blue\ncomfort");
             gtk_label_set_text(GTK_LABEL(price),"80dt/day");
}


void
on_buttongolf_clicked                  (GtkWidget       *objet,
                                        gpointer         user_data)
{
             GtkWidget *name;
             GtkWidget *description;
             GtkWidget *price;
        
             name=lookup_widget(objet,"labelcarname1");
             description=lookup_widget(objet,"labelcardescription1");
             price=lookup_widget(objet,"labelcarprice1");
	     
        
             gtk_label_set_text(GTK_LABEL(name),"Golf");
             gtk_label_set_text(GTK_LABEL(description),"four doors\n colors:green,blue\ncomfort");
             gtk_label_set_text(GTK_LABEL(price),"70dt/day");
}


void
on_buttonkia_clicked                   (GtkWidget       *objet,
                                        gpointer         user_data)
{
             GtkWidget *name;
             GtkWidget *description;
             GtkWidget *price;
        
             name=lookup_widget(objet,"labelcarname1");
             description=lookup_widget(objet,"labelcardescription1");
             price=lookup_widget(objet,"labelcarprice1");
	     
        
             gtk_label_set_text(GTK_LABEL(name),"KIA");
             gtk_label_set_text(GTK_LABEL(description),"four doors\n colors:white,black\ncomfort");
             gtk_label_set_text(GTK_LABEL(price),"100dt/day");
}


void
on_buttonbmw_clicked                   (GtkWidget       *objet,
                                        gpointer         user_data)
{
             GtkWidget *name;
             GtkWidget *description;
             GtkWidget *price;
        
             name=lookup_widget(objet,"labelcarname1");
             description=lookup_widget(objet,"labelcardescription1");
             price=lookup_widget(objet,"labelcarprice1");
	     
        
             gtk_label_set_text(GTK_LABEL(name),"BMW");
             gtk_label_set_text(GTK_LABEL(description),"four doors\n colors:blue,black\ncomfort");
             gtk_label_set_text(GTK_LABEL(price),"110dt/day");
}


void
on_buttonoffersold_clicked             (GtkWidget       *objet,
                                        gpointer         user_data)
{
             

             GtkWidget *date;
             GtkWidget *description;
             
        
             date=lookup_widget(objet,"labelofferdate1");
             description=lookup_widget(objet,"labelofferdescription1");
             
	     
        
             gtk_label_set_text(GTK_LABEL(date),"From 12/01/2020\nTo 28/01/2020");
             gtk_label_set_text(GTK_LABEL(description),"For two members from\nthe same family : -20%");
             
}


void
on_buttonoffergifts_clicked            (GtkWidget       *objet,
                                        gpointer         user_data)
{

             GtkWidget *date;
             GtkWidget *description;
             
        
             date=lookup_widget(objet,"labelofferdate1");
             description=lookup_widget(objet,"labelofferdescription1");
             
	     
        
             gtk_label_set_text(GTK_LABEL(date),"From 01/05/2020\nTo 02/05/2020");
             gtk_label_set_text(GTK_LABEL(description),"Send an SMS to enter\nthe draw and win a gift");
}


void
on_buttondelete_clicked                (GtkWidget      *objet,
                                        gpointer         user_data)
{

	     GtkWidget *deleted;
	     GtkWidget *incorrect;
             GtkWidget *password;
             GtkWidget *win1;
             GtkWidget *win2;
             GtkWidget *inputemail;

             inputemail=lookup_widget(objet, "entryemail");
             win1=lookup_widget(objet,"deleteyouraccount");
             win2=lookup_widget(objet,"email_pswd");
	
	     incorrect=lookup_widget(objet,"labelpasswordincorrect");
             deleted=lookup_widget(objet,"labeldeletepassword");
             password = lookup_widget(objet, "entrypassword2");

             char *email=gtk_entry_get_text(GTK_ENTRY(inputemail));
	     char *pass=gtk_entry_get_text(GTK_ENTRY(password));

              if (get_customer_password(email,pass)==0)
                     {

                       gtk_label_set_text(GTK_LABEL(incorrect),"incorrect password");
                     }
              
              
              else
                     {
                     


                      win2=create_email_pswd();
                      gtk_widget_show(win2);
                      gtk_widget_destroy(win1); 
                      
                     }







}













