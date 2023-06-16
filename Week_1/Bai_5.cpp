#include <stdio.h>
#include <conio.h>
#include <math.h>
#define PI 3.141592
int main (){
	float r ;
	printf("Nhap vao ban kinh hinh tron: ");
	scanf("%f",&r);
	float CV, DT;
	CV = r*PI;
	DT = pow(r,2)*PI;
	printf("\n Chu vi hinh tron la: %f",CV);
	printf("\n Dien tich hinh tron la : %f", DT);
}
