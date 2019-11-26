#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "tools.h"


void on_Logout_clicked (GtkWidget     *objet_graphique,      gpointer user_data)
{
	GtkWidget *WinHome,*WinClaims,*WinStatistical,*WinAddMembers,*WinDeleteMembers;
	WinHome = lookup_widget(objet_graphique, "EspaceAdminHome");
	WinClaims = lookup_widget(objet_graphique, "EspaceAdminClaims");
	WinStatistical = lookup_widget(objet_graphique, "EspaceAdminStatistical");
	WinAddMembers = lookup_widget(objet_graphique, "EspaceAdminAddmemberInfo");
	WinDeleteMembers = lookup_widget(objet_graphique, "EspaceAdminDeletemembersInfo");
	// not yet created : WinPromotionalCode = lookup_widget(objet_graphique, "EspaceAdminPromotionalCode");
	// not yet created : WinSettings = lookup_widget(objet_graphique, "EspaceAdminSettings");
	gtk_widget_destroy(WinHome);
	gtk_widget_destroy(WinClaims);
	gtk_widget_destroy(WinStatistical);
	gtk_widget_destroy(WinAddMembers);
	gtk_widget_destroy(WinDeleteMembers);
}



void on_Home_clicked(GtkWidget     *objet_graphique,      gpointer user_data)
{
	GtkWidget *WinHome,*WinClaims,*WinStatistical,*WinAddMembers,*WinDeleteMembers;
	WinHome = lookup_widget(objet_graphique, "EspaceAdminHome");
	WinClaims = lookup_widget(objet_graphique, "EspaceAdminClaims");
	WinStatistical = lookup_widget(objet_graphique, "EspaceAdminStatistical");
	WinAddMembers = lookup_widget(objet_graphique, "EspaceAdminAddmemberInfo");
	WinDeleteMembers = lookup_widget(objet_graphique, "EspaceAdminDeletemembersInfo");
	// not yet created : WinPromotionalCode = lookup_widget(objet_graphique, "EspaceAdminPromotionalCode");
	// not yet created : WinSettings = lookup_widget(objet_graphique, "EspaceAdminSettings");
	gtk_widget_destroy(WinHome);
	gtk_widget_destroy(WinClaims);
	gtk_widget_destroy(WinStatistical);
	gtk_widget_destroy(WinAddMembers);
	gtk_widget_destroy(WinDeleteMembers);
	WinHome = create_EspaceAdminHome();
	gtk_widget_show(WinHome);
}


void on_Claims_clicked (GtkWidget     *objet_graphique,      gpointer user_data)
{
	GtkWidget *WinHome,*WinClaims,*WinStatistical,*WinAddMembers,*WinDeleteMembers;
	WinHome = lookup_widget(objet_graphique, "EspaceAdminHome");
	WinClaims = lookup_widget(objet_graphique, "EspaceAdminClaims");
	WinStatistical = lookup_widget(objet_graphique, "EspaceAdminStatistical");
	WinAddMembers = lookup_widget(objet_graphique, "EspaceAdminAddmemberInfo");
	WinDeleteMembers = lookup_widget(objet_graphique, "EspaceAdminDeletemembersInfo");
	// not yet created : WinPromotionalCode = lookup_widget(objet_graphique, "EspaceAdminPromotionalCode");
	// not yet created : WinSettings = lookup_widget(objet_graphique, "EspaceAdminSettings");
	gtk_widget_destroy(WinHome);
	gtk_widget_destroy(WinClaims);
	gtk_widget_destroy(WinStatistical);
	gtk_widget_destroy(WinAddMembers);
	gtk_widget_destroy(WinDeleteMembers);
	WinClaims = create_EspaceAdminClaims();
	gtk_widget_show(WinClaims);
}


void
on_PromotionalCode_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{

}


void on_Statistical_clicked (GtkWidget     *objet_graphique,      gpointer user_data)
{
	GtkWidget *WinHome,*WinClaims,*WinStatistical,*WinAddMembers,*WinDeleteMembers;
	WinHome = lookup_widget(objet_graphique, "EspaceAdminHome");
	WinClaims = lookup_widget(objet_graphique, "EspaceAdminClaims");
	WinStatistical = lookup_widget(objet_graphique, "EspaceAdminStatistical");
	WinAddMembers = lookup_widget(objet_graphique, "EspaceAdminAddmemberInfo");
	WinDeleteMembers = lookup_widget(objet_graphique, "EspaceAdminDeletemembersInfo");
	// not yet created : WinPromotionalCode = lookup_widget(objet_graphique, "EspaceAdminPromotionalCode");
	// not yet created : WinSettings = lookup_widget(objet_graphique, "EspaceAdminSettings");
	gtk_widget_destroy(WinHome);
	gtk_widget_destroy(WinClaims);
	gtk_widget_destroy(WinStatistical);
	gtk_widget_destroy(WinAddMembers);
	gtk_widget_destroy(WinDeleteMembers);
	WinStatistical = create_EspaceAdminStatistical();
	gtk_widget_show(WinStatistical);
}


