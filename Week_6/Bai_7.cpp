#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
	int n,i,mau,tu;
	float S=0;
	do{
		printf("Nhap vao so nguyen duong N: ");
		scanf("%d",&n);
	}
	while(n<0);
	for(i=0;i<=n;i++){
		tu = pow(-1,i);
		mau= pow((2*i+1),2);
		S+=(float(tu)/float(mau));

	}
	printf ("%f ",S);
}
