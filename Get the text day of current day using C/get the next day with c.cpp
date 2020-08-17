#include<stdio.h>

int year,month,day;

int f_day(int days){
	
	printf("\n Input a day :: ");
		scanf("%d", &day);
		
	if(day < days)
		day++;
	else{
		if (month == 12){
			year++;
			month = 1;
			day = 1;
		}else if(day == days){
			month++;
			day = 1;
		}
	}
	
	printf("\n The Next Day is = %d-%d-%d",year,month,day);
}


int f_month(bool leapYear){
	
	printf("\n Input a month :: ");
		scanf("%d", &month);
		
	int days = 31;
	
	if(month == 2){
		if(leapYear)
			days = 29;
		else
			days = 28;
	}else if (month == 1,month == 3,month == 5,month == 7,month == 8,month == 10,month == 12)
		days = 31;
	else
		days = 30;
		
	f_day(days);
}

int f_year(){
	
	printf("\n Input a year :: ");
		scanf("%d", &year);
		
	bool leapYear = true;
	
	if (year % 400 == 0) 
		leapYear = true;
	else if (year % 100 == 0) 
		leapYear = false;
	else if (year % 4 == 0) 
		leapYear = true;
	else
		leapYear = false;
	
	f_month(leapYear);
}

int main(){
	f_year();
}
