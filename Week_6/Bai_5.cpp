#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
	int n,i,S=1;
	do{
		printf("Nhap vao so nguyen duong N: ");
		scanf("%d",&n);
	}
	while(n<0);
	if (n%2==0){
		if(n>0){
			for(i=n;i>=1;i--){
			if(i%2==0){
			S*=i;	
			}
		}
		}
		else {
			S=0;
		}
		printf ("%d",S);
	}
	if(n%2!=0){
		for(i=1;i<=n;i++){
			if(i%2!=0){
			S*=i;	
			}
		}
		printf ("%d",S);
	}
}
