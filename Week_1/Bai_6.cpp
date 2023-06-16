#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
	int w;
	float h;
	printf("Nhap vao can nang (kg): ");
	scanf("%d",&w);
	printf("Nhap vao chieu cao (cm):");
	scanf("%f",&h);
	h=h*0.01;
	float BMI ;
	BMI= float(w)/(h*h);
	printf("Chi so BMI la: %.2f",BMI);
}
