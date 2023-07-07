#include <stdio.h>
#include <conio.h>
#include <math.h>


void InputArr(float X[], int n)
{
	int i;
	printf ("Nhap vao gia tri cac phan tu: ");
	for(i=0;i<n;i++){
		do{
			printf ("\nX[%d]: ",i);
			scanf("%f",&X[i]);
		}
		while(X[i]<=0||X[i]>100);
	}
}
void OutputArr (float X[], int n){
	int i;
	for(i=0;i<n;i++){
		printf ("\nX[%d]: %f",i,X[i]);
	}
}
float AVG( float X[], int n){
	int i;
	float m=0;
	for(i=0;i<n;i++){
		m+=X[i];
	}
	return m/n;
}

float Sumpow( float X[], int n){
	int i;
	float ss=0;
	for(i=0;i<n;i++){
		ss= pow(X[i],2);
	}
	return ss;
}

float Var (float X[], int n){
	int i;
	double dd=0,d=0;
	for(i=0; i<n;i++){
		dd = sqrt((Sumpow(X,n)/n)-pow(AVG(X,n),2));
	}
	d = dd*dd;
	return d;
}

float Stand( float X[], int n){
	int i;
	float d= sqrt((Sumpow(X,n)/n)-pow(AVG(X,n),2));
	return d;
}

int main (){
	int  n;
	float X[n];
	printf ("Nhap vao so phan tu cua mang: ");
	scanf("%d",&n);
	InputArr(X,n); //a
	OutputArr(X,n); //b
	printf ("\nAVG %f",AVG(X,n));
	printf ("\nTong binh phuong: %f",Sumpow(X,n));
	printf ("\nPhuong sai: %lf",Var(X,n));
	printf ("\nGia tri do lech chuan : %lf",Stand(X,n));
}
