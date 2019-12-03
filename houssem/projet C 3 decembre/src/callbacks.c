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
	GtkWidget *WinHome,*WinClaims,*WinStatistical,*WinAddMembers,*WinDeleteMembers,*WinPromotionalCode;
	WinHome = lookup_widget(objet_graphique, "EspaceAdminHome");
	WinClaims = lookup_widget(objet_graphique, "EspaceAdminClaims");
	WinStatistical = lookup_widget(objet_graphique, "EspaceAdminStatistical");
	WinAddMembers = lookup_widget(objet_graphique, "EspaceAdminAddmemberInfo");
	WinDeleteMembers = lookup_widget(objet_graphique, "EspaceAdminDeletemembersInfo");
	WinPromotionalCode = lookup_widget(objet_graphique, "EspaceAdminPromotionalCode");
	// not yet created : WinSettings = lookup_widget(objet_graphique, "EspaceAdminSettings");
	gtk_widget_destroy(WinHome);
	gtk_widget_destroy(WinClaims);
	gtk_widget_destroy(WinStatistical);
	gtk_widget_destroy(WinAddMembers);
	gtk_widget_destroy(WinDeleteMembers);
	gtk_widget_destroy(WinPromotionalCode);
}



void on_Home_clicked(GtkWidget     *objet_graphique,      gpointer user_data)
{
	GtkWidget *WinHome,*WinClaims,*WinStatistical,*WinAddMembers,*WinDeleteMembers,*WinPromotionalCode;
	WinHome = lookup_widget(objet_graphique, "EspaceAdminHome");
	WinClaims = lookup_widget(objet_graphique, "EspaceAdminClaims");
	WinStatistical = lookup_widget(objet_graphique, "EspaceAdminStatistical");
	WinAddMembers = lookup_widget(objet_graphique, "EspaceAdminAddmemberInfo");
	WinDeleteMembers = lookup_widget(objet_graphique, "EspaceAdminDeletemembersInfo");
	WinPromotionalCode = lookup_widget(objet_graphique, "EspaceAdminPromotionalCode");
	// not yet created : WinSettings = lookup_widget(objet_graphique, "EspaceAdminSettings");
	gtk_widget_destroy(WinHome);
	gtk_widget_destroy(WinClaims);
	gtk_widget_destroy(WinStatistical);
	gtk_widget_destroy(WinAddMembers);
	gtk_widget_destroy(WinDeleteMembers);
	gtk_widget_destroy(WinPromotionalCode);
	WinHome = create_EspaceAdminHome();
	gtk_widget_show(WinHome);
	// no need to make the counting here, already coded in the show window singal.
}


void on_Claims_clicked (GtkWidget     *objet_graphique,      gpointer user_data)
{
	GtkWidget *WinHome,*WinClaims,*WinStatistical,*WinAddMembers,*WinDeleteMembers,*WinPromotionalCode;
	WinHome = lookup_widget(objet_graphique, "EspaceAdminHome");
	WinClaims = lookup_widget(objet_graphique, "EspaceAdminClaims");
	WinStatistical = lookup_widget(objet_graphique, "EspaceAdminStatistical");
	WinAddMembers = lookup_widget(objet_graphique, "EspaceAdminAddmemberInfo");
	WinDeleteMembers = lookup_widget(objet_graphique, "EspaceAdminDeletemembersInfo");
	WinPromotionalCode = lookup_widget(objet_graphique, "EspaceAdminPromotionalCode");
	// not yet created : WinSettings = lookup_widget(objet_graphique, "EspaceAdminSettings");
	gtk_widget_destroy(WinHome);
	gtk_widget_destroy(WinClaims);
	gtk_widget_destroy(WinStatistical);
	gtk_widget_destroy(WinAddMembers);
	gtk_widget_destroy(WinDeleteMembers);
	gtk_widget_destroy(WinPromotionalCode);
	WinClaims = create_EspaceAdminClaims();
	gtk_widget_show(WinClaims);
}



