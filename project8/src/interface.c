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
create_myWindow (void)
{
  GtkWidget *myWindow;
  GtkWidget *fixed1;
  GtkWidget *fixed2;
  GtkWidget *labelNom;
  GtkWidget *entryNom;
  GtkWidget *buttonHello;
  GtkWidget *labelHello;

  myWindow = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (myWindow), _("myFirstExempl"));

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (myWindow), fixed1);

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_fixed_put (GTK_FIXED (fixed1), fixed2, 176, 152);
  gtk_widget_set_size_request (fixed2, 50, 50);

  labelNom = gtk_label_new (_("votre nom est :"));
  gtk_widget_show (labelNom);
  gtk_fixed_put (GTK_FIXED (fixed1), labelNom, 40, 40);
  gtk_widget_set_size_request (labelNom, 112, 25);

  entryNom = gtk_entry_new ();
  gtk_widget_show (entryNom);
  gtk_fixed_put (GTK_FIXED (fixed1), entryNom, 152, 32);
  gtk_widget_set_size_request (entryNom, 384, 43);
  gtk_entry_set_invisible_char (GTK_ENTRY (entryNom), 8226);

  buttonHello = gtk_button_new_with_mnemonic (_("say Hello !"));
  gtk_widget_show (buttonHello);
  gtk_fixed_put (GTK_FIXED (fixed1), buttonHello, 240, 136);
  gtk_widget_set_size_request (buttonHello, 90, 45);

  labelHello = gtk_label_new (_("Hello !"));
  gtk_widget_show (labelHello);
  gtk_fixed_put (GTK_FIXED (fixed1), labelHello, 192, 224);
  gtk_widget_set_size_request (labelHello, 176, 49);

  g_signal_connect ((gpointer) buttonHello, "clicked",
                    G_CALLBACK (on_buttonHello_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (myWindow, myWindow, "myWindow");
  GLADE_HOOKUP_OBJECT (myWindow, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (myWindow, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (myWindow, labelNom, "labelNom");
  GLADE_HOOKUP_OBJECT (myWindow, entryNom, "entryNom");
  GLADE_HOOKUP_OBJECT (myWindow, buttonHello, "buttonHello");
  GLADE_HOOKUP_OBJECT (myWindow, labelHello, "labelHello");

  return myWindow;
}