void on_AddMembers_clicked(GtkWidget     *objet_graphique,      gpointer user_data)
{
	GtkWidget *WinHome,*WinClaims,*WinStatistical,*WinAddMembers,*WinDeleteMembers;
	WinHome = lookup_widget(objet_graphique, "EspaceAdminHome");
	WinClaims = lookup_widget(objet_graphique, "EspaceAdminClaims");
	WinStatistical = lookup_widget(objet_graphique, "EspaceAdminStatistical");
	WinAddMembers = lookup_widget(objet_graphique, "EspaceAdminAddmemberInfo");
	WinDeleteMembers = lookup_widget(objet_graphique, "EspaceAdminDeletemembersInfo");
	// not yet created : WinPromotionalCode = lookup_widget(objet_graphique, "EspaceAdminPromotionalCode");
	// not yet created : WinSettings = lookup_widget(objet_graphique, "EspaceAdminSettings");
	gtk_widget_destroy(WinHome);
	gtk_widget_destroy(WinClaims);
	gtk_widget_destroy(WinStatistical);
	gtk_widget_destroy(WinDeleteMembers);
	gtk_widget_destroy(WinAddMembers);	
	WinAddMembers = create_EspaceAdminAddmemberInfo();
	gtk_widget_show(WinAddMembers);
}



void on_DeleteMembers_clicked(GtkWidget     *objet_graphique,      gpointer user_data)
{
	GtkWidget *WinHome,*WinClaims,*WinStatistical,*WinAddMembers,*WinDeleteMembers;
	WinHome = lookup_widget(objet_graphique, "EspaceAdminHome");
	WinClaims = lookup_widget(objet_graphique, "EspaceAdminClaims");
	WinStatistical = lookup_widget(objet_graphique, "EspaceAdminStatistical");
	WinAddMembers = lookup_widget(objet_graphique, "EspaceAdminAddmemberInfo");
	WinDeleteMembers = lookup_widget(objet_graphique, "EspaceAdminDeletemembersInfo");
	// not yet created : WinPromotionalCode = lookup_widget(objet_graphique, "EspaceAdminPromotionalCode");
	// not yet created : WinSettings = lookup_widget(objet_graphique, "EspaceAdminSettings");
	gtk_widget_destroy(WinHome);
	gtk_widget_destroy(WinClaims);
	gtk_widget_destroy(WinStatistical);
	gtk_widget_destroy(WinAddMembers);
	gtk_widget_destroy(WinDeleteMembers);
	WinDeleteMembers = create_EspaceAdminDeletemembersInfo();
	gtk_widget_show(WinDeleteMembers);
	
	GtkWidget *selectagent;
	selectagent = lookup_widget(objet_graphique, "DeleteMembersChoose");
	char list[50][10];
	int n;
	n = mails(list);
	for(int i=0;i<n;i++)
	{
		gtk_combo_box_append_text(GTK_COMBO_BOX(selectagent),_(list[i]));
	}
	
}


void
on_Settings_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_ClaimsDone_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_ClaimsDelete_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_ClaimsAnswer_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_ClaimsAnswerSend_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{

}


void on_AddMembersAdd_clicked (GtkWidget     *objet_graphique,      gpointer user_data)
{
	GtkWidget *role,*name,*fname,*email,*nationalid,*phonenumber,*password,*cpassword,*day,*month,*year,*PasswordCheck;
	PasswordCheck = lookup_widget(objet_graphique, "AddMembersWrongPassword");
	role = lookup_widget(objet_graphique, "AddMembersRole");
	name = lookup_widget(objet_graphique, "AddMembersName");
	fname = lookup_widget(objet_graphique, "AddMembersFName");
	day = lookup_widget(objet_graphique, "AddMembersBirthDay");
	month = lookup_widget(objet_graphique, "AddMembersBirthMonth");
	year = lookup_widget(objet_graphique, "AddMembersBirthYear");
	password = lookup_widget(objet_graphique, "AddMembersPassword");
	cpassword = lookup_widget(objet_graphique, "AddMembersCPassword");
	phonenumber = lookup_widget(objet_graphique, "AddMembersPhone");
	nationalid = lookup_widget(objet_graphique, "AddMembersNationalID");
	email = lookup_widget(objet_graphique, "AddMembersEmail");
	// add_member(MEMBER a);
	MEMBER m;
	if(strcmp(gtk_combo_box_get_active_text(GTK_COMBO_BOX(role)),"Admin")==0)
	{
		m.role=3;
	}
	else
	{
		m.role=2;
	}
	m.bdate.day = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(day));
	m.bdate.month = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(month));
	m.bdate.year = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(year));
	strcpy(m.name, gtk_entry_get_text(GTK_ENTRY(name)));
	strcpy(m.fname, gtk_entry_get_text(GTK_ENTRY(fname)));
	strcpy(m.password, gtk_entry_get_text(GTK_ENTRY(password)));
	strcpy(m.phonenumber, gtk_entry_get_text(GTK_ENTRY(phonenumber)));
	strcpy(m.nationalid, gtk_entry_get_text(GTK_ENTRY(nationalid)));
	strcpy(m.email, gtk_entry_get_text(GTK_ENTRY(email)));
	m.status = 1;
	if(SamePassword(gtk_entry_get_text(GTK_ENTRY(password)),gtk_entry_get_text(GTK_ENTRY(cpassword))))
	{
		add_member(m);
		gtk_label_set_text(GTK_LABEL(PasswordCheck),"Added Successfully!");
	}
	else
	{	
		gtk_label_set_text(GTK_LABEL(PasswordCheck),"Password Not Matched!");
	}
	
}



void on_AddMembersUploadCV_clicked (GtkWidget     *objet_graphique,      gpointer user_data)
{
	GtkWidget *WinUpload;
	WinUpload = create_windowuploadcv();
	gtk_widget_show(WinUpload);
}


void
on_DeleteMembersDesactivate_clicked    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_AddMembersUploadCancel_clicked      (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_AddMembersUploadOpen_clicked        (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_DeleteMembersActivate_clicked       (GtkButton       *button,
                                        gpointer         user_data)
{

}

