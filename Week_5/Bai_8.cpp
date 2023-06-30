#include <stdio.h>
#include <math.h>
#include <conio.h>

int main (){
	int n,S=0;
	printf ("Nhap vao so nguyen: ");
	do{
		scanf("%d",&n);
		if(n!=0){
			S+=n;
		}
	}
	while(n!=0);
	printf ("Tong cua cac so nguyen la: %d",S);
}