void on_PromotionalCode_clicked (GtkWidget     *objet_graphique,      gpointer user_data)
{
	GtkWidget *WinHome,*WinClaims,*WinStatistical,*WinAddMembers,*WinDeleteMembers,*WinPromotionalCode;
	WinHome = lookup_widget(objet_graphique, "EspaceAdminHome");
	WinClaims = lookup_widget(objet_graphique, "EspaceAdminClaims");
	WinStatistical = lookup_widget(objet_graphique, "EspaceAdminStatistical");
	WinAddMembers = lookup_widget(objet_graphique, "EspaceAdminAddmemberInfo");
	WinDeleteMembers = lookup_widget(objet_graphique, "EspaceAdminDeletemembersInfo");
	WinPromotionalCode = lookup_widget(objet_graphique, "EspaceAdminPromotionalCode");
	// not yet created : WinSettings = lookup_widget(objet_graphique, "EspaceAdminSettings");
	gtk_widget_destroy(WinPromotionalCode);	
	gtk_widget_destroy(WinHome);
	gtk_widget_destroy(WinClaims);
	gtk_widget_destroy(WinStatistical);
	gtk_widget_destroy(WinAddMembers);
	gtk_widget_destroy(WinDeleteMembers);
	WinPromotionalCode = create_EspaceAdminPromotionalCode();
	gtk_widget_show(WinPromotionalCode);
}


void on_Statistical_clicked (GtkWidget     *objet_graphique,      gpointer user_data)
{
	GtkWidget *WinHome,*WinClaims,*WinStatistical,*WinAddMembers,*WinDeleteMembers,*WinPromotionalCode;
	WinHome = lookup_widget(objet_graphique, "EspaceAdminHome");
	WinClaims = lookup_widget(objet_graphique, "EspaceAdminClaims");
	WinStatistical = lookup_widget(objet_graphique, "EspaceAdminStatistical");
	WinAddMembers = lookup_widget(objet_graphique, "EspaceAdminAddmemberInfo");
	WinDeleteMembers = lookup_widget(objet_graphique, "EspaceAdminDeletemembersInfo");
	WinPromotionalCode = lookup_widget(objet_graphique, "EspaceAdminPromotionalCode");
	// not yet created : WinSettings = lookup_widget(objet_graphique, "EspaceAdminSettings");
	gtk_widget_destroy(WinHome);
	gtk_widget_destroy(WinClaims);
	gtk_widget_destroy(WinStatistical);
	gtk_widget_destroy(WinAddMembers);
	gtk_widget_destroy(WinDeleteMembers);
	gtk_widget_destroy(WinPromotionalCode);
	WinStatistical = create_EspaceAdminStatistical();
	gtk_widget_show(WinStatistical);
}


void on_AddMembers_clicked(GtkWidget     *objet_graphique,      gpointer user_data)
{
	GtkWidget *WinHome,*WinClaims,*WinStatistical,*WinAddMembers,*WinDeleteMembers,*WinPromotionalCode,*WinUploadCV;
	WinHome = lookup_widget(objet_graphique, "EspaceAdminHome");
	WinClaims = lookup_widget(objet_graphique, "EspaceAdminClaims");
	WinStatistical = lookup_widget(objet_graphique, "EspaceAdminStatistical");
	WinAddMembers = lookup_widget(objet_graphique, "EspaceAdminAddmemberInfo");
	WinDeleteMembers = lookup_widget(objet_graphique, "EspaceAdminDeletemembersInfo");
	WinPromotionalCode = lookup_widget(objet_graphique, "EspaceAdminPromotionalCode");
	WinUploadCV = lookup_widget(objet_graphique, "windowuploadcv"); // destory upload cv window so it wont recreate everytime.
	// not yet created : WinSettings = lookup_widget(objet_graphique, "EspaceAdminSettings");
	gtk_widget_destroy(WinAddMembers);
	gtk_widget_destroy(WinUploadCV);
	gtk_widget_destroy(WinHome);
	gtk_widget_destroy(WinClaims);
	gtk_widget_destroy(WinStatistical);
	gtk_widget_destroy(WinDeleteMembers);
	gtk_widget_destroy(WinPromotionalCode);	
	WinAddMembers = create_EspaceAdminAddmemberInfo();
	gtk_widget_show(WinAddMembers);
}



