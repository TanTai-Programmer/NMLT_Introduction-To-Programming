#include <stdio.h>
#include <conio.h>
#include <math.h>
#define PI 3.141514

int main (){
	double x,y1,y2;
	printf("Nhap vao gia tri x: ");
	scanf("%lf",&x);
	y1 = 4*(pow(x,2) + 10*x*sqrt(x) + 3*x +1);
	y2 = (sin(PI*pow(x,2)) + sqrt(pow(x,2) +1))/ exp(2*x) + cos((PI/4)*x);
	printf ("\nGia tri y1: %.2lf",y1);
	printf("\nGia tri y2: %.2lf",y2);
}
