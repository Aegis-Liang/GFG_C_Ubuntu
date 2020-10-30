// C program to demonstrate the 
// working of strftime() 
#include <stdlib.h> 
#include <stdio.h> 
#include <time.h> 
#define Size 50 

int main () 
{ 
	time_t t ; 
	struct tm *tmp ; 
	char MY_TIME[Size]; 
	time( &t ); 
	
	//localtime() uses the time pointed by t , 
	// to fill a tm structure with the 
	// values that represent the 
	// corresponding local time. 
	
	tmp = localtime( &t ); 
	
	// using strftime to display time 
	strftime(MY_TIME, sizeof(MY_TIME), "%x - %I:%M%p", tmp); 
	
	printf("Formatted date & time : %s\n", MY_TIME ); 
	return(0); 
} 


/*
Some format specifiers for strftime() are shown as follows :
%x = Preferred date representation
%I = Hour as a decimal number (12-hour clock).
%M = Minutes in decimal ranging from 00 to 59.
%p = Either “AM” or “PM” according to the given time value, etc.
%a = Abbreviated weekday name
%A = Full weekday name
%b = Abbreviated month name
%B = Full month name March
%c = Date and time representation
%d = Day of the month (01-31)
%H = Hour in 24h format (00-23)
%I = Hour in 12h format (01-12)
%j = Day of the year (001-366)
%m = Month as a decimal number (01-12)
%M = Minute (00-59)

Structure struct tm is defined in time.h as follows :

struct tm 
{
   int tm_sec;         // seconds
   int tm_min;         // minutes
   int tm_hour;        // hours
   int tm_mday;        // day of the month
   int tm_mon;         // month
   int tm_year;        // The number of years since 1900
   int tm_wday;        // day of the week
   int tm_yday;        // day in the year
   int tm_isdst;       // daylight saving time    
};
*/
