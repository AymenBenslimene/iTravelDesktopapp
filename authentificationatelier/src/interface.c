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
create_authentification (void)
{
  GtkWidget *authentification;
  GtkWidget *fixed1;
  GtkWidget *userentry;
  GtkWidget *passwordentry;
  GtkWidget *Namelabel;
  GtkWidget *passwordlabel;
  GtkWidget *connectinterfacebutton;
  GtkWidget *addbutton;
  GtkWidget *erreurlabel;
  GtkWidget *buttonshowmembers;

  authentification = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (authentification), _("authentification"));

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (authentification), fixed1);

  userentry = gtk_entry_new ();
  gtk_widget_show (userentry);
  gtk_fixed_put (GTK_FIXED (fixed1), userentry, 144, 64);
  gtk_widget_set_size_request (userentry, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (userentry), 8226);

  passwordentry = gtk_entry_new ();
  gtk_widget_show (passwordentry);
  gtk_fixed_put (GTK_FIXED (fixed1), passwordentry, 144, 120);
  gtk_widget_set_size_request (passwordentry, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (passwordentry), 8226);

  Namelabel = gtk_label_new (_("User"));
  gtk_widget_show (Namelabel);
  gtk_fixed_put (GTK_FIXED (fixed1), Namelabel, 64, 72);
  gtk_widget_set_size_request (Namelabel, 41, 17);

  passwordlabel = gtk_label_new (_("password"));
  gtk_widget_show (passwordlabel);
  gtk_fixed_put (GTK_FIXED (fixed1), passwordlabel, 48, 128);
  gtk_widget_set_size_request (passwordlabel, 81, 16);

  connectinterfacebutton = gtk_button_new_with_mnemonic (_("connect"));
  gtk_widget_show (connectinterfacebutton);
  gtk_fixed_put (GTK_FIXED (fixed1), connectinterfacebutton, 192, 160);
  gtk_widget_set_size_request (connectinterfacebutton, 68, 29);

  addbutton = gtk_button_new_with_mnemonic (_("add memebers"));
  gtk_widget_show (addbutton);
  gtk_fixed_put (GTK_FIXED (fixed1), addbutton, 312, 168);
  gtk_widget_set_size_request (addbutton, 124, 24);

  erreurlabel = gtk_label_new ("");
  gtk_widget_show (erreurlabel);
  gtk_fixed_put (GTK_FIXED (fixed1), erreurlabel, 160, 208);
  gtk_widget_set_size_request (erreurlabel, 128, 16);

  buttonshowmembers = gtk_button_new_with_mnemonic (_("Show members"));
  gtk_widget_show (buttonshowmembers);
  gtk_fixed_put (GTK_FIXED (fixed1), buttonshowmembers, 320, 224);
  gtk_widget_set_size_request (buttonshowmembers, 112, 24);

  g_signal_connect ((gpointer) connectinterfacebutton, "clicked",
                    G_CALLBACK (on_connectinterfacebutton_clicked),
                    NULL);
  g_signal_connect ((gpointer) addbutton, "clicked",
                    G_CALLBACK (on_addbutton_clicked),
                    NULL);
  g_signal_connect ((gpointer) buttonshowmembers, "clicked",
                    G_CALLBACK (on_buttonshowmembers_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (authentification, authentification, "authentification");
  GLADE_HOOKUP_OBJECT (authentification, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (authentification, userentry, "userentry");
  GLADE_HOOKUP_OBJECT (authentification, passwordentry, "passwordentry");
  GLADE_HOOKUP_OBJECT (authentification, Namelabel, "Namelabel");
  GLADE_HOOKUP_OBJECT (authentification, passwordlabel, "passwordlabel");
  GLADE_HOOKUP_OBJECT (authentification, connectinterfacebutton, "connectinterfacebutton");
  GLADE_HOOKUP_OBJECT (authentification, addbutton, "addbutton");
  GLADE_HOOKUP_OBJECT (authentification, erreurlabel, "erreurlabel");
  GLADE_HOOKUP_OBJECT (authentification, buttonshowmembers, "buttonshowmembers");

  return authentification;
}

GtkWidget*
create_Welcome (void)
{
  GtkWidget *Welcome;
  GtkWidget *fixed2;
  GtkWidget *welcomelabel;

  Welcome = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (Welcome), _("Welcome"));

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (Welcome), fixed2);

  welcomelabel = gtk_label_new (_("welcome Sir"));
  gtk_widget_show (welcomelabel);
  gtk_fixed_put (GTK_FIXED (fixed2), welcomelabel, 144, 16);
  gtk_widget_set_size_request (welcomelabel, 232, 40);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (Welcome, Welcome, "Welcome");
  GLADE_HOOKUP_OBJECT (Welcome, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (Welcome, welcomelabel, "welcomelabel");

  return Welcome;
}

GtkWidget*
create_listwindow (void)
{
  GtkWidget *listwindow;
  GtkWidget *fixed3;
  GtkWidget *treeviewmembers;
  GtkWidget *returnbuttontoauthentification;

  listwindow = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (listwindow), _("members"));

  fixed3 = gtk_fixed_new ();
  gtk_widget_show (fixed3);
  gtk_container_add (GTK_CONTAINER (listwindow), fixed3);

  treeviewmembers = gtk_tree_view_new ();
  gtk_widget_show (treeviewmembers);
  gtk_fixed_put (GTK_FIXED (fixed3), treeviewmembers, 104, 48);
  gtk_widget_set_size_request (treeviewmembers, 312, 264);

  returnbuttontoauthentification = gtk_button_new_with_mnemonic (_("Return"));
  gtk_widget_show (returnbuttontoauthentification);
  gtk_fixed_put (GTK_FIXED (fixed3), returnbuttontoauthentification, 16, 24);
  gtk_widget_set_size_request (returnbuttontoauthentification, 68, 29);

  g_signal_connect ((gpointer) returnbuttontoauthentification, "clicked",
                    G_CALLBACK (on_returnbuttontoauthentification_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (listwindow, listwindow, "listwindow");
  GLADE_HOOKUP_OBJECT (listwindow, fixed3, "fixed3");
  GLADE_HOOKUP_OBJECT (listwindow, treeviewmembers, "treeviewmembers");
  GLADE_HOOKUP_OBJECT (listwindow, returnbuttontoauthentification, "returnbuttontoauthentification");

  return listwindow;
}

