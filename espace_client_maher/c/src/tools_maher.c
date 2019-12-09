#include "tools_maher.h"

void res_flight(flight_info a)
{
	FILE *f;
	f=fopen("reservation_flight.txt","a");
	fprintf(f,"%s %s %s %s %s %s %s %d/%d/%d %s %s %s %s %s\n",a.from,a.to,a.title,a.name,a.surname,a.departing,a.returning,a.birthday.day,a.birthday.month, a.birthday.year,a.country,a.adress,a.phone,a.passport,a.mail);
	

	fclose(f);	
}


void res_hotel(hotel_info a)
{
	FILE *f;
	f=fopen("reservation_hotel.txt","a");
	fprintf(f,"%s %s %d %s %s %s %s %d/%d/%d %s %s %s %s %s\n",a.checkin,a.checkout,a.rooms,a.pension,a.title,a.name,a.surname,a.birthday.day,a.birthday.month, a.birthday.year,a.country,a.adress,a.phone,a.passport,a.mail);
	

	fclose(f);	
}


void res_car(car_info a)
{
	FILE *f;
	f=fopen("reservation_car.txt","a");
	fprintf(f,"%s %s %s %s %s %d/%d/%d %s %s %s %s %s\n",a.dropoff,a.pickup,a.title,a.name,a.surname,a.birthday.day,a.birthday.month, a.birthday.year,a.country,a.adress,a.phone,a.passport,a.mail);
	

	fclose(f);	
}


