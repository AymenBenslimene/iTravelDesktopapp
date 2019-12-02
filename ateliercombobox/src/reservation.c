#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "reservation.h"

int tableau_salle_Reserver(ReservationSalle tab[])
{
int n=0;
FILE *f=fopen("sallesReserve.txt","r");
if (f!=NULL)
{
while(fscanf(f,"%s %c %d %d %d %d",tab[n].num,&tab[n].bloc,&tab[n].dt_res.jour,&tab[n].dt_res.mois,&tab[n].dt_res.annee,&tab[n].hr_resr)!=EOF)
{ n++; }
fclose(f);
}
return n;
}


int verifier_reserver(ReservationSalle sa)
{
ReservationSalle s;
int v=0;
FILE *f=fopen("sallesReserve.txt","r");
if (f!=NULL)
{
	while(!v && fscanf(f,"%s %c %d %d %d %d",s.num,&s.bloc,&s.dt_res.jour,&s.dt_res.mois,&s.dt_res.annee,&s.hr_resr)!=EOF)
{ if(strcmp(s.num,sa.num)==0 )
 { if(( s.dt_res.jour==sa.dt_res.jour) && (s.dt_res.mois==sa.dt_res.mois) && (s.dt_res.annee==sa.dt_res.annee) && (s.hr_resr==sa.hr_resr))
	{v=1;}
}
}
fclose(f);
}
return v ;
}



int tableau_salle_disponible(char salle[50][10],char bloc,Date dt_resr,int hr_resr)
{
int i,nS=0;
FILE *f=fopen("salle.txt","r");
ReservationSalle s;
s.bloc=bloc;
s.dt_res=dt_resr;
s.hr_resr=hr_resr;
if(f!=NULL)
{
	while(fscanf(f,"%s",s.num)!=EOF)
	{ if(s.num[0]==bloc){
		int v=verifier_reserver(s);
	if (!v)
		{ strcpy(salle[nS],s.num); nS++;}
	}
}
}
fclose(f);
return nS;
}

void reserver_salle(ReservationSalle s)
{
	FILE *f=fopen("sallesReserver.txt","a");
	if(f!=NULL)
		{
		fprintf(f,"%s %c %d %d %d %d\n",s.num,s.bloc,s.dt_res.jour,s.dt_res.mois,s.dt_res.annee,s.hr_resr);
fclose(f);
}
}
