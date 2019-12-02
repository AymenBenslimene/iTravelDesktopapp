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
  GtkWidget *label2;
  GtkWidget *label3;
  GtkWidget *entryprenom;
  GtkWidget *entrynom;
  GtkWidget *entrycin;
  GtkWidget *label5;
  GtkWidget *label4;
  GtkWidget *entryadresse;
  GtkWidget *entrydatedenaissance;
  GtkWidget *label1;
  GtkWidget *buttonaddmember;
  GtkWidget *buttonshowmember;

  welcome = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (welcome), _("welcome"));

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (welcome), fixed1);

  label2 = gtk_label_new (_("nom"));
  gtk_widget_show (label2);
  gtk_fixed_put (GTK_FIXED (fixed1), label2, 24, 200);
  gtk_widget_set_size_request (label2, 104, 25);

  label3 = gtk_label_new (_("cin"));
  gtk_widget_show (label3);
  gtk_fixed_put (GTK_FIXED (fixed1), label3, 24, 264);
  gtk_widget_set_size_request (label3, 96, 41);

  entryprenom = gtk_entry_new ();
  gtk_widget_show (entryprenom);
  gtk_fixed_put (GTK_FIXED (fixed1), entryprenom, 128, 120);
  gtk_widget_set_size_request (entryprenom, 176, 35);
  gtk_entry_set_invisible_char (GTK_ENTRY (entryprenom), 8226);

  entrynom = gtk_entry_new ();
  gtk_widget_show (entrynom);
  gtk_fixed_put (GTK_FIXED (fixed1), entrynom, 128, 192);
  gtk_widget_set_size_request (entrynom, 176, 35);
  gtk_entry_set_invisible_char (GTK_ENTRY (entrynom), 8226);

  entrycin = gtk_entry_new ();
  gtk_widget_show (entrycin);
  gtk_fixed_put (GTK_FIXED (fixed1), entrycin, 128, 264);
  gtk_widget_set_size_request (entrycin, 176, 35);
  gtk_entry_set_invisible_char (GTK_ENTRY (entrycin), 8226);

  label5 = gtk_label_new (_("date-de-naissance"));
  gtk_widget_show (label5);
  gtk_fixed_put (GTK_FIXED (fixed1), label5, 336, 200);
  gtk_widget_set_size_request (label5, 216, 49);

  label4 = gtk_label_new (_("adresse"));
  gtk_widget_show (label4);
  gtk_fixed_put (GTK_FIXED (fixed1), label4, 352, 160);
  gtk_widget_set_size_request (label4, 112, 33);

  entryadresse = gtk_entry_new ();
  gtk_widget_show (entryadresse);
  gtk_fixed_put (GTK_FIXED (fixed1), entryadresse, 536, 152);
  gtk_widget_set_size_request (entryadresse, 168, 35);
  gtk_entry_set_invisible_char (GTK_ENTRY (entryadresse), 8226);

  entrydatedenaissance = gtk_entry_new ();
  gtk_widget_show (entrydatedenaissance);
  gtk_fixed_put (GTK_FIXED (fixed1), entrydatedenaissance, 536, 208);
  gtk_widget_set_size_request (entrydatedenaissance, 168, 35);
  gtk_entry_set_invisible_char (GTK_ENTRY (entrydatedenaissance), 8226);

  label1 = gtk_label_new (_("prenom"));
  gtk_widget_show (label1);
  gtk_fixed_put (GTK_FIXED (fixed1), label1, 24, 120);
  gtk_widget_set_size_request (label1, 112, 33);

  buttonaddmember = gtk_button_new_with_mnemonic (_("add"));
  gtk_widget_show (buttonaddmember);
  gtk_fixed_put (GTK_FIXED (fixed1), buttonaddmember, 104, 480);
  gtk_widget_set_size_request (buttonaddmember, 200, 45);

  buttonshowmember = gtk_button_new_with_mnemonic (_("show"));
  gtk_widget_show (buttonshowmember);
  gtk_fixed_put (GTK_FIXED (fixed1), buttonshowmember, 384, 480);
  gtk_widget_set_size_request (buttonshowmember, 216, 45);

  g_signal_connect ((gpointer) buttonaddmember, "clicked",
                    G_CALLBACK (on_buttonaddmember_clicked),
                    NULL);
  g_signal_connect ((gpointer) buttonshowmember, "clicked",
                    G_CALLBACK (on_buttonshowmember_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (welcome, welcome, "welcome");
  GLADE_HOOKUP_OBJECT (welcome, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (welcome, label2, "label2");
  GLADE_HOOKUP_OBJECT (welcome, label3, "label3");
  GLADE_HOOKUP_OBJECT (welcome, entryprenom, "entryprenom");
  GLADE_HOOKUP_OBJECT (welcome, entrynom, "entrynom");
  GLADE_HOOKUP_OBJECT (welcome, entrycin, "entrycin");
  GLADE_HOOKUP_OBJECT (welcome, label5, "label5");
  GLADE_HOOKUP_OBJECT (welcome, label4, "label4");
  GLADE_HOOKUP_OBJECT (welcome, entryadresse, "entryadresse");
  GLADE_HOOKUP_OBJECT (welcome, entrydatedenaissance, "entrydatedenaissance");
  GLADE_HOOKUP_OBJECT (welcome, label1, "label1");
  GLADE_HOOKUP_OBJECT (welcome, buttonaddmember, "buttonaddmember");
  GLADE_HOOKUP_OBJECT (welcome, buttonshowmember, "buttonshowmember");

  return welcome;
}

GtkWidget*
create_treeviewwindow (void)
{
  GtkWidget *treeviewwindow;
  GtkWidget *fixed2;
  GtkWidget *treeviewmember;
  GtkWidget *buttonreturn;

  treeviewwindow = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (treeviewwindow), _("treeviewwindow"));

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (treeviewwindow), fixed2);

  treeviewmember = gtk_tree_view_new ();
  gtk_widget_show (treeviewmember);
  gtk_fixed_put (GTK_FIXED (fixed2), treeviewmember, 136, 104);
  gtk_widget_set_size_request (treeviewmember, 456, 280);

  buttonreturn = gtk_button_new_with_mnemonic (_("Return"));
  gtk_widget_show (buttonreturn);
  gtk_fixed_put (GTK_FIXED (fixed2), buttonreturn, 472, 464);
  gtk_widget_set_size_request (buttonreturn, 168, 45);

  g_signal_connect ((gpointer) buttonreturn, "clicked",
                    G_CALLBACK (on_buttonreturn_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (treeviewwindow, treeviewwindow, "treeviewwindow");
  GLADE_HOOKUP_OBJECT (treeviewwindow, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (treeviewwindow, treeviewmember, "treeviewmember");
  GLADE_HOOKUP_OBJECT (treeviewwindow, buttonreturn, "buttonreturn");

  return treeviewwindow;
}
