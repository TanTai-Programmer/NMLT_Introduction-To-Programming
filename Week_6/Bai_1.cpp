#include <stdio.h>
#include <conio.h>
#include <math.h>

int main (){
	int i;
	float doC, doF,C,F;
	printf ("Celius\tFahrenheit\t\tFahrenheit\tCelcius");
	for (i=0;i<=10;i++){
		C=i;
		F=i+32;
		doF=1.8*C+32;
		doC=(5*(F-32))/9;
		printf ("\n%d\t%.2f\t\t\t%.0f\t\t%.2f",i,doF,F,doC);
	}
}
