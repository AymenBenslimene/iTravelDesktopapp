#include <gtk/gtk.h>


void on_Logout_clicked (GtkWidget     *objet_graphique,      gpointer user_data);

void on_Home_clicked(GtkWidget     *objet_graphique,      gpointer user_data);

void on_Claims_clicked (GtkWidget     *objet_graphique,      gpointer user_data);

void on_PromotionalCode_clicked (GtkWidget     *objet_graphique,      gpointer user_data);

void on_Statistical_clicked (GtkWidget     *objet_graphique,      gpointer user_data);

void on_AddMembers_clicked(GtkWidget     *objet_graphique,      gpointer user_data);

void on_DeleteMembers_clicked(GtkWidget     *objet_graphique,      gpointer user_data);

void on_Settings_clicked(GtkWidget     *objet_graphique,      gpointer user_data);

void
on_ClaimsDone_clicked                  (GtkButton       *button,
                                        gpointer         user_data);

void
on_ClaimsDelete_clicked                (GtkButton       *button,
                                        gpointer         user_data);

void on_ClaimsAnswer_clicked  (GtkWidget     *objet_graphique,      gpointer user_data);

void
on_ClaimsAnswerSend_clicked            (GtkButton       *button,
                                        gpointer         user_data);

void on_AddMembersAdd_clicked (GtkWidget     *objet_graphique,      gpointer user_data);

void on_AddMembersUploadCV_clicked (GtkWidget     *objet_graphique,      gpointer user_data);

void on_DeleteMembersDesactivate_clicked (GtkWidget     *objet_graphique,      gpointer user_data);

void on_AddMembersUploadCancel_clicked   (GtkWidget     *objet_graphique,      gpointer user_data);    

void on_AddMembersUploadOpen_clicked   (GtkWidget     *objet_graphique,      gpointer user_data);  

void on_DeleteMembersActivate_clicked (GtkWidget     *objet_graphique,      gpointer user_data);


void on_EspaceAdminHome_show (GtkWidget     *objet_graphique,      gpointer user_data);


void on_HomePasswordShow_clicked (GtkWidget     *objet_graphique,      gpointer user_data);


void on_PCGenerateCode_clicked (GtkWidget     *objet_graphique,      gpointer user_data);

void on_PCAdd_clicked  (GtkWidget     *objet_graphique,      gpointer user_data);

void on_PCSend_clicked (GtkWidget     *objet_graphique,      gpointer user_data);

void on_EspaceAdminPromotionalCode_show (GtkWidget     *objet_graphique,      gpointer user_data);

void on_EspaceAdminDeletemembersInfo_show (GtkWidget     *objet_graphique,      gpointer user_data);

void on_EspaceAdminStatistical_show  (GtkWidget     *objet_graphique,      gpointer user_data);

void
on_DeleteMembersShowCV_clicked         (GtkButton       *button,
                                        gpointer         user_data);

void on_PCDelete_clicked (GtkWidget     *objet_graphique,      gpointer user_data);

void on_DeleteMembersShow_clicked  (GtkWidget     *objet_graphique,      gpointer user_data);

void on_DeleteMembersApply_clicked (GtkWidget     *objet_graphique,      gpointer user_data);


void on_DeleteMembersChoose_changed  (GtkWidget     *objet_graphique,      gpointer user_data);



void on_SettingsApply_clicked (GtkWidget     *objet_graphique,      gpointer user_data);

void on_EspaceAdminSettings_show (GtkWidget     *objet_graphique,      gpointer user_data);

void on_SettingsShow_clicked (GtkWidget     *objet_graphique,      gpointer user_data);

void on_EspaceAdminClaims_show (GtkWidget     *objet_graphique,      gpointer user_data);
