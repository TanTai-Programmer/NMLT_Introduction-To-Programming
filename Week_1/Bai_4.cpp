#include <stdio.h>
#include <conio.h>

int main(){
	float a,b;
	printf("Nhap vao chieu dai hinh chu nhat:");
	scanf("%f",&a);
	printf("Nhap vao chieu rong hinh chu nhat:");
	scanf("%f",&b);
	float Chuvi,DT ;
	Chuvi = (a + b)*2;
	printf ("Chu vi hinh chu nhat la: %.2f",Chuvi);
	DT = a*b;
	printf("\nDien tich hinh chu nhat la: %.2f",DT);
}
