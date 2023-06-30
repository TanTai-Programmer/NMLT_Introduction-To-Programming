#include <stdio.h>
#include <conio.h>

int main(){
	int n,P=1,i;
	printf ("Nhap vao n!: ");
	scanf("%d",&n);
	for(i=1;i<n+1;i++){
		P*=i;
	}
	printf ("Giai thua la: %d",P);
}
