/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_window1 (void)
{
  GtkWidget *window1;
  GtkWidget *fixed1;
  GtkWidget *fixed2;
  GtkWidget *fixed3;
  GtkWidget *button4;
  GtkWidget *button2;
  GtkWidget *button3;
  GtkWidget *button_editing_content;

  window1 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window1), _("touchbord"));

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (window1), fixed1);

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_fixed_put (GTK_FIXED (fixed1), fixed2, 248, 128);
  gtk_widget_set_size_request (fixed2, 109, 29);

  fixed3 = gtk_fixed_new ();
  gtk_widget_show (fixed3);
  gtk_fixed_put (GTK_FIXED (fixed2), fixed3, 0, 0);
  gtk_widget_set_size_request (fixed3, 0, 0);

  button4 = gtk_button_new_with_mnemonic (_("log out"));
  gtk_widget_show (button4);
  gtk_fixed_put (GTK_FIXED (fixed1), button4, 24, 24);
  gtk_widget_set_size_request (button4, 64, 40);

  button2 = gtk_button_new_with_mnemonic (_("Costumer"));
  gtk_widget_show (button2);
  gtk_fixed_put (GTK_FIXED (fixed1), button2, 192, 392);
  gtk_widget_set_size_request (button2, 328, 104);

  button3 = gtk_button_new_with_mnemonic (_("Request"));
  gtk_widget_show (button3);
  gtk_fixed_put (GTK_FIXED (fixed1), button3, 192, 120);
  gtk_widget_set_size_request (button3, 328, 101);

  button_editing_content = gtk_button_new_with_mnemonic (_("Editing Content"));
  gtk_widget_show (button_editing_content);
  gtk_fixed_put (GTK_FIXED (fixed1), button_editing_content, 192, 256);
  gtk_widget_set_size_request (button_editing_content, 328, 101);

  g_signal_connect ((gpointer) button_editing_content, "clicked",
                    G_CALLBACK (on_button_editing_content_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window1, window1, "window1");
  GLADE_HOOKUP_OBJECT (window1, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (window1, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (window1, fixed3, "fixed3");
  GLADE_HOOKUP_OBJECT (window1, button4, "button4");
  GLADE_HOOKUP_OBJECT (window1, button2, "button2");
  GLADE_HOOKUP_OBJECT (window1, button3, "button3");
  GLADE_HOOKUP_OBJECT (window1, button_editing_content, "button_editing_content");

  return window1;
}

GtkWidget*
create_window_hotels (void)
{
  GtkWidget *window_hotels;
  GtkWidget *fixed4;
  GtkWidget *fixed5;
  GtkWidget *fixed6;
  GtkWidget *entry16;
  GtkWidget *entry17;
  GtkWidget *entry18;
  GtkWidget *vseparator2;
  GtkWidget *vseparator11;
  GtkWidget *label17;
  GtkWidget *checkbutton121;
  GtkWidget *checkbutton122;
  GtkWidget *checkbutton123;
  GtkWidget *checkbutton124;
  GtkWidget *label16;
  GtkWidget *entry151;
  GtkWidget *hseparator12;
  GtkWidget *button20;
  GtkWidget *label18;
  GtkWidget *entry156;
  GtkWidget *entry157;
  GtkWidget *button21;
  GtkWidget *entry158;
  GtkWidget *label19;
  GtkWidget *label22;
  GtkWidget *button29;
  GtkWidget *button17;
  GtkWidget *button18;
  GtkWidget *hseparator2;
  GtkWidget *fenetre_leasing;
  GtkWidget *fenetre_hotrels;
  GtkWidget *fenetre_offre_of_the_day;
  GtkWidget *logout;

  window_hotels = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window_hotels), _("window_hotels"));

  fixed4 = gtk_fixed_new ();
  gtk_widget_show (fixed4);
  gtk_container_add (GTK_CONTAINER (window_hotels), fixed4);

  fixed5 = gtk_fixed_new ();
  gtk_widget_show (fixed5);
  gtk_fixed_put (GTK_FIXED (fixed4), fixed5, 248, 128);
  gtk_widget_set_size_request (fixed5, 109, 29);

  fixed6 = gtk_fixed_new ();
  gtk_widget_show (fixed6);
  gtk_fixed_put (GTK_FIXED (fixed5), fixed6, 0, 0);
  gtk_widget_set_size_request (fixed6, 0, 0);

  entry16 = gtk_entry_new ();
  gtk_widget_show (entry16);
  gtk_fixed_put (GTK_FIXED (fixed5), entry16, 96, 32);
  gtk_widget_set_size_request (entry16, 368, 35);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry16), 8226);

  entry17 = gtk_entry_new ();
  gtk_widget_show (entry17);
  gtk_fixed_put (GTK_FIXED (fixed4), entry17, 344, 208);
  gtk_widget_set_size_request (entry17, 368, 35);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry17), 8226);

  entry18 = gtk_entry_new ();
  gtk_widget_show (entry18);
  gtk_fixed_put (GTK_FIXED (fixed4), entry18, 344, 256);
  gtk_widget_set_size_request (entry18, 368, 35);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry18), 8226);

  vseparator2 = gtk_vseparator_new ();
  gtk_widget_show (vseparator2);
  gtk_fixed_put (GTK_FIXED (fixed4), vseparator2, 152, 0);
  gtk_widget_set_size_request (vseparator2, 16, 608);

  vseparator11 = gtk_vseparator_new ();
  gtk_widget_show (vseparator11);
  gtk_fixed_put (GTK_FIXED (fixed4), vseparator11, 680, 376);
  gtk_widget_set_size_request (vseparator11, 16, 16);

  label17 = gtk_label_new (_("deleted"));
  gtk_widget_show (label17);
  gtk_fixed_put (GTK_FIXED (fixed4), label17, 968, 96);
  gtk_widget_set_size_request (label17, 144, 47);

  checkbutton121 = gtk_check_button_new_with_mnemonic ("");
  gtk_widget_show (checkbutton121);
  gtk_fixed_put (GTK_FIXED (fixed4), checkbutton121, 1024, 160);
  gtk_widget_set_size_request (checkbutton121, 134, 24);

  checkbutton122 = gtk_check_button_new_with_mnemonic ("");
  gtk_widget_show (checkbutton122);
  gtk_fixed_put (GTK_FIXED (fixed4), checkbutton122, 1024, 208);
  gtk_widget_set_size_request (checkbutton122, 134, 24);

  checkbutton123 = gtk_check_button_new_with_mnemonic ("");
  gtk_widget_show (checkbutton123);
  gtk_fixed_put (GTK_FIXED (fixed4), checkbutton123, 1024, 264);
  gtk_widget_set_size_request (checkbutton123, 134, 24);

  checkbutton124 = gtk_check_button_new_with_mnemonic ("");
  gtk_widget_show (checkbutton124);
  gtk_fixed_put (GTK_FIXED (fixed4), checkbutton124, 1024, 312);
  gtk_widget_set_size_request (checkbutton124, 134, 24);

  label16 = gtk_label_new (_("hotels"));
  gtk_widget_show (label16);
  gtk_fixed_put (GTK_FIXED (fixed4), label16, 344, 96);
  gtk_widget_set_size_request (label16, 360, 57);

  entry151 = gtk_entry_new ();
  gtk_widget_show (entry151);
  gtk_fixed_put (GTK_FIXED (fixed4), entry151, 344, 304);
  gtk_widget_set_size_request (entry151, 368, 35);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry151), 8226);

  hseparator12 = gtk_hseparator_new ();
  gtk_widget_show (hseparator12);
  gtk_fixed_put (GTK_FIXED (fixed4), hseparator12, 160, 384);
  gtk_widget_set_size_request (hseparator12, 1024, 16);

  button20 = gtk_button_new_with_mnemonic (_("saved"));
  gtk_widget_show (button20);
  gtk_fixed_put (GTK_FIXED (fixed4), button20, 640, 352);
  gtk_widget_set_size_request (button20, 66, 29);

  label18 = gtk_label_new (_("name of hotels"));
  gtk_widget_show (label18);
  gtk_fixed_put (GTK_FIXED (fixed4), label18, 168, 400);
  gtk_widget_set_size_request (label18, 168, 33);

  entry156 = gtk_entry_new ();
  gtk_widget_show (entry156);
  gtk_fixed_put (GTK_FIXED (fixed4), entry156, 168, 472);
  gtk_widget_set_size_request (entry156, 224, 43);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry156), 8226);

  entry157 = gtk_entry_new ();
  gtk_widget_show (entry157);
  gtk_fixed_put (GTK_FIXED (fixed4), entry157, 424, 448);
  gtk_widget_set_size_request (entry157, 424, 112);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry157), 8226);

  button21 = gtk_button_new_with_mnemonic (_("saved"));
  gtk_widget_show (button21);
  gtk_fixed_put (GTK_FIXED (fixed4), button21, 568, 576);
  gtk_widget_set_size_request (button21, 74, 29);

  entry158 = gtk_entry_new ();
  gtk_widget_show (entry158);
  gtk_fixed_put (GTK_FIXED (fixed4), entry158, 952, 464);
  gtk_widget_set_size_request (entry158, 112, 72);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry158), 8226);

  label19 = gtk_label_new (_("prices"));
  gtk_widget_show (label19);
  gtk_fixed_put (GTK_FIXED (fixed4), label19, 920, 400);
  gtk_widget_set_size_request (label19, 176, 40);

  label22 = gtk_label_new (_("descriptions"));
  gtk_widget_show (label22);
  gtk_fixed_put (GTK_FIXED (fixed4), label22, 544, 400);
  gtk_widget_set_size_request (label22, 184, 33);

  button29 = gtk_button_new_with_mnemonic (_("Request"));
  gtk_widget_show (button29);
  gtk_fixed_put (GTK_FIXED (fixed4), button29, 24, 128);
  gtk_widget_set_size_request (button29, 128, 69);

  button17 = gtk_button_new_with_mnemonic (_("Editing Content"));
  gtk_widget_show (button17);
  gtk_fixed_put (GTK_FIXED (fixed4), button17, 24, 272);
  gtk_widget_set_size_request (button17, 128, 69);

  button18 = gtk_button_new_with_mnemonic (_("Costumer"));
  gtk_widget_show (button18);
  gtk_fixed_put (GTK_FIXED (fixed4), button18, 24, 392);
  gtk_widget_set_size_request (button18, 128, 69);

  hseparator2 = gtk_hseparator_new ();
  gtk_widget_show (hseparator2);
  gtk_fixed_put (GTK_FIXED (fixed4), hseparator2, 160, 80);
  gtk_widget_set_size_request (hseparator2, 1024, 16);

  fenetre_leasing = gtk_button_new_with_mnemonic (_("Leasing"));
  gtk_widget_show (fenetre_leasing);
  gtk_fixed_put (GTK_FIXED (fixed4), fenetre_leasing, 864, 24);
  gtk_widget_set_size_request (fenetre_leasing, 304, 53);

  fenetre_hotrels = gtk_button_new_with_mnemonic (_("Hotels"));
  gtk_widget_show (fenetre_hotrels);
  gtk_fixed_put (GTK_FIXED (fixed4), fenetre_hotrels, 176, 24);
  gtk_widget_set_size_request (fenetre_hotrels, 328, 53);

  fenetre_offre_of_the_day = gtk_button_new_with_mnemonic (_("Offre of the day"));
  gtk_widget_show (fenetre_offre_of_the_day);
  gtk_fixed_put (GTK_FIXED (fixed4), fenetre_offre_of_the_day, 504, 24);
  gtk_widget_set_size_request (fenetre_offre_of_the_day, 352, 53);

  logout = gtk_button_new_with_mnemonic (_("log out"));
  gtk_widget_show (logout);
  gtk_fixed_put (GTK_FIXED (fixed4), logout, 24, 24);
  gtk_widget_set_size_request (logout, 64, 40);

  g_signal_connect ((gpointer) fenetre_leasing, "clicked",
                    G_CALLBACK (on_fenetre_leasing_clicked),
                    NULL);
  g_signal_connect ((gpointer) fenetre_hotrels, "clicked",
                    G_CALLBACK (on_fenetre_hotrels_clicked),
                    NULL);
  g_signal_connect ((gpointer) fenetre_offre_of_the_day, "clicked",
                    G_CALLBACK (on_fenetre_offre_of_the_day_clicked),
                    NULL);
  g_signal_connect ((gpointer) logout, "clicked",
                    G_CALLBACK (on_logout_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window_hotels, window_hotels, "window_hotels");
  GLADE_HOOKUP_OBJECT (window_hotels, fixed4, "fixed4");
  GLADE_HOOKUP_OBJECT (window_hotels, fixed5, "fixed5");
  GLADE_HOOKUP_OBJECT (window_hotels, fixed6, "fixed6");
  GLADE_HOOKUP_OBJECT (window_hotels, entry16, "entry16");
  GLADE_HOOKUP_OBJECT (window_hotels, entry17, "entry17");
  GLADE_HOOKUP_OBJECT (window_hotels, entry18, "entry18");
  GLADE_HOOKUP_OBJECT (window_hotels, vseparator2, "vseparator2");
  GLADE_HOOKUP_OBJECT (window_hotels, vseparator11, "vseparator11");
  GLADE_HOOKUP_OBJECT (window_hotels, label17, "label17");
  GLADE_HOOKUP_OBJECT (window_hotels, checkbutton121, "checkbutton121");
  GLADE_HOOKUP_OBJECT (window_hotels, checkbutton122, "checkbutton122");
  GLADE_HOOKUP_OBJECT (window_hotels, checkbutton123, "checkbutton123");
  GLADE_HOOKUP_OBJECT (window_hotels, checkbutton124, "checkbutton124");
  GLADE_HOOKUP_OBJECT (window_hotels, label16, "label16");
  GLADE_HOOKUP_OBJECT (window_hotels, entry151, "entry151");
  GLADE_HOOKUP_OBJECT (window_hotels, hseparator12, "hseparator12");
  GLADE_HOOKUP_OBJECT (window_hotels, button20, "button20");
  GLADE_HOOKUP_OBJECT (window_hotels, label18, "label18");
  GLADE_HOOKUP_OBJECT (window_hotels, entry156, "entry156");
  GLADE_HOOKUP_OBJECT (window_hotels, entry157, "entry157");
  GLADE_HOOKUP_OBJECT (window_hotels, button21, "button21");
  GLADE_HOOKUP_OBJECT (window_hotels, entry158, "entry158");
  GLADE_HOOKUP_OBJECT (window_hotels, label19, "label19");
  GLADE_HOOKUP_OBJECT (window_hotels, label22, "label22");
  GLADE_HOOKUP_OBJECT (window_hotels, button29, "button29");
  GLADE_HOOKUP_OBJECT (window_hotels, button17, "button17");
  GLADE_HOOKUP_OBJECT (window_hotels, button18, "button18");
  GLADE_HOOKUP_OBJECT (window_hotels, hseparator2, "hseparator2");
  GLADE_HOOKUP_OBJECT (window_hotels, fenetre_leasing, "fenetre_leasing");
  GLADE_HOOKUP_OBJECT (window_hotels, fenetre_hotrels, "fenetre_hotrels");
  GLADE_HOOKUP_OBJECT (window_hotels, fenetre_offre_of_the_day, "fenetre_offre_of_the_day");
  GLADE_HOOKUP_OBJECT (window_hotels, logout, "logout");

  return window_hotels;
}

