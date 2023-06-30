#include <stdio.h>
#include <math.h>

int main (){
	
	int Ams=99,i,tram,chuc,dv,S;
	printf ("So Amstrong co 3 chu so: \n");
	for(i=100;i<999;i++){
		Ams++;
		tram = Ams/100;
		chuc = Ams%100/10;
		dv=Ams%100%10;
		S = pow(tram,3)+pow(chuc,3)+pow(dv,3);
		if(S==Ams){
			printf ("%d  ",Ams);
		}
	}
}
