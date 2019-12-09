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
	GtkWidget *WinHome,*WinClaims,*WinStatistical,*WinAddMembers,*WinDeleteMembers,*WinPromotionalCode,*WinSettings;
	WinHome = lookup_widget(objet_graphique, "EspaceAdminHome");
	WinClaims = lookup_widget(objet_graphique, "EspaceAdminClaims");
	WinStatistical = lookup_widget(objet_graphique, "EspaceAdminStatistical");
	WinAddMembers = lookup_widget(objet_graphique, "EspaceAdminAddmemberInfo");
	WinDeleteMembers = lookup_widget(objet_graphique, "EspaceAdminDeletemembersInfo");
	WinPromotionalCode = lookup_widget(objet_graphique, "EspaceAdminPromotionalCode");
	WinSettings = lookup_widget(objet_graphique, "EspaceAdminSettings");
	gtk_widget_destroy(WinHome);
	gtk_widget_destroy(WinClaims);
	gtk_widget_destroy(WinStatistical);
	gtk_widget_destroy(WinSettings);
	gtk_widget_destroy(WinAddMembers);
	gtk_widget_destroy(WinDeleteMembers);
	gtk_widget_destroy(WinPromotionalCode);
}



void on_Home_clicked(GtkWidget     *objet_graphique,      gpointer user_data)
{
	GtkWidget *WinHome,*WinClaims,*WinStatistical,*WinAddMembers,*WinDeleteMembers,*WinPromotionalCode,*WinSettings;
	WinHome = lookup_widget(objet_graphique, "EspaceAdminHome");
	WinClaims = lookup_widget(objet_graphique, "EspaceAdminClaims");
	WinStatistical = lookup_widget(objet_graphique, "EspaceAdminStatistical");
	WinAddMembers = lookup_widget(objet_graphique, "EspaceAdminAddmemberInfo");
	WinDeleteMembers = lookup_widget(objet_graphique, "EspaceAdminDeletemembersInfo");
	WinPromotionalCode = lookup_widget(objet_graphique, "EspaceAdminPromotionalCode");
	WinSettings = lookup_widget(objet_graphique, "EspaceAdminSettings");
	gtk_widget_destroy(WinHome);
	gtk_widget_destroy(WinClaims);
	gtk_widget_destroy(WinStatistical);
	gtk_widget_destroy(WinSettings);
	gtk_widget_destroy(WinAddMembers);
	gtk_widget_destroy(WinDeleteMembers);
	gtk_widget_destroy(WinPromotionalCode);
	WinHome = create_EspaceAdminHome();
	gtk_widget_show(WinHome);
	// no need to make the counting here, already coded in the show window singal.
}


void on_Claims_clicked (GtkWidget     *objet_graphique,      gpointer user_data)
{
	GtkWidget *WinHome,*WinClaims,*WinStatistical,*WinAddMembers,*WinDeleteMembers,*WinPromotionalCode,*WinSettings;
	WinHome = lookup_widget(objet_graphique, "EspaceAdminHome");
	WinClaims = lookup_widget(objet_graphique, "EspaceAdminClaims");
	WinStatistical = lookup_widget(objet_graphique, "EspaceAdminStatistical");
	WinAddMembers = lookup_widget(objet_graphique, "EspaceAdminAddmemberInfo");
	WinDeleteMembers = lookup_widget(objet_graphique, "EspaceAdminDeletemembersInfo");
	WinPromotionalCode = lookup_widget(objet_graphique, "EspaceAdminPromotionalCode");
	WinSettings = lookup_widget(objet_graphique, "EspaceAdminSettings");
	gtk_widget_destroy(WinHome);
	gtk_widget_destroy(WinClaims);
	gtk_widget_destroy(WinStatistical);
	gtk_widget_destroy(WinAddMembers);
	gtk_widget_destroy(WinSettings);
	gtk_widget_destroy(WinDeleteMembers);
	gtk_widget_destroy(WinPromotionalCode);
	WinClaims = create_EspaceAdminClaims();
	gtk_widget_show(WinClaims);
}



void on_PromotionalCode_clicked (GtkWidget     *objet_graphique,      gpointer user_data)
{
	GtkWidget *WinHome,*WinClaims,*WinStatistical,*WinAddMembers,*WinDeleteMembers,*WinPromotionalCode,*WinSettings;
	WinHome = lookup_widget(objet_graphique, "EspaceAdminHome");
	WinClaims = lookup_widget(objet_graphique, "EspaceAdminClaims");
	WinStatistical = lookup_widget(objet_graphique, "EspaceAdminStatistical");
	WinAddMembers = lookup_widget(objet_graphique, "EspaceAdminAddmemberInfo");
	WinDeleteMembers = lookup_widget(objet_graphique, "EspaceAdminDeletemembersInfo");
	WinPromotionalCode = lookup_widget(objet_graphique, "EspaceAdminPromotionalCode");
	WinSettings = lookup_widget(objet_graphique, "EspaceAdminSettings");
	gtk_widget_destroy(WinPromotionalCode);	
	gtk_widget_destroy(WinHome);
	gtk_widget_destroy(WinClaims);
	gtk_widget_destroy(WinStatistical);
	gtk_widget_destroy(WinSettings);
	gtk_widget_destroy(WinAddMembers);
	gtk_widget_destroy(WinDeleteMembers);
	WinPromotionalCode = create_EspaceAdminPromotionalCode();
	gtk_widget_show(WinPromotionalCode);
}


