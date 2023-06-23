#include <stdio.h>

int main(){
	int n,t, price;
	printf ("Nhap vao so ao da mua: ");
	scanf("%d",&n);
	if(n<0){
		printf ("Nhap lai gia tri n: ");
		scanf("%d",&t);
		n=t;
	}
	if(n<=3){
		price = n*120000;
	}
	else if(n>3 && n<=6){
		price = n*90000;
	}
	else if(n > 6 && n <=10){
		price = n*85000;
	}
	else{
		price = n*70000;
	}
	printf("Gia cua don hang la: %d", price);
}
