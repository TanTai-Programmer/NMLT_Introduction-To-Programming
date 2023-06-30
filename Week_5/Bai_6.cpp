#include <stdio.h>
#include <conio.h>

int main(){
	int n,i,dem=0;
	printf ("Nhap vao 1 so : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if (n%i==0){
			dem++;
		}
	}
	if(dem ==2){
		printf("%d is a prime number",n);
	}
	else {
		printf ("%d is not a prime number",n);
	}
}