GtkWidget*
create_window_offre_of_the_days (void)
{
  GtkWidget *window_offre_of_the_days;
  GtkWidget *fixed7;
  GtkWidget *fixed8;
  GtkWidget *fixed9;
  GtkWidget *entry36;
  GtkWidget *entry37;
  GtkWidget *entry38;
  GtkWidget *entry39;
  GtkWidget *button33;
  GtkWidget *button34;
  GtkWidget *button45;
  GtkWidget *vseparator3;
  GtkWidget *button47;
  GtkWidget *label35;
  GtkWidget *label36;
  GtkWidget *checkbutton32;
  GtkWidget *checkbutton29;
  GtkWidget *checkbutton31;
  GtkWidget *checkbutton30;
  GtkWidget *button39;
  GtkWidget *hseparator15;
  GtkWidget *label43;
  GtkWidget *label44;
  GtkWidget *entry159;
  GtkWidget *entry160;
  GtkWidget *entry161;
  GtkWidget *button40;
  GtkWidget *label45;
  GtkWidget *hseparator3;
  GtkWidget *logout1;
  GtkWidget *buttonHotels;
  GtkWidget *buttonLeasing;

  window_offre_of_the_days = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window_offre_of_the_days), _("window_offre_of_the_days"));

  fixed7 = gtk_fixed_new ();
  gtk_widget_show (fixed7);
  gtk_container_add (GTK_CONTAINER (window_offre_of_the_days), fixed7);

  fixed8 = gtk_fixed_new ();
  gtk_widget_show (fixed8);
  gtk_fixed_put (GTK_FIXED (fixed7), fixed8, 248, 128);
  gtk_widget_set_size_request (fixed8, 109, 29);

  fixed9 = gtk_fixed_new ();
  gtk_widget_show (fixed9);
  gtk_fixed_put (GTK_FIXED (fixed8), fixed9, 0, 0);
  gtk_widget_set_size_request (fixed9, 0, 0);

  entry36 = gtk_entry_new ();
  gtk_widget_show (entry36);
  gtk_fixed_put (GTK_FIXED (fixed7), entry36, 376, 312);
  gtk_widget_set_size_request (entry36, 328, 40);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry36), 8226);

  entry37 = gtk_entry_new ();
  gtk_widget_show (entry37);
  gtk_fixed_put (GTK_FIXED (fixed7), entry37, 376, 216);
  gtk_widget_set_size_request (entry37, 328, 40);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry37), 8226);

  entry38 = gtk_entry_new ();
  gtk_widget_show (entry38);
  gtk_fixed_put (GTK_FIXED (fixed7), entry38, 376, 160);
  gtk_widget_set_size_request (entry38, 328, 43);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry38), 8226);

  entry39 = gtk_entry_new ();
  gtk_widget_show (entry39);
  gtk_fixed_put (GTK_FIXED (fixed7), entry39, 376, 264);
  gtk_widget_set_size_request (entry39, 328, 40);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry39), 8226);

  button33 = gtk_button_new_with_mnemonic (_("Editing Content"));
  gtk_widget_show (button33);
  gtk_fixed_put (GTK_FIXED (fixed7), button33, 24, 264);
  gtk_widget_set_size_request (button33, 128, 69);

  button34 = gtk_button_new_with_mnemonic (_("Costumer"));
  gtk_widget_show (button34);
  gtk_fixed_put (GTK_FIXED (fixed7), button34, 24, 400);
  gtk_widget_set_size_request (button34, 128, 69);

  button45 = gtk_button_new_with_mnemonic (_("Request"));
  gtk_widget_show (button45);
  gtk_fixed_put (GTK_FIXED (fixed7), button45, 24, 120);
  gtk_widget_set_size_request (button45, 128, 69);

  vseparator3 = gtk_vseparator_new ();
  gtk_widget_show (vseparator3);
  gtk_fixed_put (GTK_FIXED (fixed7), vseparator3, 152, 0);
  gtk_widget_set_size_request (vseparator3, 16, 608);

  button47 = gtk_button_new_with_mnemonic (_("Offre of the day"));
  gtk_widget_show (button47);
  gtk_fixed_put (GTK_FIXED (fixed7), button47, 504, 24);
  gtk_widget_set_size_request (button47, 352, 53);

  label35 = gtk_label_new (_("name of the offre"));
  gtk_widget_show (label35);
  gtk_fixed_put (GTK_FIXED (fixed7), label35, 432, 104);
  gtk_widget_set_size_request (label35, 240, 40);

  label36 = gtk_label_new (_("deleted"));
  gtk_widget_show (label36);
  gtk_fixed_put (GTK_FIXED (fixed7), label36, 896, 104);
  gtk_widget_set_size_request (label36, 192, 41);

  checkbutton32 = gtk_check_button_new_with_mnemonic (_("checkbutton8"));
  gtk_widget_show (checkbutton32);
  gtk_fixed_put (GTK_FIXED (fixed7), checkbutton32, 984, 320);
  gtk_widget_set_size_request (checkbutton32, 24, 24);

  checkbutton29 = gtk_check_button_new_with_mnemonic (_("checkbutton5"));
  gtk_widget_show (checkbutton29);
  gtk_fixed_put (GTK_FIXED (fixed7), checkbutton29, 984, 168);
  gtk_widget_set_size_request (checkbutton29, 16, 24);

  checkbutton31 = gtk_check_button_new_with_mnemonic (_("checkbutton7"));
  gtk_widget_show (checkbutton31);
  gtk_fixed_put (GTK_FIXED (fixed7), checkbutton31, 984, 280);
  gtk_widget_set_size_request (checkbutton31, 24, 16);

  checkbutton30 = gtk_check_button_new_with_mnemonic (_("checkbutton6"));
  gtk_widget_show (checkbutton30);
  gtk_fixed_put (GTK_FIXED (fixed7), checkbutton30, 984, 224);
  gtk_widget_set_size_request (checkbutton30, 24, 16);

  button39 = gtk_button_new_with_mnemonic (_("saved"));
  gtk_widget_show (button39);
  gtk_fixed_put (GTK_FIXED (fixed7), button39, 640, 360);
  gtk_widget_set_size_request (button39, 64, 29);

  hseparator15 = gtk_hseparator_new ();
  gtk_widget_show (hseparator15);
  gtk_fixed_put (GTK_FIXED (fixed7), hseparator15, 160, 400);
  gtk_widget_set_size_request (hseparator15, 1016, 16);

  label43 = gtk_label_new (_("valid until"));
  gtk_widget_show (label43);
  gtk_fixed_put (GTK_FIXED (fixed7), label43, 200, 424);
  gtk_widget_set_size_request (label43, 160, 33);

  label44 = gtk_label_new (_("name of the offre"));
  gtk_widget_show (label44);
  gtk_fixed_put (GTK_FIXED (fixed7), label44, 504, 424);
  gtk_widget_set_size_request (label44, 176, 33);

  entry159 = gtk_entry_new ();
  gtk_widget_show (entry159);
  gtk_fixed_put (GTK_FIXED (fixed7), entry159, 184, 488);
  gtk_widget_set_size_request (entry159, 200, 35);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry159), 8226);

  entry160 = gtk_entry_new ();
  gtk_widget_show (entry160);
  gtk_fixed_put (GTK_FIXED (fixed7), entry160, 432, 464);
  gtk_widget_set_size_request (entry160, 352, 96);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry160), 8226);

  entry161 = gtk_entry_new ();
  gtk_widget_show (entry161);
  gtk_fixed_put (GTK_FIXED (fixed7), entry161, 880, 448);
  gtk_widget_set_size_request (entry161, 280, 136);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry161), 8226);

  button40 = gtk_button_new_with_mnemonic (_("saved"));
  gtk_widget_show (button40);
  gtk_fixed_put (GTK_FIXED (fixed7), button40, 568, 568);
  gtk_widget_set_size_request (button40, 74, 29);

  label45 = gtk_label_new (_("descriptions"));
  gtk_widget_show (label45);
  gtk_fixed_put (GTK_FIXED (fixed7), label45, 928, 416);
  gtk_widget_set_size_request (label45, 216, 33);

  hseparator3 = gtk_hseparator_new ();
  gtk_widget_show (hseparator3);
  gtk_fixed_put (GTK_FIXED (fixed7), hseparator3, 160, 80);
  gtk_widget_set_size_request (hseparator3, 1016, 24);

  logout1 = gtk_button_new_with_mnemonic (_("log out"));
  gtk_widget_show (logout1);
  gtk_fixed_put (GTK_FIXED (fixed7), logout1, 24, 24);
  gtk_widget_set_size_request (logout1, 64, 40);

  buttonHotels = gtk_button_new_with_mnemonic (_("Hotels"));
  gtk_widget_show (buttonHotels);
  gtk_fixed_put (GTK_FIXED (fixed7), buttonHotels, 176, 24);
  gtk_widget_set_size_request (buttonHotels, 328, 53);

  buttonLeasing = gtk_button_new_with_mnemonic (_("Leasing"));
  gtk_widget_show (buttonLeasing);
  gtk_fixed_put (GTK_FIXED (fixed7), buttonLeasing, 856, 24);
  gtk_widget_set_size_request (buttonLeasing, 288, 53);

  g_signal_connect ((gpointer) logout1, "clicked",
                    G_CALLBACK (on_logout1_clicked),
                    NULL);
  g_signal_connect ((gpointer) buttonHotels, "clicked",
                    G_CALLBACK (on_buttonHotels_clicked),
                    NULL);
  g_signal_connect ((gpointer) buttonLeasing, "clicked",
                    G_CALLBACK (on_buttonLeasing_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window_offre_of_the_days, window_offre_of_the_days, "window_offre_of_the_days");
  GLADE_HOOKUP_OBJECT (window_offre_of_the_days, fixed7, "fixed7");
  GLADE_HOOKUP_OBJECT (window_offre_of_the_days, fixed8, "fixed8");
  GLADE_HOOKUP_OBJECT (window_offre_of_the_days, fixed9, "fixed9");
  GLADE_HOOKUP_OBJECT (window_offre_of_the_days, entry36, "entry36");
  GLADE_HOOKUP_OBJECT (window_offre_of_the_days, entry37, "entry37");
  GLADE_HOOKUP_OBJECT (window_offre_of_the_days, entry38, "entry38");
  GLADE_HOOKUP_OBJECT (window_offre_of_the_days, entry39, "entry39");
  GLADE_HOOKUP_OBJECT (window_offre_of_the_days, button33, "button33");
  GLADE_HOOKUP_OBJECT (window_offre_of_the_days, button34, "button34");
  GLADE_HOOKUP_OBJECT (window_offre_of_the_days, button45, "button45");
  GLADE_HOOKUP_OBJECT (window_offre_of_the_days, vseparator3, "vseparator3");
  GLADE_HOOKUP_OBJECT (window_offre_of_the_days, button47, "button47");
  GLADE_HOOKUP_OBJECT (window_offre_of_the_days, label35, "label35");
  GLADE_HOOKUP_OBJECT (window_offre_of_the_days, label36, "label36");
  GLADE_HOOKUP_OBJECT (window_offre_of_the_days, checkbutton32, "checkbutton32");
  GLADE_HOOKUP_OBJECT (window_offre_of_the_days, checkbutton29, "checkbutton29");
  GLADE_HOOKUP_OBJECT (window_offre_of_the_days, checkbutton31, "checkbutton31");
  GLADE_HOOKUP_OBJECT (window_offre_of_the_days, checkbutton30, "checkbutton30");
  GLADE_HOOKUP_OBJECT (window_offre_of_the_days, button39, "button39");
  GLADE_HOOKUP_OBJECT (window_offre_of_the_days, hseparator15, "hseparator15");
  GLADE_HOOKUP_OBJECT (window_offre_of_the_days, label43, "label43");
  GLADE_HOOKUP_OBJECT (window_offre_of_the_days, label44, "label44");
  GLADE_HOOKUP_OBJECT (window_offre_of_the_days, entry159, "entry159");
  GLADE_HOOKUP_OBJECT (window_offre_of_the_days, entry160, "entry160");
  GLADE_HOOKUP_OBJECT (window_offre_of_the_days, entry161, "entry161");
  GLADE_HOOKUP_OBJECT (window_offre_of_the_days, button40, "button40");
  GLADE_HOOKUP_OBJECT (window_offre_of_the_days, label45, "label45");
  GLADE_HOOKUP_OBJECT (window_offre_of_the_days, hseparator3, "hseparator3");
  GLADE_HOOKUP_OBJECT (window_offre_of_the_days, logout1, "logout1");
  GLADE_HOOKUP_OBJECT (window_offre_of_the_days, buttonHotels, "buttonHotels");
  GLADE_HOOKUP_OBJECT (window_offre_of_the_days, buttonLeasing, "buttonLeasing");

  return window_offre_of_the_days;
}