void on_DeleteMembers_clicked(GtkWidget     *objet_graphique,      gpointer user_data)
{
	GtkWidget *WinHome,*WinClaims,*WinStatistical,*WinAddMembers,*WinDeleteMembers,*WinPromotionalCode;
	WinHome = lookup_widget(objet_graphique, "EspaceAdminHome");
	WinClaims = lookup_widget(objet_graphique, "EspaceAdminClaims");
	WinStatistical = lookup_widget(objet_graphique, "EspaceAdminStatistical");
	WinAddMembers = lookup_widget(objet_graphique, "EspaceAdminAddmemberInfo");
	WinDeleteMembers = lookup_widget(objet_graphique, "EspaceAdminDeletemembersInfo");
	WinPromotionalCode = lookup_widget(objet_graphique, "EspaceAdminPromotionalCode");
	// not yet created : WinSettings = lookup_widget(objet_graphique, "EspaceAdminSettings");
	gtk_widget_destroy(WinHome);
	gtk_widget_destroy(WinClaims);
	gtk_widget_destroy(WinStatistical);
	gtk_widget_destroy(WinAddMembers);
	gtk_widget_destroy(WinDeleteMembers);
	gtk_widget_destroy(WinPromotionalCode);
	WinDeleteMembers = create_EspaceAdminDeletemembersInfo();
	gtk_widget_show(WinDeleteMembers);
	
	/* GtkWidget *selectagent;
	selectagent = lookup_widget(objet_graphique, "DeleteMembersChoose");
	char list[50][10];
	int n;
	n = mails(list);
	for(int i=0;i<n;i++)
	{
		gtk_combo_box_append_text(GTK_COMBO_BOX(selectagent),_(list[i]));
	} */
	
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
	m.status = 1; // account activated by default
	if(SamePassword(gtk_entry_get_text(GTK_ENTRY(password)),gtk_entry_get_text(GTK_ENTRY(cpassword))) && valid_email(gtk_entry_get_text(GTK_ENTRY(email)))==1) // add empty entry check
	{
		add_member(m);
		gtk_label_set_text(GTK_LABEL(PasswordCheck),"Added Successfully!");
	}
	else
	{	
		gtk_label_set_text(GTK_LABEL(PasswordCheck),"Adding failed.");
	}
	
}



void on_AddMembersUploadCV_clicked (GtkWidget     *objet_graphique,      gpointer user_data)
{
	GtkWidget *WinUpload;
	WinUpload = create_windowuploadcv();
	gtk_widget_show(WinUpload);
}



