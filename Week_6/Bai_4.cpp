#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
	int n,i,tu=0,lt=0,tu3,mau3;
	float S1,S2,S3=1,S4;
	do{
		printf ("Nhap vao so nguyen duong N: ");
		scanf("%d",&n);
	}
	while (n==0);
	for(i=1;i<=n;i++){
		tu+=i;
		
	}
	S1 = float(tu)/float(n);
	for(i=1;i<=n;i++){
		lt+= pow(i,2);
	}
	S2=sqrt(lt);
	for(i=1;i<=n;i++){
		tu3 = (2*i-1);
		mau3=(2*i);
		S3*=float(tu3)/float(mau3);
	}
	for(i=1;i<=n;i++){
		S4+=i*(i+1)*(i+2);
	}
	printf ("S1: %f \t S2: %.4f \tS3:%f \tS4: %.0f",S1,S2,S3,S4);
}

