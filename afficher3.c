#include "afficher3.h"
#include <gtk/gtk.h>
#include <stdio.h>
#include <string.h>
enum
{	NAME,
	PRICE,
	DESCRIPTION,
	COLUMNS
};
void afficher3 (GtkWidget * liste)
{
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;
char name[100];char price[100];char description[100];
store=NULL;
FILE *f ;
store=gtk_tree_view_get_model(liste);
if(store==NULL)
{ renderer=gtk_cell_renderer_text_new();
column= gtk_tree_view_column_new_with_attributes("name",renderer,"text",NAME,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("price",renderer,"text",PRICE,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("description",renderer,"text",DESCRIPTION,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
store=gtk_list_store_new(COLUMNS, G_TYPE_STRING,G_TYPE_STRING, G_TYPE_STRING); 
f=fopen("users3.txt","r");
if(f==NULL) return;
else{ f=fopen("users3.txt","a+");while(fscanf(f,"%s %s %s",name,price,&description)!=EOF)
{gtk_list_store_append(store,&iter);
gtk_list_store_set(store,&iter,NAME,name,PRICE,price,DESCRIPTION,description,-1);
}fclose(f); 
gtk_tree_view_set_model(GTK_TREE_VIEW(liste),GTK_TREE_MODEL(store));
g_object_unref(store);
}
}}


