#include <stdio.h>
#include <conio.h>
#include <math.h>
int main (){
	int i,n,S=0,num;
	printf ("Input the number or term: ");
	scanf("%d",&n);
	for(i=1;i<n+1;i++){
		num = pow(10,i)-1;
		S+=num;
	}
	printf ("S= %d",S);
}
