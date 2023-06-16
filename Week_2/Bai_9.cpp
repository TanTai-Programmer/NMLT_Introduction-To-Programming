#include <stdio.h>
#include <conio.h>
#include <math.h>
#define PI 3.141593
int main (){
	float S,V,R;
	printf ("Nhap vao dien tich hinh cau S:");
	scanf("%f",&S);
	R = sqrt((4*PI)/S);
	V= (4/3)*PI*(pow(R,3));
	printf("The Tich hinh cau la: %f",V);
}
