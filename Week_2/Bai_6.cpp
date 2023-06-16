#include <stdio.h>
#include <conio.h>
#include <math.h>

int main (){
	int x;
	printf ("Nhap vao so nguyen x: ");
	scanf("%d",&x);
	double KQ ;
	KQ = (pow(x,2))/(1+(pow(x,2)/(1+(pow(x,2)/(1+pow(x,2))))));
	printf("Ket qua bieu thuc :%.4lf",KQ);
}