GtkWidget*
create_window_name_of_leasing (void)
{
  GtkWidget *window_name_of_leasing;
  GtkWidget *fixed10;
  GtkWidget *fixed11;
  GtkWidget *fixed12;
  GtkWidget *entry55;
  GtkWidget *entry56;
  GtkWidget *entry57;
  GtkWidget *entry58;
  GtkWidget *entry60;
  GtkWidget *button49;
  GtkWidget *button50;
  GtkWidget *button61;
  GtkWidget *vseparator4;
  GtkWidget *button64;
  GtkWidget *checkbutton45;
  GtkWidget *label53;
  GtkWidget *checkbutton46;
  GtkWidget *checkbutton48;
  GtkWidget *checkbutton47;
  GtkWidget *button58;
  GtkWidget *label56;
  GtkWidget *entry162;
  GtkWidget *label55;
  GtkWidget *label57;
  GtkWidget *button59;
  GtkWidget *entry163;
  GtkWidget *hseparator16;
  GtkWidget *label54;
  GtkWidget *hseparator4;
  GtkWidget *logout2;
  GtkWidget *buttonhotels;
  GtkWidget *button_offree;

  window_name_of_leasing = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window_name_of_leasing), _("window_name_of_leasing"));

  fixed10 = gtk_fixed_new ();
  gtk_widget_show (fixed10);
  gtk_container_add (GTK_CONTAINER (window_name_of_leasing), fixed10);

  fixed11 = gtk_fixed_new ();
  gtk_widget_show (fixed11);
  gtk_fixed_put (GTK_FIXED (fixed10), fixed11, 248, 128);
  gtk_widget_set_size_request (fixed11, 109, 29);

  fixed12 = gtk_fixed_new ();
  gtk_widget_show (fixed12);
  gtk_fixed_put (GTK_FIXED (fixed11), fixed12, 0, 0);
  gtk_widget_set_size_request (fixed12, 0, 0);

  entry55 = gtk_entry_new ();
  gtk_widget_show (entry55);
  gtk_fixed_put (GTK_FIXED (fixed10), entry55, 328, 152);
  gtk_widget_set_size_request (entry55, 472, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry55), 8226);

  entry56 = gtk_entry_new ();
  gtk_widget_show (entry56);
  gtk_fixed_put (GTK_FIXED (fixed10), entry56, 328, 192);
  gtk_widget_set_size_request (entry56, 472, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry56), 8226);

  entry57 = gtk_entry_new ();
  gtk_widget_show (entry57);
  gtk_fixed_put (GTK_FIXED (fixed10), entry57, 328, 240);
  gtk_widget_set_size_request (entry57, 472, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry57), 8226);

  entry58 = gtk_entry_new ();
  gtk_widget_show (entry58);
  gtk_fixed_put (GTK_FIXED (fixed10), entry58, 328, 288);
  gtk_widget_set_size_request (entry58, 472, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry58), 8226);

  entry60 = gtk_entry_new ();
  gtk_widget_show (entry60);
  gtk_fixed_put (GTK_FIXED (fixed10), entry60, 160, 488);
  gtk_widget_set_size_request (entry60, 240, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry60), 8226);

  button49 = gtk_button_new_with_mnemonic (_("Editing Content"));
  gtk_widget_show (button49);
  gtk_fixed_put (GTK_FIXED (fixed10), button49, 24, 264);
  gtk_widget_set_size_request (button49, 128, 69);

  button50 = gtk_button_new_with_mnemonic (_("Costumer"));
  gtk_widget_show (button50);
  gtk_fixed_put (GTK_FIXED (fixed10), button50, 24, 400);
  gtk_widget_set_size_request (button50, 128, 69);

  button61 = gtk_button_new_with_mnemonic (_("Request"));
  gtk_widget_show (button61);
  gtk_fixed_put (GTK_FIXED (fixed10), button61, 24, 120);
  gtk_widget_set_size_request (button61, 128, 69);

  vseparator4 = gtk_vseparator_new ();
  gtk_widget_show (vseparator4);
  gtk_fixed_put (GTK_FIXED (fixed10), vseparator4, 152, 0);
  gtk_widget_set_size_request (vseparator4, 16, 608);

  button64 = gtk_button_new_with_mnemonic (_("Leasing"));
  gtk_widget_show (button64);
  gtk_fixed_put (GTK_FIXED (fixed10), button64, 856, 24);
  gtk_widget_set_size_request (button64, 320, 53);

  checkbutton45 = gtk_check_button_new_with_mnemonic (_("checkbutton9"));
  gtk_widget_show (checkbutton45);
  gtk_fixed_put (GTK_FIXED (fixed10), checkbutton45, 1008, 152);
  gtk_widget_set_size_request (checkbutton45, 24, 16);

  label53 = gtk_label_new (_("deleted"));
  gtk_widget_show (label53);
  gtk_fixed_put (GTK_FIXED (fixed10), label53, 952, 112);
  gtk_widget_set_size_request (label53, 128, 33);

  checkbutton46 = gtk_check_button_new_with_mnemonic (_("checkbutton10"));
  gtk_widget_show (checkbutton46);
  gtk_fixed_put (GTK_FIXED (fixed10), checkbutton46, 1008, 192);
  gtk_widget_set_size_request (checkbutton46, 24, 24);

  checkbutton48 = gtk_check_button_new_with_mnemonic (_("checkbutton12"));
  gtk_widget_show (checkbutton48);
  gtk_fixed_put (GTK_FIXED (fixed10), checkbutton48, 1008, 248);
  gtk_widget_set_size_request (checkbutton48, 24, 16);

  checkbutton47 = gtk_check_button_new_with_mnemonic (_("checkbutton11"));
  gtk_widget_show (checkbutton47);
  gtk_fixed_put (GTK_FIXED (fixed10), checkbutton47, 1008, 288);
  gtk_widget_set_size_request (checkbutton47, 16, 32);

  button58 = gtk_button_new_with_mnemonic (_("saved"));
  gtk_widget_show (button58);
  gtk_fixed_put (GTK_FIXED (fixed10), button58, 488, 328);
  gtk_widget_set_size_request (button58, 120, 32);

  label56 = gtk_label_new (_("name of the car"));
  gtk_widget_show (label56);
  gtk_fixed_put (GTK_FIXED (fixed10), label56, 224, 424);
  gtk_widget_set_size_request (label56, 104, 25);

  entry162 = gtk_entry_new ();
  gtk_widget_show (entry162);
  gtk_fixed_put (GTK_FIXED (fixed10), entry162, 456, 456);
  gtk_widget_set_size_request (entry162, 376, 120);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry162), 8226);

  label55 = gtk_label_new (_("prices"));
  gtk_widget_show (label55);
  gtk_fixed_put (GTK_FIXED (fixed10), label55, 968, 408);
  gtk_widget_set_size_request (label55, 136, 25);

  label57 = gtk_label_new (_("descriptions"));
  gtk_widget_show (label57);
  gtk_fixed_put (GTK_FIXED (fixed10), label57, 560, 416);
  gtk_widget_set_size_request (label57, 160, 25);

  button59 = gtk_button_new_with_mnemonic (_("saved"));
  gtk_widget_show (button59);
  gtk_fixed_put (GTK_FIXED (fixed10), button59, 632, 584);
  gtk_widget_set_size_request (button59, 74, 29);

  entry163 = gtk_entry_new ();
  gtk_widget_show (entry163);
  gtk_fixed_put (GTK_FIXED (fixed10), entry163, 992, 472);
  gtk_widget_set_size_request (entry163, 96, 80);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry163), 8226);

  hseparator16 = gtk_hseparator_new ();
  gtk_widget_show (hseparator16);
  gtk_fixed_put (GTK_FIXED (fixed10), hseparator16, 160, 376);
  gtk_widget_set_size_request (hseparator16, 1032, 16);

  label54 = gtk_label_new (_("name of leasing"));
  gtk_widget_show (label54);
  gtk_fixed_put (GTK_FIXED (fixed10), label54, 392, 96);
  gtk_widget_set_size_request (label54, 312, 48);

  hseparator4 = gtk_hseparator_new ();
  gtk_widget_show (hseparator4);
  gtk_fixed_put (GTK_FIXED (fixed10), hseparator4, 160, 80);
  gtk_widget_set_size_request (hseparator4, 1032, 16);

  logout2 = gtk_button_new_with_mnemonic (_("log out"));
  gtk_widget_show (logout2);
  gtk_fixed_put (GTK_FIXED (fixed10), logout2, 24, 24);
  gtk_widget_set_size_request (logout2, 64, 40);

  buttonhotels = gtk_button_new_with_mnemonic (_("Hotels"));
  gtk_widget_show (buttonhotels);
  gtk_fixed_put (GTK_FIXED (fixed10), buttonhotels, 176, 24);
  gtk_widget_set_size_request (buttonhotels, 328, 53);

  button_offree = gtk_button_new_with_mnemonic (_("Offre of the day"));
  gtk_widget_show (button_offree);
  gtk_fixed_put (GTK_FIXED (fixed10), button_offree, 504, 24);
  gtk_widget_set_size_request (button_offree, 352, 53);

  g_signal_connect ((gpointer) logout2, "clicked",
                    G_CALLBACK (on_logout2_clicked),
                    NULL);
  g_signal_connect ((gpointer) buttonhotels, "clicked",
                    G_CALLBACK (on_buttonhotels_clicked),
                    NULL);
  g_signal_connect ((gpointer) button_offree, "clicked",
                    G_CALLBACK (on_button_offree_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window_name_of_leasing, window_name_of_leasing, "window_name_of_leasing");
  GLADE_HOOKUP_OBJECT (window_name_of_leasing, fixed10, "fixed10");
  GLADE_HOOKUP_OBJECT (window_name_of_leasing, fixed11, "fixed11");
  GLADE_HOOKUP_OBJECT (window_name_of_leasing, fixed12, "fixed12");
  GLADE_HOOKUP_OBJECT (window_name_of_leasing, entry55, "entry55");
  GLADE_HOOKUP_OBJECT (window_name_of_leasing, entry56, "entry56");
  GLADE_HOOKUP_OBJECT (window_name_of_leasing, entry57, "entry57");
  GLADE_HOOKUP_OBJECT (window_name_of_leasing, entry58, "entry58");
  GLADE_HOOKUP_OBJECT (window_name_of_leasing, entry60, "entry60");
  GLADE_HOOKUP_OBJECT (window_name_of_leasing, button49, "button49");
  GLADE_HOOKUP_OBJECT (window_name_of_leasing, button50, "button50");
  GLADE_HOOKUP_OBJECT (window_name_of_leasing, button61, "button61");
  GLADE_HOOKUP_OBJECT (window_name_of_leasing, vseparator4, "vseparator4");
  GLADE_HOOKUP_OBJECT (window_name_of_leasing, button64, "button64");
  GLADE_HOOKUP_OBJECT (window_name_of_leasing, checkbutton45, "checkbutton45");
  GLADE_HOOKUP_OBJECT (window_name_of_leasing, label53, "label53");
  GLADE_HOOKUP_OBJECT (window_name_of_leasing, checkbutton46, "checkbutton46");
  GLADE_HOOKUP_OBJECT (window_name_of_leasing, checkbutton48, "checkbutton48");
  GLADE_HOOKUP_OBJECT (window_name_of_leasing, checkbutton47, "checkbutton47");
  GLADE_HOOKUP_OBJECT (window_name_of_leasing, button58, "button58");
  GLADE_HOOKUP_OBJECT (window_name_of_leasing, label56, "label56");
  GLADE_HOOKUP_OBJECT (window_name_of_leasing, entry162, "entry162");
  GLADE_HOOKUP_OBJECT (window_name_of_leasing, label55, "label55");
  GLADE_HOOKUP_OBJECT (window_name_of_leasing, label57, "label57");
  GLADE_HOOKUP_OBJECT (window_name_of_leasing, button59, "button59");
  GLADE_HOOKUP_OBJECT (window_name_of_leasing, entry163, "entry163");
  GLADE_HOOKUP_OBJECT (window_name_of_leasing, hseparator16, "hseparator16");
  GLADE_HOOKUP_OBJECT (window_name_of_leasing, label54, "label54");
  GLADE_HOOKUP_OBJECT (window_name_of_leasing, hseparator4, "hseparator4");
  GLADE_HOOKUP_OBJECT (window_name_of_leasing, logout2, "logout2");
  GLADE_HOOKUP_OBJECT (window_name_of_leasing, buttonhotels, "buttonhotels");
  GLADE_HOOKUP_OBJECT (window_name_of_leasing, button_offree, "button_offree");

  return window_name_of_leasing;
}