void on_Statistical_clicked (GtkWidget     *objet_graphique,      gpointer user_data)
{
	GtkWidget *WinHome,*WinClaims,*WinStatistical,*WinAddMembers,*WinDeleteMembers,*WinPromotionalCode,*WinSettings;
	WinHome = lookup_widget(objet_graphique, "EspaceAdminHome");
	WinClaims = lookup_widget(objet_graphique, "EspaceAdminClaims");
	WinStatistical = lookup_widget(objet_graphique, "EspaceAdminStatistical");
	WinAddMembers = lookup_widget(objet_graphique, "EspaceAdminAddmemberInfo");
	WinDeleteMembers = lookup_widget(objet_graphique, "EspaceAdminDeletemembersInfo");
	WinPromotionalCode = lookup_widget(objet_graphique, "EspaceAdminPromotionalCode");
	WinSettings = lookup_widget(objet_graphique, "EspaceAdminSettings");
	gtk_widget_destroy(WinHome);
	gtk_widget_destroy(WinClaims);
	gtk_widget_destroy(WinStatistical);
	gtk_widget_destroy(WinAddMembers);
	gtk_widget_destroy(WinSettings);
	gtk_widget_destroy(WinDeleteMembers);
	gtk_widget_destroy(WinPromotionalCode);
	WinStatistical = create_EspaceAdminStatistical();
	gtk_widget_show(WinStatistical);
}


void on_AddMembers_clicked(GtkWidget     *objet_graphique,      gpointer user_data)
{
	GtkWidget *WinHome,*WinClaims,*WinStatistical,*WinAddMembers,*WinDeleteMembers,*WinPromotionalCode,*WinUploadCV,*WinSettings;
	WinHome = lookup_widget(objet_graphique, "EspaceAdminHome");
	WinClaims = lookup_widget(objet_graphique, "EspaceAdminClaims");
	WinStatistical = lookup_widget(objet_graphique, "EspaceAdminStatistical");
	WinAddMembers = lookup_widget(objet_graphique, "EspaceAdminAddmemberInfo");
	WinDeleteMembers = lookup_widget(objet_graphique, "EspaceAdminDeletemembersInfo");
	WinPromotionalCode = lookup_widget(objet_graphique, "EspaceAdminPromotionalCode");
	WinUploadCV = lookup_widget(objet_graphique, "windowuploadcv"); // destory upload cv window so it wont recreate everytime.
	WinSettings = lookup_widget(objet_graphique, "EspaceAdminSettings");
	gtk_widget_destroy(WinAddMembers);
	gtk_widget_destroy(WinUploadCV);
	gtk_widget_destroy(WinHome);
	gtk_widget_destroy(WinSettings);
	gtk_widget_destroy(WinClaims);
	gtk_widget_destroy(WinStatistical);
	gtk_widget_destroy(WinDeleteMembers);
	gtk_widget_destroy(WinPromotionalCode);		
	WinAddMembers = create_EspaceAdminAddmemberInfo();
	gtk_widget_show(WinAddMembers);
}



