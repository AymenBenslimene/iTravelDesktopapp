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
create_welcome (void)
{
  GtkWidget *welcome;
  GtkWidget *fixed1;
  GtkWidget *input2;
  GtkWidget *input3;
  GtkWidget *input4;
  GtkWidget *addmemberbutton;
  GtkWidget *labelmemberadd;
  GtkWidget *showmemberbutton;
  GtkWidget *input1;
  GtkWidget *input5;
  GtkWidget *label2;
  GtkWidget *label3;
  GtkWidget *label4;
  GtkWidget *label5;
  GtkWidget *label6;

  welcome = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (welcome), _("welcome"));

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (welcome), fixed1);

  input2 = gtk_entry_new ();
  gtk_widget_show (input2);
  gtk_fixed_put (GTK_FIXED (fixed1), input2, 88, 96);
  gtk_widget_set_size_request (input2, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (input2), 8226);

  input3 = gtk_entry_new ();
  gtk_widget_show (input3);
  gtk_fixed_put (GTK_FIXED (fixed1), input3, 88, 152);
  gtk_widget_set_size_request (input3, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (input3), 8226);

  input4 = gtk_entry_new ();
  gtk_widget_show (input4);
  gtk_fixed_put (GTK_FIXED (fixed1), input4, 328, 112);
  gtk_widget_set_size_request (input4, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (input4), 8226);

  addmemberbutton = gtk_button_new_with_mnemonic (_("add"));
  gtk_widget_show (addmemberbutton);
  gtk_fixed_put (GTK_FIXED (fixed1), addmemberbutton, 24, 312);
  gtk_widget_set_size_request (addmemberbutton, 68, 29);

  labelmemberadd = gtk_label_new ("");
  gtk_widget_show (labelmemberadd);
  gtk_fixed_put (GTK_FIXED (fixed1), labelmemberadd, 8, 288);
  gtk_widget_set_size_request (labelmemberadd, 104, 16);

  showmemberbutton = gtk_button_new_with_mnemonic (_("show members"));
  gtk_widget_show (showmemberbutton);
  gtk_fixed_put (GTK_FIXED (fixed1), showmemberbutton, 344, 312);
  gtk_widget_set_size_request (showmemberbutton, 68, 29);

  input1 = gtk_entry_new ();
  gtk_widget_show (input1);
  gtk_fixed_put (GTK_FIXED (fixed1), input1, 88, 40);
  gtk_widget_set_size_request (input1, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (input1), 8226);

  input5 = gtk_entry_new ();
  gtk_widget_show (input5);
  gtk_fixed_put (GTK_FIXED (fixed1), input5, 328, 176);
  gtk_widget_set_size_request (input5, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (input5), 8226);

  label2 = gtk_label_new (_("prenom"));
  gtk_widget_show (label2);
  gtk_fixed_put (GTK_FIXED (fixed1), label2, 16, 40);
  gtk_widget_set_size_request (label2, 41, 17);

  label3 = gtk_label_new (_("nom"));
  gtk_widget_show (label3);
  gtk_fixed_put (GTK_FIXED (fixed1), label3, 8, 96);
  gtk_widget_set_size_request (label3, 41, 17);

  label4 = gtk_label_new (_("cin"));
  gtk_widget_show (label4);
  gtk_fixed_put (GTK_FIXED (fixed1), label4, 40, 160);
  gtk_widget_set_size_request (label4, 41, 17);

  label5 = gtk_label_new (_("adresse"));
  gtk_widget_show (label5);
  gtk_fixed_put (GTK_FIXED (fixed1), label5, 280, 120);
  gtk_widget_set_size_request (label5, 41, 17);

  label6 = gtk_label_new (_("date"));
  gtk_widget_show (label6);
  gtk_fixed_put (GTK_FIXED (fixed1), label6, 280, 184);
  gtk_widget_set_size_request (label6, 41, 17);

  g_signal_connect ((gpointer) addmemberbutton, "clicked",
                    G_CALLBACK (on_addmemberbutton_clicked),
                    NULL);
  g_signal_connect ((gpointer) showmemberbutton, "clicked",
                    G_CALLBACK (on_showmemberbutton_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (welcome, welcome, "welcome");
  GLADE_HOOKUP_OBJECT (welcome, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (welcome, input2, "input2");
  GLADE_HOOKUP_OBJECT (welcome, input3, "input3");
  GLADE_HOOKUP_OBJECT (welcome, input4, "input4");
  GLADE_HOOKUP_OBJECT (welcome, addmemberbutton, "addmemberbutton");
  GLADE_HOOKUP_OBJECT (welcome, labelmemberadd, "labelmemberadd");
  GLADE_HOOKUP_OBJECT (welcome, showmemberbutton, "showmemberbutton");
  GLADE_HOOKUP_OBJECT (welcome, input1, "input1");
  GLADE_HOOKUP_OBJECT (welcome, input5, "input5");
  GLADE_HOOKUP_OBJECT (welcome, label2, "label2");
  GLADE_HOOKUP_OBJECT (welcome, label3, "label3");
  GLADE_HOOKUP_OBJECT (welcome, label4, "label4");
  GLADE_HOOKUP_OBJECT (welcome, label5, "label5");
  GLADE_HOOKUP_OBJECT (welcome, label6, "label6");

  return welcome;
}

GtkWidget*
create_treeviewwindow (void)
{
  GtkWidget *treeviewwindow;
  GtkWidget *fixed2;
  GtkWidget *treeviewmember;
  GtkWidget *returnbutton;

  treeviewwindow = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (treeviewwindow), _("window3"));

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (treeviewwindow), fixed2);

  treeviewmember = gtk_tree_view_new ();
  gtk_widget_show (treeviewmember);
  gtk_fixed_put (GTK_FIXED (fixed2), treeviewmember, 32, 48);
  gtk_widget_set_size_request (treeviewmember, 376, 200);

  returnbutton = gtk_button_new_with_mnemonic (_("Return"));
  gtk_widget_show (returnbutton);
  gtk_fixed_put (GTK_FIXED (fixed2), returnbutton, 8, 16);
  gtk_widget_set_size_request (returnbutton, 68, 29);

  g_signal_connect ((gpointer) returnbutton, "clicked",
                    G_CALLBACK (on_returnbutton_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (treeviewwindow, treeviewwindow, "treeviewwindow");
  GLADE_HOOKUP_OBJECT (treeviewwindow, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (treeviewwindow, treeviewmember, "treeviewmember");
  GLADE_HOOKUP_OBJECT (treeviewwindow, returnbutton, "returnbutton");

  return treeviewwindow;
}

