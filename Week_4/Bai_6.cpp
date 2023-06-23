#include <stdio.h>

int main (){
	int temp;
	printf ("Input temperatue (C): ");
	scanf("%d",&temp);
	if(temp < 0){
		printf("Freezing weather");
	}	
	if (temp >0 && temp <10){
		printf ("Very Cold weather");
	}
	if( temp >=10 && temp <20){
		printf ("Cold weather");
	}
	if(temp >=20 && temp <30){
		printf("Normal in Temp");
	}
	if(temp>=30 && temp <40){
		printf("Its Hot");
	}
	if(temp >= 40){
		printf ("Its Very Hot");
	}
}