void on_DeleteMembers_clicked(GtkWidget     *objet_graphique,      gpointer user_data)
{
	GtkWidget *WinHome,*WinClaims,*WinStatistical,*WinAddMembers,*WinDeleteMembers,*WinPromotionalCode,*WinSettings;
	WinHome = lookup_widget(objet_graphique, "EspaceAdminHome");
	WinClaims = lookup_widget(objet_graphique, "EspaceAdminClaims");
	WinStatistical = lookup_widget(objet_graphique, "EspaceAdminStatistical");
	WinAddMembers = lookup_widget(objet_graphique, "EspaceAdminAddmemberInfo");
	WinDeleteMembers = lookup_widget(objet_graphique, "EspaceAdminDeletemembersInfo");
	WinPromotionalCode = lookup_widget(objet_graphique, "EspaceAdminPromotionalCode");
	WinSettings = lookup_widget(objet_graphique, "EspaceAdminSettings");
	gtk_widget_destroy(WinSettings);
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


void on_Settings_clicked (GtkWidget     *objet_graphique,      gpointer user_data)
{
	GtkWidget *WinHome,*WinClaims,*WinStatistical,*WinAddMembers,*WinDeleteMembers,*WinPromotionalCode,*WinSettings;
	WinHome = lookup_widget(objet_graphique, "EspaceAdminHome");
	WinClaims = lookup_widget(objet_graphique, "EspaceAdminClaims");
	WinStatistical = lookup_widget(objet_graphique, "EspaceAdminStatistical");
	WinAddMembers = lookup_widget(objet_graphique, "EspaceAdminAddmemberInfo");
	WinDeleteMembers = lookup_widget(objet_graphique, "EspaceAdminDeletemembersInfo");
	WinPromotionalCode = lookup_widget(objet_graphique, "EspaceAdminPromotionalCode");
	WinSettings = lookup_widget(objet_graphique, "EspaceAdminSettings");
	gtk_widget_destroy(WinHome);
	gtk_widget_destroy(WinClaims);
	gtk_widget_destroy(WinAddMembers);
	gtk_widget_destroy(WinStatistical);
	gtk_widget_destroy(WinDeleteMembers);
	gtk_widget_destroy(WinPromotionalCode);
	gtk_widget_destroy(WinSettings);
	WinSettings = create_EspaceAdminSettings();
	gtk_widget_show(WinSettings);
	
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


void on_ClaimsAnswer_clicked  (GtkWidget     *objet_graphique,      gpointer user_data)
{
	//msgsend
	GtkWidget *text,*claim;
	text = lookup_widget(objet_graphique, "ClaimsAnswerText");
	claim = lookup_widget(objet_graphique, "ClaimsChoose");
	char msg[100]="claim ";
	strcat(msg, gtk_entry_get_text(GTK_ENTRY(text))); // sans espace
	strcat(msg," 0 ");
	strcat(msg, gtk_combo_box_get_active_text(GTK_COMBO_BOX(claim)));
	send_msg(msg);
	// claim delete
	int k = find_line2("claims.txt", gtk_combo_box_get_active_text(GTK_COMBO_BOX(claim)));
	delete_line_infile(k,"claims.txt");
	// reset
	GtkWidget *WinHome,*WinClaims,*WinStatistical,*WinAddMembers,*WinDeleteMembers,*WinPromotionalCode,*WinSettings;
	WinHome = lookup_widget(objet_graphique, "EspaceAdminHome");
	WinClaims = lookup_widget(objet_graphique, "EspaceAdminClaims");
	WinStatistical = lookup_widget(objet_graphique, "EspaceAdminStatistical");
	WinAddMembers = lookup_widget(objet_graphique, "EspaceAdminAddmemberInfo");
	WinDeleteMembers = lookup_widget(objet_graphique, "EspaceAdminDeletemembersInfo");
	WinPromotionalCode = lookup_widget(objet_graphique, "EspaceAdminPromotionalCode");
	WinSettings = lookup_widget(objet_graphique, "EspaceAdminSettings");
	gtk_widget_destroy(WinHome);
	gtk_widget_destroy(WinClaims);
	gtk_widget_destroy(WinStatistical);
	gtk_widget_destroy(WinAddMembers);
	gtk_widget_destroy(WinSettings);
	gtk_widget_destroy(WinDeleteMembers);
	gtk_widget_destroy(WinPromotionalCode);
	WinClaims = create_EspaceAdminClaims();
	gtk_widget_show(WinClaims);
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
	int flag=0;
	char errortext[100]="";
	if(strcmp(m.password,"")==0 || strlen(m.password)<2)
	{
		flag=1;
		strcat(errortext,"Invalid password\n");
	}
	if(strcmp(gtk_entry_get_text(GTK_ENTRY(cpassword)),"")==0 || strcmp(m.password,gtk_entry_get_text(GTK_ENTRY(cpassword)))!=0)
	{
		flag=1;
		strcat(errortext,"Wrong password Repetition\n");
	}
	if(valid_email(m.email)!=1)
	{
		flag=1;
		strcat(errortext,"Invalid Email\n");
	}
	if(valid_nb(m.phonenumber,11)!=1 || strcmp(m.phonenumber,"")==0)
	{
		flag=1;
		strcat(errortext,"Invalid Phone Number\n");
	}
	if(valid_nb(m.nationalid,8)!=1 || strcmp(m.nationalid,"")==0)
	{
		flag=1;
		strcat(errortext,"Invalid National ID\n");
	}
	if(strcmp(m.name,"")==0 || strcmp(m.fname,"")==0 || strlen(m.name)<2 || strlen(m.fname)<2)
	{
		flag=1;
		strcat(errortext,"Invalid Name/FamilyName\n");
	}
	
	if(flag==1)
	{
		gtk_label_set_text(GTK_LABEL(PasswordCheck),errortext);
	}
	else
	{
		add_member(m);
		gtk_label_set_text(GTK_LABEL(PasswordCheck),"Added Successfully!");
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


void on_AddMembersUploadCancel_clicked   (GtkWidget     *objet_graphique,      gpointer user_data)  
{
	GtkWidget *upload;
	upload = lookup_widget(objet_graphique, "windowuploadcv");
	gtk_widget_destroy(upload);
}


void on_AddMembersUploadOpen_clicked  (GtkWidget     *objet_graphique,      gpointer user_data)
{
	GtkWidget *filechooser;
	filechooser = lookup_widget(objet_graphique, "windowuploadcv");
	char str[100];
	strcpy(str,gtk_file_chooser_get_uri(GTK_FILE_CHOOSER(filechooser)));
	//strcpy(url,g_file_get_uri(gtk_file_chooser_get_file(GTK_FILE_CHOOSER(filechooser))));
	int n = strlen(str),j=0;
	char url[n-7];
	for(int i = 7;i<n;i++)
	{
		url[j]=str[i];
		++j;
	}
	strcat(url,"\0");
	char command[100];
	sprintf(command, "cp %s cv", url); // linux command
	system(command);
	gtk_widget_destroy(filechooser);
	// show addmember window , choose url label , add url there(before destroymaybe)
	// on add clicked , take url from label , and add it to member.url
	// go to every fscanf & fprintf and add member.url
	// default url to 0
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
	sprintf(code,"%s NOTSENT 0\n",gtk_label_get_text(GTK_LABEL(generatedcode)));
	if(IsCodeUnique(code)==0 && strcmp(gtk_label_get_text(GTK_LABEL(generatedcode)),"Code Added Successfully!")!=0 && strcmp(gtk_label_get_text(GTK_LABEL(generatedcode)),"Invalid Code or Code Exist!")!=0 && strcmp(gtk_label_get_text(GTK_LABEL(generatedcode)),"**********")!=0){
		add_code_to_database(code);
		gtk_combo_box_append_text(GTK_COMBO_BOX(selectcode),code); // append code into selectcode combobox.
		char text[300]="";
		display_text_from_file(text,"promotionalcodes.txt");
		gtk_label_set_text(GTK_LABEL(codetext),text);
		gtk_label_set_text(GTK_LABEL(generatedcode),"Code Added Successfully!");
	}
	else
	{
		gtk_label_set_text(GTK_LABEL(codecheck),"Invalid Code or Code Exist!");
	}
}


void on_PCSend_clicked  (GtkWidget     *objet_graphique,      gpointer user_data)
{
	GtkWidget *client,*code,*msgtext;
	client = lookup_widget(objet_graphique, "PCChooseClient");
	code = lookup_widget(objet_graphique, "PCChooseCode");
	msgtext = lookup_widget(objet_graphique, "PCMessageText");
	char msg[300]="";
	strcat(msg,"code ");
	strcat(msg, gtk_entry_get_text(GTK_ENTRY(msgtext)));
	strcat(msg,"_");
	strcat(msg,gtk_combo_box_get_active_text(GTK_COMBO_BOX(code)));
	strcat(msg," 0 ");
	strcat(msg,gtk_combo_box_get_active_text(GTK_COMBO_BOX(client)));
	send_msg(msg);
	int n = find_line("promotionalcodes.txt", gtk_combo_box_get_active_text(GTK_COMBO_BOX(code)));
	char str[50];
	sprintf(str, "%s %s 0\n", gtk_combo_box_get_active_text(GTK_COMBO_BOX(code)), gtk_combo_box_get_active_text(GTK_COMBO_BOX(client)));
	replace_line_infile(n, str, "promotionalcodes.txt");
	// sent successfully
	GtkWidget *error;
	error = lookup_widget(objet_graphique, "PCError");
	gtk_label_set_text(GTK_LABEL(error),"Message Sent Successfully!");
	// reset
	GtkWidget *WinHome,*WinClaims,*WinStatistical,*WinAddMembers,*WinDeleteMembers,*WinPromotionalCode,*WinSettings;
	WinHome = lookup_widget(objet_graphique, "EspaceAdminHome");
	WinClaims = lookup_widget(objet_graphique, "EspaceAdminClaims");
	WinStatistical = lookup_widget(objet_graphique, "EspaceAdminStatistical");
	WinAddMembers = lookup_widget(objet_graphique, "EspaceAdminAddmemberInfo");
	WinDeleteMembers = lookup_widget(objet_graphique, "EspaceAdminDeletemembersInfo");
	WinPromotionalCode = lookup_widget(objet_graphique, "EspaceAdminPromotionalCode");
	WinSettings = lookup_widget(objet_graphique, "EspaceAdminSettings");
	gtk_widget_destroy(WinPromotionalCode);	
	gtk_widget_destroy(WinHome);
	gtk_widget_destroy(WinClaims);
	gtk_widget_destroy(WinStatistical);
	gtk_widget_destroy(WinSettings);
	gtk_widget_destroy(WinAddMembers);
	gtk_widget_destroy(WinDeleteMembers);
	WinPromotionalCode = create_EspaceAdminPromotionalCode();
	gtk_widget_show(WinPromotionalCode);

}



void on_EspaceAdminPromotionalCode_show (GtkWidget     *objet_graphique,      gpointer user_data)
{
	// display codes in database
	GtkWidget *text;
	text = lookup_widget(objet_graphique, "PCCodeText");
	char str[300]="";
	display_text_from_file(str,"promotionalcodes.txt");
	gtk_label_set_text(GTK_LABEL(text),str);
	// append codes in comboboxes
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
	// append client into combobox
	char clients[50][50];
	int k = get_clients_mail(clients);
	for(int i=0;i<k;i++)
	{
		gtk_combo_box_append_text(GTK_COMBO_BOX(selectclient),clients[i]);
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
	MEMBER a;
	int k = find_current_user(&a);
	for(int i=0;i<n;i++)
	{
		if(strcmp(list[i],a.email)!=0) //skip the current user email.
		{
			gtk_combo_box_append_text(GTK_COMBO_BOX(selectagent),list[i]);
		}	
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
	n = get_agents_mails(list);
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
	GtkWidget *WinHome,*WinClaims,*WinStatistical,*WinAddMembers,*WinDeleteMembers,*WinPromotionalCode,*WinSettings;
	WinHome = lookup_widget(objet_graphique, "EspaceAdminHome");
	WinClaims = lookup_widget(objet_graphique, "EspaceAdminClaims");
	WinStatistical = lookup_widget(objet_graphique, "EspaceAdminStatistical");
	WinAddMembers = lookup_widget(objet_graphique, "EspaceAdminAddmemberInfo");
	WinDeleteMembers = lookup_widget(objet_graphique, "EspaceAdminDeletemembersInfo");
	WinPromotionalCode = lookup_widget(objet_graphique, "EspaceAdminPromotionalCode");
	WinSettings = lookup_widget(objet_graphique, "EspaceAdminSettings");
	gtk_widget_destroy(WinPromotionalCode);	
	gtk_widget_destroy(WinHome);
	gtk_widget_destroy(WinClaims);
	gtk_widget_destroy(WinStatistical);
	gtk_widget_destroy(WinAddMembers);
	gtk_widget_destroy(WinSettings);
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
	GtkWidget *member,*option,*new,*pass,*cpass,*error;
	error = lookup_widget(objet_graphique, "DeleteMembersError");
	char errortext[100]="";
	int flag=0;
	member = lookup_widget(objet_graphique, "DeleteMembersChoose");
	option = lookup_widget(objet_graphique, "DeleteMembersOption");
	new = lookup_widget(objet_graphique, "DeleteMembersNew");
	/*text1 = lookup_widget(objet_graphique , "DeleteMembersText1");
	text2 = lookup_widget(objet_graphique , "DeleteMembersText2");
	text3 = lookup_widget(objet_graphique , "DeleteMembersText3"); */
	pass = lookup_widget(objet_graphique, "DeleteMemebersPassword");
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
	if(strcmp(gtk_entry_get_text(GTK_ENTRY(pass)),gtk_entry_get_text(GTK_ENTRY(cpass)))==0 && strcmp(gtk_entry_get_text(GTK_ENTRY(pass)),a.password)==0) // password repeat check and correct password check
	{
		if(strcmp(chosenoption,"FullName")==0)
		{
			if(valid_fullname(changed)==1)
			{
				sprintf(str,"%d %s %s %s %d/%d/%d %s %s %d\n",a.role, a.email, a.password, changed  , a.bdate.day, a.bdate.month, a.bdate.year, a.phonenumber, a.nationalid, a.status);
				replace_line_infile(n, str, "members.txt");
			}
			else
			{
				flag=1;
				strcat(errortext,"-Invalid new FullName\n");
			}
		}
		if(strcmp(chosenoption,"Password")==0)
		{
			if(valid_password(changed)==1)
			{
				sprintf(str,"%d %s %s %s %s %d/%d/%d %s %s %d\n",a.role, a.email, changed, a.name, a.fname, a.bdate.day, a.bdate.month, a.bdate.year, a.phonenumber, a.nationalid, a.status);
				replace_line_infile(n, str, "members.txt");
			}
			else
			{
				flag=1;
				strcat(errortext,"-Invalid new password\n");
			}
		}
		if(strcmp(chosenoption,"Email")==0)
		{
			if(valid_email(changed)==1)
			{
				sprintf(str,"%d %s %s %s %s %d/%d/%d %s %s %d\n",a.role, changed, a.password, a.name, a.fname, a.bdate.day, a.bdate.month, a.bdate.year, a.phonenumber, a.nationalid, a.status);
				replace_line_infile(n, str, "members.txt");
				replace_line_infile(1, changed, "currentuser.txt"); // replaces the current user email also.
			}
			else
			{
				flag=1;
				strcat(errortext,"-Invalid new email\n");
			}
		}
		if(strcmp(chosenoption,"PhoneNumber")==0)
		{
			if(valid_nb(changed,11)==1)
			{
				sprintf(str,"%d %s %s %s %s %d/%d/%d %s %s %d\n",a.role, a.email, a.password, a.name, a.fname, a.bdate.day, a.bdate.month, a.bdate.year, changed, a.nationalid, a.status);
				replace_line_infile(n, str, "members.txt");
			}
			else
			{
				flag=1;
				strcat(errortext,"-Invalid new phone number\n");
			}
		}
		if(strcmp(chosenoption,"NationalID")==0)
		{
			if(valid_nb(changed,8)==1)
			{
				sprintf(str,"%d %s %s %s %s %d/%d/%d %s %s %d\n",a.role, a.email, a.password, a.name, a.fname, a.bdate.day, a.bdate.month, a.bdate.year, a.phonenumber, changed, a.status);
				replace_line_infile(n, str, "members.txt");
			}
			else
			{
				flag=1;
				strcat(errortext,"-Invalid new national ID\n");
			}
		}
		if(strcmp(chosenoption,"BirthDate")==0)
		{
			if(valid_bdate(changed)==1)
			{
				sprintf(str,"%d %s %s %s %s %s %s %s %d\n",a.role, a.email, a.password, a.name, a.fname, changed, a.phonenumber, a.nationalid, a.status);
				replace_line_infile(n, str, "members.txt");
			}
			else
			{
				flag=1;
				strcat(errortext,"-Invalid new birth date\n");
			}
		}

	}
	else // password check.
	{
		flag=1;
		if(strcmp(gtk_entry_get_text(GTK_ENTRY(pass)),a.password)!=0){strcat(errortext,"-Wrong Password\n");}
		if(strcmp(gtk_entry_get_text(GTK_ENTRY(pass)),gtk_entry_get_text(GTK_ENTRY(cpass)))!=0){strcat(errortext,"-Wrong Password Repition\n");}
	}
	if(flag==1) // error display if an error exists
	{
		gtk_label_set_text(GTK_LABEL(error),errortext);	
	}
	else
	{
		// RESET
		GtkWidget *WinHome,*WinClaims,*WinStatistical,*WinAddMembers,*WinDeleteMembers,*WinPromotionalCode,*WinSettings;
		WinHome = lookup_widget(objet_graphique, "EspaceAdminHome");
		WinClaims = lookup_widget(objet_graphique, "EspaceAdminClaims");
		WinStatistical = lookup_widget(objet_graphique, "EspaceAdminStatistical");
		WinAddMembers = lookup_widget(objet_graphique, "EspaceAdminAddmemberInfo");
		WinDeleteMembers = lookup_widget(objet_graphique, "EspaceAdminDeletemembersInfo");
		WinPromotionalCode = lookup_widget(objet_graphique, "EspaceAdminPromotionalCode");
		WinSettings = lookup_widget(objet_graphique, "EspaceAdminSettings");
		gtk_widget_destroy(WinHome);
		gtk_widget_destroy(WinClaims);
		gtk_widget_destroy(WinStatistical);
		gtk_widget_destroy(WinSettings);
		gtk_widget_destroy(WinAddMembers);
		gtk_widget_destroy(WinDeleteMembers);
		gtk_widget_destroy(WinPromotionalCode);
		WinSettings = create_EspaceAdminSettings();
		gtk_widget_show(WinSettings);
	}
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
	GtkWidget *name,*email,*phonenumber,*bdate,*nationalid,*status,*role,*pass;
	role = lookup_widget(objet_graphique, "DeleteMembersRole");
	name = lookup_widget(objet_graphique, "DeleteMembersName");
	email = lookup_widget(objet_graphique, "DeleteMembersEmail");
	phonenumber = lookup_widget(objet_graphique, "DeleteMembersPhoneNumber");
	bdate = lookup_widget(objet_graphique, "DeleteMembersBirthDate");
	nationalid = lookup_widget(objet_graphique, "DeleteMembersNationalID");
	status = lookup_widget(objet_graphique, "DeleteMembersStatus");
	pass = lookup_widget(objet_graphique, "DeleteMembersPassword");
	gtk_label_set_text(GTK_LABEL(pass),"*******");
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






void on_SettingsApply_clicked (GtkWidget     *objet_graphique,      gpointer user_data)

{
	GtkWidget **option,*new,*pass,*cpass,*error;
	error = lookup_widget(objet_graphique, "SettingsError");
	char errortext[100]="";
	int flag=0;
	option = lookup_widget(objet_graphique, "SettingsChooseMod");
	new = lookup_widget(objet_graphique, "SettingsNewInfo");
	/*text1 = lookup_widget(objet_graphique , "DeleteMembersText1");
	text2 = lookup_widget(objet_graphique , "DeleteMembersText2");
	text3 = lookup_widget(objet_graphique , "DeleteMembersText3"); */
	pass = lookup_widget(objet_graphique, "SettingsPassword");
	cpass = lookup_widget(objet_graphique, "SettingsCPassword");
	MEMBER m;
	int k = find_current_user(&m);
	MEMBER a;
	int n = find_member_by_email(&a, m.email);
	char chosenoption[50];
	char str[100];
	char changed[100];
	int var,j=0,h=0;
	char name[50],fname[50],day[10],month[10],year[10];
	strcpy(changed,gtk_entry_get_text(GTK_ENTRY(new)));
	int len=strlen(changed);
	strcpy(chosenoption, gtk_combo_box_get_active_text(GTK_COMBO_BOX(option)));
	if(strcmp(gtk_entry_get_text(GTK_ENTRY(pass)),gtk_entry_get_text(GTK_ENTRY(cpass)))==0 && strcmp(gtk_entry_get_text(GTK_ENTRY(pass)),a.password)==0) // password repeat check and correct password check
	{
		if(strcmp(chosenoption,"FullName")==0)
		{
			if(valid_fullname(changed)==1)
			{
				sprintf(str,"%d %s %s %s %d/%d/%d %s %s %d\n",a.role, a.email, a.password, changed  , a.bdate.day, a.bdate.month, a.bdate.year, a.phonenumber, a.nationalid, a.status);
				replace_line_infile(n, str, "members.txt");
			}
			else
			{
				flag=1;
				strcat(errortext,"-Invalid new FullName\n");
			}
		}
		if(strcmp(chosenoption,"Password")==0)
		{
			if(valid_password(changed)==1)
			{
				sprintf(str,"%d %s %s %s %s %d/%d/%d %s %s %d\n",a.role, a.email, changed, a.name, a.fname, a.bdate.day, a.bdate.month, a.bdate.year, a.phonenumber, a.nationalid, a.status);
				replace_line_infile(n, str, "members.txt");
			}
			else
			{
				flag=1;
				strcat(errortext,"-Invalid new password\n");
			}
		}
		if(strcmp(chosenoption,"Email")==0)
		{
			if(valid_email(changed)==1)
			{
				sprintf(str,"%d %s %s %s %s %d/%d/%d %s %s %d\n",a.role, changed, a.password, a.name, a.fname, a.bdate.day, a.bdate.month, a.bdate.year, a.phonenumber, a.nationalid, a.status);
				replace_line_infile(n, str, "members.txt");
				replace_line_infile(1, changed, "currentuser.txt"); // replaces the current user email also.
			}
			else
			{
				flag=1;
				strcat(errortext,"-Invalid new email\n");
			}
		}
		if(strcmp(chosenoption,"PhoneNumber")==0)
		{
			if(valid_nb(changed,11)==1)
			{
				sprintf(str,"%d %s %s %s %s %d/%d/%d %s %s %d\n",a.role, a.email, a.password, a.name, a.fname, a.bdate.day, a.bdate.month, a.bdate.year, changed, a.nationalid, a.status);
				replace_line_infile(n, str, "members.txt");
			}
			else
			{
				flag=1;
				strcat(errortext,"-Invalid new phone number\n");
			}
		}
		if(strcmp(chosenoption,"NationalID")==0)
		{
			if(valid_nb(changed,8)==1)
			{
				sprintf(str,"%d %s %s %s %s %d/%d/%d %s %s %d\n",a.role, a.email, a.password, a.name, a.fname, a.bdate.day, a.bdate.month, a.bdate.year, a.phonenumber, changed, a.status);
				replace_line_infile(n, str, "members.txt");
			}
			else
			{
				flag=1;
				strcat(errortext,"-Invalid new national ID\n");
			}
		}
		if(strcmp(chosenoption,"BirthDate")==0)
		{
			if(valid_bdate(changed)==1)
			{
				sprintf(str,"%d %s %s %s %s %s %s %s %d\n",a.role, a.email, a.password, a.name, a.fname, changed, a.phonenumber, a.nationalid, a.status);
				replace_line_infile(n, str, "members.txt");
			}
			else
			{
				flag=1;
				strcat(errortext,"-Invalid new birth date\n");
			}
		}

	}
	else // password check.
	{
		flag=1;
		if(strcmp(gtk_entry_get_text(GTK_ENTRY(pass)),a.password)!=0){strcat(errortext,"-Wrong Password\n");}
		if(strcmp(gtk_entry_get_text(GTK_ENTRY(pass)),gtk_entry_get_text(GTK_ENTRY(cpass)))!=0){strcat(errortext,"-Wrong Password Repition\n");}
	}
	if(flag==1) // error display if an error exists
	{
		gtk_label_set_text(GTK_LABEL(error),errortext);	
	}
	else
	{
		// RESET
		GtkWidget *WinHome,*WinClaims,*WinStatistical,*WinAddMembers,*WinDeleteMembers,*WinPromotionalCode,*WinSettings;
		WinHome = lookup_widget(objet_graphique, "EspaceAdminHome");
		WinClaims = lookup_widget(objet_graphique, "EspaceAdminClaims");
		WinStatistical = lookup_widget(objet_graphique, "EspaceAdminStatistical");
		WinAddMembers = lookup_widget(objet_graphique, "EspaceAdminAddmemberInfo");
		WinDeleteMembers = lookup_widget(objet_graphique, "EspaceAdminDeletemembersInfo");
		WinPromotionalCode = lookup_widget(objet_graphique, "EspaceAdminPromotionalCode");
		WinSettings = lookup_widget(objet_graphique, "EspaceAdminSettings");
		gtk_widget_destroy(WinHome);
		gtk_widget_destroy(WinClaims);
		gtk_widget_destroy(WinStatistical);
		gtk_widget_destroy(WinSettings);
		gtk_widget_destroy(WinAddMembers);
		gtk_widget_destroy(WinDeleteMembers);
		gtk_widget_destroy(WinPromotionalCode);
		WinSettings = create_EspaceAdminSettings();
		gtk_widget_show(WinSettings);
	}
}


void on_EspaceAdminSettings_show (GtkWidget     *objet_graphique,      gpointer user_data)
{
	// current user selection
	MEMBER m;
	int k = find_current_user(&m);
	MEMBER a;
	int n = find_member_by_email(&a, m.email);
	// member info display
	GtkWidget *name,*email,*phonenumber,*bdate,*nationalid,*status,*role;
	role = lookup_widget(objet_graphique, "SettingsRole");
	name = lookup_widget(objet_graphique, "SettingsName");
	email = lookup_widget(objet_graphique, "SettingsEmail");
	phonenumber = lookup_widget(objet_graphique, "SettingsPhoneNumber");
	bdate = lookup_widget(objet_graphique, "SettingsBirthDate");
	nationalid = lookup_widget(objet_graphique, "SettingsNationalID");
	status = lookup_widget(objet_graphique, "SettingsStatus");
	// password is done in show button
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
	// append options in select option combobox
	GtkWidget *option;
	option = lookup_widget(objet_graphique, "SettingsChooseMod");
	gtk_combo_box_append_text(GTK_COMBO_BOX(option),"FullName");
	gtk_combo_box_append_text(GTK_COMBO_BOX(option),"BirthDate");
	gtk_combo_box_append_text(GTK_COMBO_BOX(option),"NationalID");
	gtk_combo_box_append_text(GTK_COMBO_BOX(option),"PhoneNumber");
	gtk_combo_box_append_text(GTK_COMBO_BOX(option),"Email");
	gtk_combo_box_append_text(GTK_COMBO_BOX(option),"Password");
}


void on_SettingsShow_clicked (GtkWidget     *objet_graphique,      gpointer user_data)
{
	GtkWidget *pass;
	pass=lookup_widget(objet_graphique, "SettingsPasswordText");
	MEMBER m;
	int k = find_current_user(&m);
	gtk_label_set_text(GTK_LABEL(pass),m.password);
}


void on_EspaceAdminClaims_show (GtkWidget     *objet_graphique,      gpointer user_data)
{
	// list
	void show_claimstree(GtkWidget *liste)
	{
		GtkCellRenderer *renderer;
		GtkTreeViewColumn *column;
		GtkTreeIter iter;
		GtkListStore *store;
		char name[50],servicetype[50],description[50],from[50];
		store = NULL;
		FILE *f;
		store = gtk_tree_view_get_model(liste);
		if(store==NULL)
		{
			renderer = gtk_cell_renderer_text_new();
			column = gtk_tree_view_column_new_with_attributes(" ServiceName", renderer, "text",SERVICENAME, NULL);
			gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
		
			renderer = gtk_cell_renderer_text_new();
			column = gtk_tree_view_column_new_with_attributes(" ServiceType", renderer, "text",SERVICETYPE, NULL);
			gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

			renderer = gtk_cell_renderer_text_new();
			column = gtk_tree_view_column_new_with_attributes(" Description", renderer, "text",DESCRIPTION, NULL);
			gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

			renderer = gtk_cell_renderer_text_new();
			column = gtk_tree_view_column_new_with_attributes(" From", renderer, "text",FROM, NULL);
			gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	
			store=gtk_list_store_new(COLUMNS, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);
			f=fopen("claims.txt","r");
			while(fscanf(f,"%s %s %s %s \n",name,servicetype,description,from)!=EOF)
			{
				gtk_list_store_append(store,&iter);
				gtk_list_store_set(store, &iter,SERVICENAME,name,SERVICETYPE,servicetype,DESCRIPTION,description,FROM,from, -1);
			}
			fclose(f);
			gtk_tree_view_set_model(GTK_TREE_VIEW(liste), GTK_TREE_MODEL(store));
			g_object_unref(store);
		}
	}
	GtkWidget *tree;
	tree=lookup_widget(objet_graphique, "ClaimsTree");
	show_claimstree(tree);
	// append claims into choose comboxbox
	GtkWidget *choose;
	choose = lookup_widget(objet_graphique, "ClaimsChoose");
	char claims[100][100];
	int n = get_claims(claims);
	for(int i=0;i<n;i++)
	{
		gtk_combo_box_append_text(GTK_COMBO_BOX(choose),claims[i]);
	}
	
}