void on_DeleteMembersDesactivate_clicked (GtkWidget     *objet_graphique,      gpointer user_data)
{
	GtkWidget *selectagent;
	selectagent = lookup_widget(objet_graphique, "DeleteMembersChoose");
	MEMBER a;
	char email[50];
	strcpy(email,gtk_combo_box_get_active_text(GTK_COMBO_BOX(selectagent)));
	int linenumber = find_member_by_email(&a,email);
	char newlinetext[200];
	int desactivate = 0;
	sprintf(newlinetext,"%d %s %s %s %s %d/%d/%d %s %s %d\n",a.role, a.email, a.password, a.name, a.fname, a.bdate.day, a.bdate.month, a.bdate.year, a.phonenumber, a.nationalid, desactivate);
	replace_line_infile(linenumber, newlinetext, "members.txt");
	// change status info display:
	GtkWidget *status;
	status = lookup_widget(objet_graphique, "DeleteMembersStatus");
	gtk_label_set_text(GTK_LABEL(status),"Desactivated");
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



void on_DeleteMembersActivate_clicked (GtkWidget     *objet_graphique,      gpointer user_data)
{
	GtkWidget *selectagent;
	selectagent = lookup_widget(objet_graphique, "DeleteMembersChoose");
	MEMBER a;
	char email[50];
	strcpy(email,gtk_combo_box_get_active_text(GTK_COMBO_BOX(selectagent)));
	int linenumber = find_member_by_email(&a,email);
	char newlinetext[200];
	int activate = 1;
	sprintf(newlinetext,"%d %s %s %s %s %d/%d/%d %s %s %d\n",a.role, a.email, a.password, a.name, a.fname, a.bdate.day, a.bdate.month, a.bdate.year, a.phonenumber, a.nationalid, activate);
	replace_line_infile(linenumber, newlinetext, "members.txt");
	// change status info display:
	GtkWidget *status;
	status = lookup_widget(objet_graphique, "DeleteMembersStatus");
	gtk_label_set_text(GTK_LABEL(status),"Activated");
}



void on_EspaceAdminHome_show (GtkWidget     *objet_graphique,      gpointer user_data)
{
	// General info:
	GtkWidget *admincounter,*agentcounter,*totaltext; //*clientcounter
	admincounter = lookup_widget(objet_graphique, "HomeAdminsNumber");
	agentcounter = lookup_widget(objet_graphique, "HomeAgentsNumber");
	totaltext = lookup_widget(objet_graphique, "HomeTotalNumber");
	char nadmin[5],nagent[5],total[5];
	int sum=(count_members(3)+count_members(2));
	sprintf(nadmin,"%d",count_members(3));
	sprintf(nagent,"%d",count_members(2));
	sprintf(total,"%d",sum);
	gtk_label_set_text(GTK_LABEL(admincounter),nadmin);
	gtk_label_set_text(GTK_LABEL(agentcounter),nagent);
	gtk_label_set_text(GTK_LABEL(totaltext),total);
	// User Info:
	GtkWidget *fullname,*email,*phonenumber,*birthdate; //*password;
	fullname = lookup_widget(objet_graphique, "HomeConnectedAs");
	email = lookup_widget(objet_graphique, "HomeEmail");
	phonenumber = lookup_widget(objet_graphique, "HomePhoneNumber");
	birthdate = lookup_widget(objet_graphique, "HomeBirthDate");
	// password = lookup_widget(objet_graphique, "HomePassword");
	MEMBER a;
	int k;
	k=find_current_user(&a);
	char nom[100],str[50];
	strcpy(nom,a.name);
	strcat(nom," ");
	strcat(nom,a.fname);
	sprintf(str,"%d/%d/%d",a.bdate.day,a.bdate.month,a.bdate.year);
	gtk_label_set_text(GTK_LABEL(fullname),nom);
	gtk_label_set_text(GTK_LABEL(email),a.email);
	gtk_label_set_text(GTK_LABEL(phonenumber),a.phonenumber);
	gtk_label_set_text(GTK_LABEL(birthdate),str);
	// gtk_label_set_text(GTK_LABEL(password),a.password); on button show.
	
}


void on_HomePasswordShow_clicked (GtkWidget     *objet_graphique,      gpointer user_data)
{
	GtkWidget *password;
	MEMBER m;
	find_current_user(&m);
	password = lookup_widget(objet_graphique, "HomePassword");
	gtk_label_set_text(GTK_LABEL(password),m.password);
		
}



void on_PCGenerateCode_clicked (GtkWidget     *objet_graphique,      gpointer user_data)
{
	GtkWidget *codetext;
	codetext = lookup_widget(objet_graphique, "PCCode");
	char code[50];
	generate_promotionalcode(code);
	gtk_label_set_text(GTK_LABEL(codetext),code);
	
}



void on_PCAdd_clicked  (GtkWidget     *objet_graphique,      gpointer user_data)
{
	GtkWidget *generatedcode,*codetext,*codecheck,*selectcode;
	generatedcode = lookup_widget(objet_graphique, "PCCode");
	codetext = lookup_widget(objet_graphique, "PCCodeText");
	codecheck = lookup_widget(objet_graphique, "PCCodeCheck");
	selectcode = lookup_widget(objet_graphique, "PCChooseCode");
	char code[50];
	sprintf(code,"%s",gtk_label_get_text(GTK_LABEL(generatedcode)));
	if(IsCodeUnique(code)==0){
		add_code_to_database(code);
		gtk_combo_box_append_text(GTK_COMBO_BOX(selectcode),code); // append code into selectcode combobox.
		char text[300]="";
		display_text_from_file(text,"promotionalcodes.txt");
		gtk_label_set_text(GTK_LABEL(codetext),text);
		gtk_label_set_text(GTK_LABEL(generatedcode),"Code Added Successfully!");
	}
	else
	{
		gtk_label_set_text(GTK_LABEL(codecheck),"Code Already Exist!");
	}
}


void
on_PCSend_clicked                      (GtkButton       *button,
                                        gpointer         user_data)
{

}



void on_EspaceAdminPromotionalCode_show (GtkWidget     *objet_graphique,      gpointer user_data)
{
	// display codes in database
	GtkWidget *text;
	text = lookup_widget(objet_graphique, "PCCodeText");
	char str[300]="";
	display_text_from_file(str,"promotionalcodes.txt");
	gtk_label_set_text(GTK_LABEL(text),str);
	// append codes/clients in comboboxes
	GtkWidget *selectcode,*selectclient;
	selectcode = lookup_widget(objet_graphique, "PCChooseCode");
	selectclient = lookup_widget(objet_graphique, "PCChooseClient");
	char codes[50][50]; // clients[50][50];
	int n=get_promotionalcodes(codes); //r=get_members_mails(clients); get clients mails , same as for members, just diff struct format.	
	for(int i=0;i<n;i++)
	{
		gtk_combo_box_append_text(GTK_COMBO_BOX(selectcode),codes[i]);
		// gtk_combo_box_append_text(GTK_COMBO_BOX(selectagent),clients[i]);
	} 
	
	
}



void on_EspaceAdminDeletemembersInfo_show (GtkWidget     *objet_graphique,      gpointer user_data)
{
	// append emails in select member combobox
	GtkWidget *selectagent;
	selectagent = lookup_widget(objet_graphique, "DeleteMembersChoose");
	char list[50][50];
	int n;
	n = get_members_mails(list);
	for(int i=0;i<n;i++)
	{
		gtk_combo_box_append_text(GTK_COMBO_BOX(selectagent),list[i]);
	} 
	// append options in select option combobox
	GtkWidget *option;
	option = lookup_widget(objet_graphique, "DeleteMembersOption");
	gtk_combo_box_append_text(GTK_COMBO_BOX(option),"FullName");
	gtk_combo_box_append_text(GTK_COMBO_BOX(option),"BirthDate");
	gtk_combo_box_append_text(GTK_COMBO_BOX(option),"NationalID");
	gtk_combo_box_append_text(GTK_COMBO_BOX(option),"PhoneNumber");
	gtk_combo_box_append_text(GTK_COMBO_BOX(option),"Email");
	gtk_combo_box_append_text(GTK_COMBO_BOX(option),"Password");
	
}


void on_EspaceAdminStatistical_show  (GtkWidget     *objet_graphique,      gpointer user_data)
{
	GtkWidget *selectagent;
	selectagent = lookup_widget(objet_graphique, "StatisticalsAgent");
	char list[50][50];
	int n;
	n = get_members_mails(list);
	for(int i=0;i<n;i++)
	{
		gtk_combo_box_append_text(GTK_COMBO_BOX(selectagent),list[i]);
	} 
}


void
on_DeleteMembersShowCV_clicked         (GtkButton       *button,
                                        gpointer         user_data)
{

}


void on_PCDelete_clicked (GtkWidget     *objet_graphique,      gpointer user_data)
{
	// delete code from database
	GtkWidget *delete,*chosencode;
	chosencode = lookup_widget(objet_graphique, "PCChooseCode");
	delete = lookup_widget(objet_graphique, "PCDelete");
	char code[50][50];
	int n=get_promotionalcodes(code),line;
	for(int i=0;i<n;i++)
	{
		if(strcmp(gtk_combo_box_get_active_text(GTK_COMBO_BOX(chosencode)),code[i])==0)
		{
			line = ++i;
			break;
		}
	}
	delete_line_infile(line, "promotionalcodes.txt");
	//display codes in database
	GtkWidget *text;
	text = lookup_widget(objet_graphique, "PCCodeText");
	char str[300]="";
	display_text_from_file(str,"promotionalcodes.txt");
	gtk_label_set_text(GTK_LABEL(text),str);
	// reset interface -> removes code from comboboxes
	GtkWidget *WinHome,*WinClaims,*WinStatistical,*WinAddMembers,*WinDeleteMembers,*WinPromotionalCode;
	WinHome = lookup_widget(objet_graphique, "EspaceAdminHome");
	WinClaims = lookup_widget(objet_graphique, "EspaceAdminClaims");
	WinStatistical = lookup_widget(objet_graphique, "EspaceAdminStatistical");
	WinAddMembers = lookup_widget(objet_graphique, "EspaceAdminAddmemberInfo");
	WinDeleteMembers = lookup_widget(objet_graphique, "EspaceAdminDeletemembersInfo");
	WinPromotionalCode = lookup_widget(objet_graphique, "EspaceAdminPromotionalCode");
	// not yet created : WinSettings = lookup_widget(objet_graphique, "EspaceAdminSettings");
	gtk_widget_destroy(WinPromotionalCode);	
	gtk_widget_destroy(WinHome);
	gtk_widget_destroy(WinClaims);
	gtk_widget_destroy(WinStatistical);
	gtk_widget_destroy(WinAddMembers);
	gtk_widget_destroy(WinDeleteMembers);
	WinPromotionalCode = create_EspaceAdminPromotionalCode();
	gtk_widget_show(WinPromotionalCode);
}



void on_DeleteMembersShow_clicked (GtkWidget     *objet_graphique,      gpointer user_data)
{
	GtkWidget *password,*selectedmember;
	password = lookup_widget(objet_graphique, "DeleteMembersPassword");
	selectedmember = lookup_widget(objet_graphique, "DeleteMembersChoose");
	char memberemail[50];
	strcpy(memberemail,gtk_combo_box_get_active_text(GTK_COMBO_BOX(selectedmember)));
	MEMBER a;
	int n = find_member_by_email(&a,memberemail);
	gtk_label_set_text(GTK_LABEL(password),a.password);
	
}


void on_DeleteMembersApply_clicked (GtkWidget     *objet_graphique,      gpointer user_data)
{
	GtkWidget *member,*option,*new,*pass,*cpass;
	member = lookup_widget(objet_graphique, "DeleteMembersChoose");
	option = lookup_widget(objet_graphique, "DeleteMembersOption");
	new = lookup_widget(objet_graphique, "DeleteMembersNew");
	/*text1 = lookup_widget(objet_graphique , "DeleteMembersText1");
	text2 = lookup_widget(objet_graphique , "DeleteMembersText2");
	text3 = lookup_widget(objet_graphique , "DeleteMembersText3"); */
	pass = lookup_widget(objet_graphique, "DeleteMembersPassword");
	cpass = lookup_widget(objet_graphique, "DeleteMembersCPassword");
	MEMBER a;
	char email[50];
	strcpy(email, gtk_combo_box_get_active_text(GTK_COMBO_BOX(member)));
	int n = find_member_by_email(&a,email);
	char chosenoption[50];
	char str[100];
	char changed[100];
	int var,j=0,h=0;
	char name[50],fname[50],day[10],month[10],year[10];
	strcpy(changed,gtk_entry_get_text(GTK_ENTRY(new)));
	int len=strlen(changed);
	strcpy(chosenoption, gtk_combo_box_get_active_text(GTK_COMBO_BOX(option)));
	if(strcmp(chosenoption,"FullName")==0)
	{
		
/*		for(int i=0;i<len;i++)
		{
			name[i]=changed[i];
			if (changed[i]==" ")
			{
				var = ++i;
				break;
			}
		}
		for(int i=var;i<len;i++)
		{
			fname[j]=changed[i];
			++j;
		} */
		// care : add a space check for valid name
		sprintf(str,"%d %s %s %s %d/%d/%d %s %s %d\n",a.role, a.email, a.password, changed  , a.bdate.day, a.bdate.month, a.bdate.year, a.phonenumber, a.nationalid, a.status);
		replace_line_infile(n, str, "members.txt");
	}
	if(strcmp(chosenoption,"Password")==0)
	{
		sprintf(str,"%d %s %s %s %s %d/%d/%d %s %s %d\n",a.role, a.email, changed, a.name, a.fname, a.bdate.day, a.bdate.month, a.bdate.year, a.phonenumber, a.nationalid, a.status);
		replace_line_infile(n, str, "members.txt");
	}
	if(strcmp(chosenoption,"Email")==0)
	{
		sprintf(str,"%d %s %s %s %s %d/%d/%d %s %s %d\n",a.role, changed, a.password, a.name, a.fname, a.bdate.day, a.bdate.month, a.bdate.year, a.phonenumber, a.nationalid, a.status);
		replace_line_infile(n, str, "members.txt");
	}
	if(strcmp(chosenoption,"PhoneNumber")==0)
	{
		sprintf(str,"%d %s %s %s %s %d/%d/%d %s %s %d\n",a.role, a.email, a.password, a.name, a.fname, a.bdate.day, a.bdate.month, a.bdate.year, changed, a.nationalid, a.status);
		replace_line_infile(n, str, "members.txt");
	}
	if(strcmp(chosenoption,"NationalID")==0)
	{
		sprintf(str,"%d %s %s %s %s %d/%d/%d %s %s %d\n",a.role, a.email, a.password, a.name, a.fname, a.bdate.day, a.bdate.month, a.bdate.year, a.phonenumber, changed, a.status);
		replace_line_infile(n, str, "members.txt");
	}
	if(strcmp(chosenoption,"BirthDate")==0)
	{
		sprintf(str,"%d %s %s %s %s %s %s %s %d\n",a.role, a.email, a.password, a.name, a.fname, changed, a.phonenumber, a.nationalid, a.status);
		replace_line_infile(n, str, "members.txt");
	}
	// RESET
	GtkWidget *WinHome,*WinClaims,*WinStatistical,*WinAddMembers,*WinDeleteMembers,*WinPromotionalCode;
	WinHome = lookup_widget(objet_graphique, "EspaceAdminHome");
	WinClaims = lookup_widget(objet_graphique, "EspaceAdminClaims");
	WinStatistical = lookup_widget(objet_graphique, "EspaceAdminStatistical");
	WinAddMembers = lookup_widget(objet_graphique, "EspaceAdminAddmemberInfo");
	WinDeleteMembers = lookup_widget(objet_graphique, "EspaceAdminDeletemembersInfo");
	WinPromotionalCode = lookup_widget(objet_graphique, "EspaceAdminPromotionalCode");
	// not yet created : WinSettings = lookup_widget(objet_graphique, "EspaceAdminSettings");
	gtk_widget_destroy(WinHome);
	gtk_widget_destroy(WinClaims);
	gtk_widget_destroy(WinStatistical);
	gtk_widget_destroy(WinAddMembers);
	gtk_widget_destroy(WinDeleteMembers);
	gtk_widget_destroy(WinPromotionalCode);
	WinDeleteMembers = create_EspaceAdminDeletemembersInfo();
	gtk_widget_show(WinDeleteMembers);
	
	/* GtkWidget *selectagent;
	selectagent = lookup_widget(objet_graphique, "DeleteMembersChoose");
	char list[50][10];
	int n;
	n = mails(list);
	for(int i=0;i<n;i++)
	{
		gtk_combo_box_append_text(GTK_COMBO_BOX(selectagent),_(list[i]));
	} */
}



void on_DeleteMembersChoose_changed (GtkWidget     *objet_graphique,      gpointer user_data)
{
	// member selection
	GtkWidget *selectmember;
	selectmember = lookup_widget(objet_graphique, "DeleteMembersChoose");
	char memberemail[50];
	strcpy(memberemail, gtk_combo_box_get_active_text(GTK_COMBO_BOX(selectmember)));
	MEMBER a;
	int n = find_member_by_email(&a, memberemail);
	// member info display
	GtkWidget *name,*email,*phonenumber,*bdate,*nationalid,*status,*role;
	role = lookup_widget(objet_graphique, "DeleteMembersRole");
	name = lookup_widget(objet_graphique, "DeleteMembersName");
	email = lookup_widget(objet_graphique, "DeleteMembersEmail");
	phonenumber = lookup_widget(objet_graphique, "DeleteMembersPhoneNumber");
	bdate = lookup_widget(objet_graphique, "DeleteMembersBirthDate");
	nationalid = lookup_widget(objet_graphique, "DeleteMembersNationalID");
	status = lookup_widget(objet_graphique, "DeleteMembersStatus");
	char str[100];
	sprintf(str,"%s %s",a.name,a.fname);	
	gtk_label_set_text(GTK_LABEL(name),str);
	gtk_label_set_text(GTK_LABEL(email),a.email);
	gtk_label_set_text(GTK_LABEL(phonenumber),a.phonenumber);
	char dt[50];
	sprintf(dt,"%d/%d/%d", a.bdate.day, a.bdate.month, a.bdate.year);
	gtk_label_set_text(GTK_LABEL(bdate),dt);
	gtk_label_set_text(GTK_LABEL(nationalid),a.nationalid);
	char stat[50];
	if(a.status==1)
	{
		strcpy(stat,"Activated");
	}
	else
	{
		strcpy(stat, "Desactivated");
	}
	gtk_label_set_text(GTK_LABEL(status),stat);
	char rl[10];
	if(a.role==2){strcpy(rl,"Agent");}
	else{strcpy(rl,"Admin");}
	gtk_label_set_text(GTK_LABEL(role),rl);
	
	
}

