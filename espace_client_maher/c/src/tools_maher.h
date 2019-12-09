#include <stdio.h>
#include <string.h>



typedef struct
{
	int day;
	int month;
	int year;
} DATE;

typedef struct 
{
	char from[50];
	char to[50];
	char name[50];
	char surname[50];
	char departing[50];
	char returning[50];
	DATE birthday;
	char phone[50];
	char passport[50];
        char title[50];
	char adress[50];
	char country[50];
	char mail[50];
	char day[50];
	char month[50];
	char year[50];
			
} flight_info;


typedef struct 
{
	int rooms;
	char pension[50];
	char checkin[50];
	char checkout[50];
	char name[50];
	char surname[50];
	DATE birthday;
	char phone[50];
	char passport[50];
        char title[50];
	char adress[50];
	char country[50];
	char mail[50];
	char day[50];
	char month[50];
	char year[50];
			
} hotel_info;

typedef struct 
{
	
	
	char pickup[50];
	char dropoff[50];
	char name[50];
	char surname[50];
	DATE birthday;
	char phone[50];
	char passport[50];
        char title[50];
	char adress[50];
	char country[50];
	char mail[50];
	char day[50];
	char month[50];
	char year[50];
			
} car_info;


