#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
	int i,mau,tu,n=1;
	float A,S=0;
	do{
		printf("Nhap vao so nguyen duong N: ");
		scanf("%d",&A);
	}
	while(A<=0 || A>=2);
	while(S<A){
		printf ("%d",n);
		S+=float(1)/(float(n));
		n++;
	}
	printf ("%d",n);
}
