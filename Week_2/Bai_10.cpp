#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
	int C,F;
	printf ("Nhap vao nhieu do Fahreneit: ");
	scanf("%d",&F);
	C = 5*(F-32)/9;
	printf ("Do C: %d",C);
	printf ("\nNhap vao nhiet do Celsius: ");
	scanf("%d",&F);
	F= C*9/5 +32;
	printf ("\nDo F: %d",F);
}
