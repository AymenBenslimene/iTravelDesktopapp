#include "afficher.h"
#include <gtk/gtk.h>
#include <stdio.h>
#include <string.h>

enum
{	USER,
	PASSWORD,
	ROLE,
	COLUMNS
};
void afficher (GtkWidget * liste)
{
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;
char user[30];char password[30];char role[30];
store=NULL;
FILE *f ;
store=gtk_tree_view_get_model(liste);
if(store==NULL)
{ renderer=gtk_cell_renderer_text_new();
column= gtk_tree_view_column_new_with_attributes("user",renderer,"text",USER,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("password",renderer,"text",PASSWORD,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("role",renderer,"text",ROLE,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
store=gtk_list_store_new(COLUMNS, G_TYPE_STRING,G_TYPE_STRING, G_TYPE_STRING);
f=fopen("utilisateur.txt","r");
if(f==NULL) return;
else{ f=fopen("utilisateur.txt","a+");while(fscanf(f,"%s %s %s",user,password,&role)!=EOF)
{gtk_list_store_append(store,&iter);
gtk_list_store_set(store,&iter,USER,user,PASSWORD,password,ROLE,role,-1);
}fclose(f); 
gtk_tree_view_set_model(GTK_TREE_VIEW(liste),GTK_TREE_MODEL(store));
g_object_unref(store);
}
}


}

