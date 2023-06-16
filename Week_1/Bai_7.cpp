#include <stdio.h>
#include <conio.h>

int main (){
	int days;
	printf("Number of days:");
	scanf("%d",&days);
	int Year = days/365;
	printf("Years: %d",Year);
	int  w= days - (365*Year);
	int Weeks = w/7;
	printf("\nWeek: %d",Weeks);
	int D, Days;
	D = Weeks*7 + 365*Year;
	Days = days -D;
	printf("\nDays: %d",Days);
}
