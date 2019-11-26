#include <gtk/gtk.h>


void on_Logout_clicked (GtkWidget     *objet_graphique,      gpointer user_data);

void on_Home_clicked(GtkWidget     *objet_graphique,      gpointer user_data);

void on_Claims_clicked (GtkWidget     *objet_graphique,      gpointer user_data);

void
on_PromotionalCode_clicked             (GtkButton       *button,
                                        gpointer         user_data);

void on_Statistical_clicked (GtkWidget     *objet_graphique,      gpointer user_data);

void on_AddMembers_clicked(GtkWidget     *objet_graphique,      gpointer user_data);

void on_DeleteMembers_clicked(GtkWidget     *objet_graphique,      gpointer user_data);

void
on_Settings_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_ClaimsDone_clicked                  (GtkButton       *button,
                                        gpointer         user_data);

void
on_ClaimsDelete_clicked                (GtkButton       *button,
                                        gpointer         user_data);

void
on_ClaimsAnswer_clicked                (GtkButton       *button,
                                        gpointer         user_data);

void
on_ClaimsAnswerSend_clicked            (GtkButton       *button,
                                        gpointer         user_data);

void on_AddMembersAdd_clicked (GtkWidget     *objet_graphique,      gpointer user_data);

void on_AddMembersUploadCV_clicked (GtkWidget     *objet_graphique,      gpointer user_data);

void
on_DeleteMembersDesactivate_clicked    (GtkButton       *button,
                                        gpointer         user_data);

void
on_AddMembersUploadCancel_clicked      (GtkButton       *button,
                                        gpointer         user_data);

void
on_AddMembersUploadOpen_clicked        (GtkButton       *button,
                                        gpointer         user_data);

void
on_DeleteMembersActivate_clicked       (GtkButton       *button,
                                        gpointer         user_data);
