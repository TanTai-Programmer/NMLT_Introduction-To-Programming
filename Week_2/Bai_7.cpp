#include <stdio.h>
#include <conio.h>
#include <math.h>

int main (){
	int x,y;
	printf("Nhap vao hai so nguyen x va y: ");
	scanf("%d%d",&x,&y);
	double KQ ;
	KQ= (sqrt(1 + pow(x,2) + pow(y,2)))/(3+ pow((x+y),2));
	printf(" Ket qua bieu thuc la: %.4lf",KQ);
	
}
