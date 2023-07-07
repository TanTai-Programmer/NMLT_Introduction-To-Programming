#include <stdio.h>
#include <conio.h>
#include <math.h>

void InputArr(int a[], int w[],int n, int m){
	int i;
	printf ("Nhap vao gia tri cua mang a[]:");
	for(i=0;i<n;i++){
		printf ("\na[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf ("\nNhap vao gia tri cua mang w[]: ");
	for(i=0;i<m;i++){
		printf ("\nw[%d]: ",i);
		scanf("%d",&w[i]);
	}
}
void OutputArr (int a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf ("\ny[%d]: %d",i,a[i]);
	}
}
int Convolution(int a[], int w[], int n, int m, int y[]){
	int i,j,dem=0,S=0,s;
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			s=a[j+i]*w[j];
			S+=s;
		}
		y[dem]=S;
		S=0;
		dem++;
		if(dem>n-2){
			break;
		}

	}
	OutputArr(y,dem-1);
}
int main(){
	int n,m;
	printf("Nhap vao so luong phan tu cua mang a[]: ");
	scanf("%d",&n);
	printf ("\nNhap vao so luong phan tu cua mang w[]:");
	scanf("%d",&m);
	int a[n],w[m],y[n-2];
	InputArr(a,w,n,m);
	Convolution(a,w,n,m,y);
}
