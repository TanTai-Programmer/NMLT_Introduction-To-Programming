#include <stdio.h>
#include <conio.h>
#include <math.h>

int main (){
	int n,x,i;
	printf ("Nhap vao 1 so nguyen n tu ban phim: ");
	scanf("%d",&n);
	x=abs(n);
	for (i=1; i< x+1;i++){
		if(x%i==0){
			printf ("%d, ",i);
		}
	}
}
